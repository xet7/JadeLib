/* This is how Im creating a MAC application bundle while testing
   Uncomment this if compiling under MacOS
   $onexit "rm -rf $FILE$.app && mkdir -p $FILE$.app/Contents/MacOS && cp $FILE$ $FILE$.app/Contents/MacOS && open $FILE$.app"
*/
#include "../../jade.hpp"
#include <wx/wx.h>
#include <wx/image.h>
#include <wx/wxhtml.h>
#include <wx/fs_zip.h>
#include <wx/log.h>
#include <wx/filedlg.h>

class MyApp: public wxApp {
    // override base class virtuals
    // ----------------------------
	public:
        virtual bool OnInit();
        virtual int OnExit();

        /* Sub that Responds to idle event */
        void OnIdle(wxIdleEvent& event);

	private:
        bool                  m_exitIfNoMainWindow;
        wxHtmlHelpController*	help;
        wxFileName            fName;

		DECLARE_EVENT_TABLE()
};

/* Connect to idle event */
BEGIN_EVENT_TABLE(MyApp, wxApp)
    EVT_IDLE(MyApp::OnIdle)
END_EVENT_TABLE()


/* Implement the Application Object */
IMPLEMENT_APP(MyApp)

/* Initialize Application */
FUNCTION BOOL MyApp::OnInit() DO
	INT i;

	/* Used as Exit status flag */
  m_exitIfNoMainWindow = FALSE;

  /* Assign the name of the HelpFile to the wxFileName object */
  fName.Assign( wxT("book.htb") );

  /* Dont exit immediately when app window is closed */
  #ifdef __APPLE__
    SetExitOnFrameDelete(false);
  #endif

  /* Initialize all available image handlers */
  wxInitAllImageHandlers();

  /* Enable virtual Zip FileSystem */
  wxFileSystem::AddHandler(new wxZipFSHandler);

  /* Set the Application Name (NOT SHOWN ON TITLEBAR!) */
  SetAppName( wxT("Help Viewer") );



  /* Initialize the HelpController Object */
  help = new wxHtmlHelpController(wxHF_DEFAULT_STYLE|wxHF_OPEN_FILES);

  /* Add the HelpFile to the HelpController */
  help->AddBook(fName);

  /* Show the HelpFile */
  help->DisplayContents();

  /* Set the Help windows as topmost */
  SetTopWindow( help->GetFrame() );



  /* Set the exit flag to true */
  m_exitIfNoMainWindow = TRUE;

    RETURN TRUE;
ENDFUNCTION


/* Idle Event */
SUB MyApp::OnIdle(wxIdleEvent &event) DO

  /* Exit if Window is closed */
  IF (m_exitIfNoMainWindow AND NOT GetTopWindow()) THEN
    ExitMainLoop();
  ENDIF

  /* Sort of like DoEvents */
  event.Skip();
  event.RequestMore();
ENDSUB


/* Called when Application Exits */
FUNCTION INT MyApp::OnExit() DO

  /* Delete the HelpController Object */
  delete help;

  RETURN 0;
ENDFUNCTION
