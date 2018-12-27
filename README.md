# JADE

### *(Jade's A Developing Experiment)*

### JADE consists of a C++ include file with Defines/Macros, and a library of Functions that seeks to provide an easier way of creating C++ code.

#### JADE is licensed under the [MIT License]().


### This is a proof of concept using a BASIC-like syntax to program C++.

### For the list of current Keywords, see the [Keywords]() file

### For the Function prototypes, see the [Prototypes]() file

## Building the Library


To build the library, a simple `make` in the source folder is all that is required.

To build the Examples, change directory to the Examples folder and type `make`.

## How to link to the library
You have two choices:

1. Copy libjade.a to `/usr/local/lib` (you might need to create that folder), and copy jade.hpp to `/usr/local/include`.
2. The seccond approach requres you to pass the location of the jade.h and the libjade.a file to g++, like so:

`g++ -std=c++11 -I<path to jade.h> -L<path to libjade>`

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








