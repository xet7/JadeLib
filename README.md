# JADE

### *(Jade's A Developing Experiment)*

### JADE consists of a C++ include file with Defines/Macros, and a library of Functions that seeks to provide an easier way of creating C++ code.

#### JADE is licensed under the [MIT License](#Licence).


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

<a name="licence">
## Licence ##
</a>

**Jade is licenced under the MIT License**

**Copyright 2016-2019 Armando I. Rivera**

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.







