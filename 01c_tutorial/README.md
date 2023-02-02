# C Languages Tutorial

https://github.com/EbookFoundation/free-programming-books/blob/main/books/free-programming-books-langs.md#c

# C Tutorial 2

https://www.tutorialspoint.com/cprogramming/

# C 3

["Let us C - Yashavant Kanetkar (PDF) (🗃️ latest 14th edition)](https://ia903402.us.archive.org/1/items/let-us-c/LET%20US%20C.pdf)

# Compilers

Use every available and reasonable set of warning options. Some warning options only work with optimizations enabled, or work better the higher the chosen level of optimization is, for example 
```-Wnull-dereference```
 with GCC.

You should use as many compilers as you can for your platform(s). Each compiler implements the standard slightly differently and supporting multiple will help ensure the most portable, most reliable code.

# GCC / Clang
```-Wall -Wextra -Wshadow -Wnon-virtual-dtor -pedantic``` 
- use these and consider the following (see descriptions below)

## see descriptions below

- ```-pedantic``` - Warn on language extensions

- ```-Wall -Wextra``` reasonable and standard
-Wshadow warn the user if a variable declaration shadows one from a parent context
-Wnon-virtual-dtor warn the user if a class with virtual functions has a non-virtual destructor. This helps catch hard to track down memory errors
-Wold-style-cast warn for c-style casts
-Wcast-align warn for potential performance problem casts
-Wunused warn on anything being unused
-Woverloaded-virtual warn if you overload (not override) a virtual function
-Wpedantic (all versions of GCC, Clang >= 3.2) warn if non-standard C++ is used
-Wconversion warn on type conversions that may lose data
-Wsign-conversion (Clang all versions, GCC >= 4.3) warn on sign conversions
-Wmisleading-indentation (only in GCC >= 6.0) warn if indentation implies blocks where blocks do not exist
-Wduplicated-cond (only in GCC >= 6.0) warn if if / else chain has duplicated conditions
-Wduplicated-branches (only in GCC >= 7.0) warn if if / else branches have duplicated code
-Wlogical-op (only in GCC) warn about logical operations being used where bitwise were probably wanted
-Wnull-dereference (only in GCC >= 6.0) warn if a null dereference is detected
-Wuseless-cast (only in GCC >= 4.8) warn if you perform a cast to the same type
-Wdouble-promotion (GCC >= 4.6, Clang >= 3.8) warn if float is implicitly promoted to double
-Wformat=2 warn on security issues around functions that format output (i.e., printf)
-Wlifetime (only special branch of Clang currently) shows object lifetime issues
-Wimplicit-fallthrough Warns when case statements fall-through. (Included with -Wextra in GCC, not in clang)
Consider using -Weverything and disabling the few warnings you need to on Clang

-Weffc++ warning mode can be too noisy, but if it works for your project, use it also.

https://github.com/cpp-best-practices/cppbestpractices/blob/master/02-Use_the_Tools_Available.md