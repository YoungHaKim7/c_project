# C만든 개발자가 쓴 책 Dr. Chuck reads C Programming (the classic book by Kernigan and Ritchie)

- https://youtu.be/j-_s8f5K30I?si=7GusIq2PSS3y9UnA

# (화질 좋다)Pointers in C for Absolute Beginners – Full Course| freeCodeCamp.org
- https://youtu.be/MIL2BK02X8A?si=5Ib3eYWmTEFAK-c4

# Pointers in C / C++ [Full Course] | freeCodeCamp.org

- https://youtu.be/zuegQmMdy8M?si=wvjcN32Ro5GxL1q6

<hr>

# C without libraries? - Welcome to nolibC | mqxf
- https://www.youtube.com/live/-UK_fX7lz5o?si=CtgEEFcWeEW-pQm9

<hr>

# C언어 기본서 오픈 집필 
- https://github.com/pr0gr4m/Hello-C-World

# C에서 String개념 잡기

https://www.geeksforgeeks.org/strings-in-c/

Memory Layout code https://gist.github.com/edrdo/1254ab52de72688cdfce5d72066f3a7e

<br>


# The LLVM Compiler Infrastructure 

https://llvm.org/

<br>

<hr>

# 고생하면서 배우는 C언어 (일본어)苦しんで覚えるＣ言語

https://9cguide.appspot.com/index.html

<hr>

# C Language Tutorials In Hindi

https://youtube.com/playlist?list=PLu0W_9lII9aiXlHcLx-mDH1Qul38wD3aR

  - C Tutorial 2

    - https://www.tutorialspoint.com/cprogramming/

  - C Tutorial 3 | C Programming for Beginners | Full Course

    - https://youtu.be/ssJY5MDLjlo

# C Programming Tutorials | Portfolio Courses

https://youtube.com/playlist?list=PLA1FTfKBAEX4hblYoH6mnq0zsie2w6Wif&si=ol75xhiOWd3ttQCj

- Find the Minimum Number in an Array | C Programming Example
  - https://youtube.com/playlist?list=PLA1FTfKBAEX6dPcQitk_7uL3OwDdjMn90&si=cYporQe4JnWjh5zv

# [나우캠퍼스]c-game_programming

https://youtube.com/playlist?list=PLEk6DN9YLL6eKcB-m_KlsIcd5i3Ci-CHk&si=7RYOaSVTpw2ZLzQo

<hr>

# C Tutorial (e-Book)


# C Languages Tutorial

https://github.com/EbookFoundation/free-programming-books/blob/main/books/free-programming-books-langs.md#c

["Let us C - Yashavant Kanetkar (PDF) (🗃️ latest 14th edition)](https://ia903402.us.archive.org/1/items/let-us-c/LET%20US%20C.pdf)

<hr>

# C language Syntax Summary(MS)

https://learn.microsoft.com/en-us/cpp/c-language/c-language-syntax-summary?view=msvc-170

# Intro to Systems Programming, the C Language, and Tools for Software

https://youtube.com/playlist?list=PLKUb7MEve0TjHQSKUWChAWyJPCpYMRovO

# C Programming - 2021 || Hands-on

https://youtube.com/playlist?list=PLf2x9zGTmznByH3T_cakNCU1w73Lv9t4v

# C Programming

https://codeahoy.com/learn/cprogramming/ch4/

<hr>


# 연산자 종류

https://yhong.tistory.com/37

- 비트 논리 연산자 (bitwise operator)

```
&  and
|  or 
^ xor
~ not
```

<table border="1">
    <tr>
    <td colspan="6" align="center">비트 연산자(bitwise operator)</td>
    </tr>
    <tr align="center">
        <td>a(비트 값)</td>
        <td>b(비트 값)</td>
        <td>a & b</td>
        <td>a | b</td>
        <td>a ^ b</td>
        <td>~a</td>
    </tr>
    <tr align="center">
        <td>0</td>
        <td>0</td>
        <td>0</td>
        <td>0</td>
        <td>0</td>
        <td>1</td>
    </tr>
    <tr align="center">
        <td>0</td>
        <td>1</td>
        <td>0</td>
        <td>1</td>
        <td>1</td>
        <td>1</td>
    </tr>
    <tr align="center">
        <td>1</td>
        <td>0</td>
        <td>0</td>
        <td>1</td>
        <td>1</td>
        <td>0</td>
    </tr>
    <tr align="center">
        <td>1</td>
        <td>1</td>
        <td>1</td>
        <td>1</td>
        <td>0</td>
        <td>0</td>
    </tr>
</table>

# C bitwise operators 🔣(설명 코드랑 같이 해줘서 최고)
https://youtu.be/BGeOwlIGRGI?si=B6dz6TQirbqXBfqm

- Bitwise Operators in C (Part 1)
  - https://youtu.be/jlQmeyce65Q?si=6WSyKfXL2NdnfyOA


<hr>

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

- ```-Wshadow``` warn the user if a variable declaration shadows one from a parent context

- ```-Wnon-virtual-dtor``` warn the user if a class with virtual functions has a non-virtual destructor. This helps catch hard to track down memory errors

- ```-Wold-style-cast``` warn for c-style casts

- ```-Wcast-align``` warn for potential performance problem casts
-Wunused warn on anything being unused

- ```-Woverloaded-virtual``` warn if you overload (not override) a virtual function

- ```-Wpedantic``` (all versions of GCC, Clang >= 3.2) warn if non-standard C++ is used

- ```-Wconversion``` warn on type conversions that may lose data

- ```-Wsign-conversion``` (Clang all versions, GCC >= 4.3) warn on sign conversions

- ```-Wmisleading-indentation``` (only in GCC >= 6.0) warn if indentation implies blocks where blocks do not exist

- ```-Wduplicated-cond``` (only in GCC >= 6.0) warn if if / else chain has duplicated conditions

- ```-Wduplicated-branches``` (only in GCC >= 7.0) warn if if / else branches have duplicated code

- ```-Wlogical-op``` (only in GCC) warn about logical operations being used where bitwise were probably wanted

- ```-Wnull-dereference``` (only in GCC >= 6.0) warn if a null dereference is detected

- ```-Wuseless-cast``` (only in GCC >= 4.8) warn if you perform a cast to the same type

- ```-Wdouble-promotion``` (GCC >= 4.6, Clang >= 3.8) warn if float is implicitly promoted to double

- ```-Wformat=2``` warn on security issues around functions that format output (i.e., printf)

- ```-Wlifetime``` (only special branch of Clang currently) shows object lifetime issues

- ```-Wimplicit-fallthrough``` Warns when case statements fall-through. (Included with -Wextra in GCC, not in clang)

Consider using ```-Weverything``` and disabling the few warnings you need to on Clang

- ```-Weffc++``` warning mode can be too noisy, but if it works for your project, use it also.


https://github.com/cpp-best-practices/cppbestpractices/blob/master/02-Use_the_Tools_Available.md


<br>

<hr>

<br>

# Exercises for PULP hands-on trainings

https://github.com/pulp-platform/pulp-training

<br>
