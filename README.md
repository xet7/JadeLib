# JADE

JADE is BASIC-like syntax to program C++, using header file.

- Newest JADE upstream: https://git.binarymagic.net/AIR/jade
- Mirror of upstream: https://github.com/binarymagicnet/jade
- Originally was at https://git.binarymagic.net/AIR/JadeLib
- This repo is old fork of old original repo with some examples added from JadeLib forum. Those same examples could also be at newest upstream at https://git.binarymagic.net/AIR/JadeLib

### *(Jade's A Developing Experiment)*

### JADE consists of a C++ include file with Defines/Macros, and a library of Functions that seeks to provide an easier way of creating C++ code.

### This is a proof of concept using a BASIC-like syntax to program C++.

### For the list of current Keywords, see the [Keywords]() file

### For the Function prototypes, see the [Prototypes]() file

#### You can regenerate both files by compiling and running the included `generate-keywords.cc` file.

## Building the Library


To build the library, a simple `make` in the source folder is all that is required.

To build the Examples, change directory to the Examples folder and type `make`.

## How to link to the library
You have two choices:

1. If you used the `make install` option, you can link to the library with `-ljade`
2. The seccond approach requres you to pass the location of the jade.h and the libjade.a file to g++, like so:

`g++ -std=c++11 -I<path to jade.h> -L<path to libjade> -ljade`

**Note:  You MUST compile using `-std=c++11` or higher.**

## What does coding with JADE look like?

```
#include <jade.hpp>

MAIN
    VAR MyArray = SPLIT("pear,cranberry,orange,apple,carrot,banana,grape,peaches,tangerines",",");

    SORT(MyArray);

    FOR (VAR item IN MyArray) DO 
        PRINT(item);
    END
END
```

#### Compile it with:
`g++ -std=c++11 sorttest.cc -ljade -o sorttest`

## "What if I don't want to retype the entire g++ command every time I compile..."
For simple one-off compilation, I created a `Bash Function` that I added to my ~/.bash_profile (on my Mac) and ~/.bashrc (On my Linux box) that looks like this:

```bash
# JADE
function jade() { 
    g++ -std=c++11 "$@" -ljade -o "${1%.*}"
}
```

So I can invoke the compilation of the demo above like so:

`jade sort_test.cc`

**NOTE:  Any additional linker options need to be placed AFTER the primary filename, including any additional files or libraries.**

## Let me know if you have any questions/comments.

You can post your questions/comments at: [JADE Sub-Forum on allbasic.info](https://www.allbasic.info/forum/index.php?board=22.0)






