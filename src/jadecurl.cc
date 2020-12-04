#include <jade.hpp>
#include <curl/curl.h>

typedef int (*JADE_PROGRESS_CALLBACK) (void*,double,double,double,double);
typedef int (*JADE_WRITE_CALLBACK) (void*,long,long,void*);


FUNCTION INTEGER jade_curl_progress_callback(void* clientp, double dltotal, double dlnow, double ultotal, double ulnow ) DO
    printf("Downloaded %d of %d bytes\r",(int)dlnow,(int)dltotal);
    RETURN 0; 
END

FUNCTION INTEGER jade_curl_write_data_callback (void* content, long size, long nmemb, void* stream) DO
    ((std::string*)stream)->append((char*)content, size * nmemb);
    RETURN size * nmemb;
END

FUNCTION STRING downloadPage(STRING url,JADE_WRITE_CALLBACK write_callback = jade_curl_write_data_callback) {
    void* handle;
    INTEGER success;
    STRING buffer$;

    handle = curl_easy_init();    
    curl_easy_setopt(handle, CURLOPT_URL, url.c_str());
    curl_easy_setopt(handle, CURLOPT_FOLLOWLOCATION,1);
    curl_easy_setopt(handle, CURLOPT_WRITEFUNCTION, write_callback);
    curl_easy_setopt(handle, CURLOPT_WRITEDATA, &buffer$);


        success = curl_easy_perform(handle);

    curl_easy_cleanup(handle);     

    RETURN buffer$; 
END

SUB downloadFile(STRING url, STRING downloadFileName, JADE_PROGRESS_CALLBACK progress_callback=jade_curl_progress_callback)  {
    void* handle;
    int success;
    FILE *fp;

    handle = curl_easy_init();    
    if ((fp = fopen(downloadFileName.c_str(), "wb+"))) {
        curl_easy_setopt(handle, CURLOPT_URL, url.c_str());
        curl_easy_setopt(handle, CURLOPT_FOLLOWLOCATION,1);
        curl_easy_setopt(handle, CURLOPT_WRITEDATA, fp);
        curl_easy_setopt(handle, CURLOPT_NOPROGRESS,0);
        curl_easy_setopt(handle, CURLOPT_PROGRESSDATA,downloadFileName.c_str());
        curl_easy_setopt(handle, CURLOPT_PROGRESSFUNCTION,progress_callback);
    
        success = curl_easy_perform(handle);
        fclose(fp);
    }
    curl_easy_cleanup(handle);
    printf("\n\nDownload of '%s' Complete.\n\n", downloadFileName.c_str());
END


