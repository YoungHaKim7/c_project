# link

- [justfile(c23)](#justfilec23)
  - [LinuxOS VS macOS justfile gcc세팅](linux-or-macos)
- [Cmake](#cmake)
- [.clang-format](#clang-format)
- [Tutorial 유튜브 영상Pointers in C for Absolute Beginners - Full Course | freeCodeCamp.org](#화질-좋다pointers-in-c-for-absolute-beginners--full-course-freecodecamporg)

- Pass-By-Value
- Pass-by-reference


# (화질 좋다)Pointers in C for Absolute Beginners – Full Course| freeCodeCamp.org[|🔝|](#link)
- https://youtu.be/MIL2BK02X8A?si=5Ib3eYWmTEFAK-c4

- Declaration tells me "how to use"
  - TL;DR
	  - The notation of a variable declaration says
		  - "what you must do to something" to "get something of the specified data"
	- 요약
    - 변수 선언의 표기법은 다음과 같습니다
      - "지정된 데이터를 얻기 위해 반드시 해야 할 일"

```c
// "To get an int just use n"
// int를 얻으려면 n을 사용하세요.
int   n;

// "To get an int just dereference n"
//"int  그냥 디레퍼런스 n을 얻으려면"
int  *n;


// "To get an int just use n[i]"
// int를 얻으려면 n[i]을 사용하세요."   index로 원하는 인덱스로 접근한다 .  알고리즘에서 랜덤 액세는 인덱쓰가 짱 읽기 전용에 쓰면 됨.
int   n[3];



// "To get an int just call foo with the related inputs"
// "Int를 받으려면 관련 입력과 함께 푸(foo)에게 전화(call)하세요."
// parameter 가  n, n1 이다
int   foo(int n, float n1);
```


- Declarations tell us "How to use x to get y"


```c

int   n, *pn, **pn2;
    // ^  ^     ^
		// |  |     |
	  // They all will yield an int type when used in this way in an expression
		// // 이와 같은 방식으로 표현할 때 모두 int 타입을 생성합니다


```

- Pointers FAQ
  - Advantages of passing pointers as arguments compared to passing by value

- 포인터 FAQ
  - 값으로 전달하는 것에 비해 포인터를 인수로 전달하는 것의 장점

<hr />

# Pass-By-Value[|🔝|](#link)
- Easy to understand
  - You just pass copies, nothing fancy to "dereference"
- Safe
  - Original Data won't be modified by the called function
- Performance overhead
  - A big object like a struct to be copied it's really bad performance-wise. Time consuming and memory intensive.
- Short reach (Lack of direct access)
  - Called functions can only modify local copies (this can be a + but also a ~)
- 이해하기 쉬운
  - 그냥 복사본을 넘기면 "비참조"할 만한 것은 없습니다
- 안전
  - 원본 데이터는 호출된 함수에 의해 수정되지 않습니다
- 성과 오버헤드
  - 복사할 구조물과 같은 큰 객체는 성능 면에서 정말 좋지 않습니다. 시간 소모적이고 메모리 집약적입니다.
- 짧은 도달 거리(직접 접근 부족)
  - 호출된 함수는 로컬 복사본만 수정할 수 있습니다(이것은 +일 수도 있지만 ~일 수도 있습니다)

<hr />

# Pass-by-reference[|🔝|](#link)
- 40min 35sec
- Efficiency
  - You just pass an address, it can point to a gigantic structure, not a problem.

- Direct access
  - I can modify data outside the called function. This tric allows me to kinda "return multiple values"

- Side effects
  - I can write impossible to read code given that pointer can change values on other locations. "With great power comes great responsibility"

- Complexity
  - Taming pointers can be indeed complex, especially multilevel pointer (i.e. *****ptr)

- 효율성
  - 주소를 전달하기만 하면 문제가 아닌 거대한 구조물을 가리킬 수 있습니다.

- 직접 액세스
  - 호출된 함수 외부의 데이터를 수정할 수 있습니다. 이 트리를 사용하면 "여러 값을 반환"할 수 있습니다

- 부작용
  - 포인터가 다른 위치의 값을 변경할 수 있기 때문에 코드를 읽을 수 없습니다. "큰 힘에는 큰 책임이 따릅니다."

- 복잡성
  - 포인터 길들이기는 정말 복잡할 수 있습니다. 특히 다단계 포인터(즉, *****ptr)


<hr />

# Linux or macOS[|🔝|](#link)
```justfile
# LinuxOS
# which g++ (c23 + 26)
gpp_which := "/opt/gcc-15/bin/gcc"
clang_which := "/usr/bin/clang-20"

# macOS
# which g++ (c23)
gpp_which := "/opt/homebrew/opt/gcc@15/bin/gcc-15"
clang_which := "/opt/homebrew/opt/llvm/bin/clang"

# 내가 원하는 gcc , g++ 최신 버젼 폴더로 글로벌CC, CXX로 설정해주기
export CC={{gcc_which}}
export CXX={{gpp_which}}
```


# justfile(C23[|🔝|](#link))

```justfile

project_name := `basename "$(pwd)"`

# which clang
clang_which := "/usr/bin/clang-20"
gcc_which := "/opt/gcc-15/bin/gcc"

# Source and target directories
src_dir := "./src"
target_dir := "./target"

# clang-format 20
clang_format := "clang-format-20"

# Files
source := src_dir+"/main.c"
target := target_dir+"/main"

# Common flags
ldflags_common := "-std=c23 -pedantic -pthread -pedantic-errors -lm -Wall -Wextra -ggdb -Werror"
ldflags_debug := "-c -pthread -lm -Wall -Wextra -ggdb"
ldflags_emit_llvm := "-S -emit-llvm"
ldflags_assembly := "-Wall -save-temps"
ldflags_fsanitize_address := "-O1 -g -fsanitize=address -fno-omit-frame-pointer -c"
ldflags_fsanitize_object := "-g -fsanitize=address"
ldflags_fsanitize_valgrind := "-fsanitize=address -g3"
ldflags_optimize :=  "-Wall -O2 -pedantic -pthread -pedantic-errors -lm -Wextra -ggdb"

# fmt
fmt_flags := ". -regex '.*\\.\\(cpp\\|hpp\\|cc\\|cxx\\|c\\|h\\)' -exec "+clang_format+" -style=file -i {} \\;"


# (C)clang compile
r:
	rm -rf target
	mkdir -p target
	{{gcc_which}} {{ldflags_common}} -o {{target}} {{source}}
	{{target}}

# (C)clang compile(Optimization)
ro:
	rm -rf target
	mkdir -p target
	clang {{ldflags_optimize}} -o {{target}} {{source}}
	{{target}}

# cmake compile
cr:
	rm -rf build
	mkdir -p build
	export CC={{gcc_which}}
	cmake -D CMAKE_C_COMPILER={{gcc_which}} -G Ninja .
	ninja
	mv build.ninja CMakeCache.txt CMakeFiles cmake_install.cmake target .ninja_deps .ninja_log build
	./build/target/{{project_name}}

# zig C compile
zr:
	rm -rf target
	mkdir -p target
	export CC={{gcc_which}}
	zig cc {{ldflags_common}} -o {{target}} {{source}}
	{{target}}

# clang build
b:
	rm -rf target
	mkdir -p target
	clang {{ldflags_debug}} -o {{target}} {{source}}

# .clang-format init
cl:
	rm -rf .clang-format
	{{clang_format}} -style=WebKit -dump-config > .clang-format

# .clang-format fmt
fmt:
	find {{fmt_flags}}

# clang LLVM emit-file
ll:
	rm -rf target
	mkdir -p target
	cp -rf {{src_dir}}/main.c ./
	clang {{ldflags_emit_llvm}} main.c
	mv *.ll {{target_dir}}
	clang {{ldflags_common}} -o {{target}} {{source}}
	mv *.cpp {{target_dir}}
	rm -rf *.out

# Assembly emit-file
as:
	rm -rf target
	mkdir -p target
	clang {{ldflags_assembly}} -o {{target}} {{source}}
	mv *.i {{target_dir}}
	mv *.o {{target_dir}}
	mv *.s {{target_dir}}
	mv *.bc {{target_dir}}

# clang fsanitize_address
fsan:
	rm -rf target
	mkdir -p target
	clang {{ldflags_fsanitize_address}} {{source}} -o {{target}}
	clang {{ldflags_fsanitize_object}} {{target}}
	mv *.out {{target_dir}}

# leak memory check(valgrind)
mem:
	rm -rf target
	mkdir -p target
	clang {{ldflags_fsanitize_valgrind}} {{source}} -o {{target}}
	valgrind --leak-check=full {{target}}

# object file emit-file
obj:
	rm -rf target
	mkdir -p target
	clang {{ldflags_assembly}} -o {{target}} {{source}}
	mv *.ii {{target_dir}}
	mv *.o {{target_dir}}
	mv *.s {{target_dir}}
	mv *.bc {{target_dir}}
	objdump --disassemble -S -C {{target_dir}}/main.o

# hex view
xx:
	rm -rf target
	mkdir -p target
	clang {{ldflags_fsanitize_valgrind}} {{source}} -o {{target}}
	xxd -c 16 {{target}}

# clean files
clean:
	rm -rf {{target_dir}} *.out {{src_dir}}/*.out *.bc {{src_dir}}/target/ *.dSYM {{src_dir}}/*.dSYM *.i *.o *.s
	rm -rf build CMakeCache.txt CMakeFiles

# C init
init:
	mkdir -p src
	echo '# BasedOnStyle: WebKit' > .clang-format
	echo '# LLVM, Google, Chromium, Mozilla, WebKit' >> .clang-format
	echo "" >> .clang-format
	echo 'BasedOnStyle: WebKit' >> .clang-format
	echo 'IndentWidth: 4' >> .clang-format
	echo 'ContinuationIndentWidth: 4' >> .clang-format
	echo 'IndentCaseLabels: false' >> .clang-format
	echo 'IndentCaseBlocks: false' >> .clang-format
	echo 'IndentGotoLabels: true' >> .clang-format
	echo 'IndentPPDirectives: None' >> .clang-format
	echo 'IndentExternBlock: NoIndent' >> .clang-format
	echo '#include <stdio.h>' > src/main.c
	echo '' >> src/main.c
	echo 'int main(void) {' >> src/main.c
	echo '    printf("Hello world C lang ");' >> src/main.c
	echo '    return 0;' >> src/main.c
	echo '}' >> src/main.c

# Debugging(VSCode)
vscode:
	rm -rf .vscode
	mkdir -p .vscode
	echo '{' > .vscode/launch.json
	echo '    "version": "0.2.0",' >> .vscode/launch.json
	echo '    "configurations": [' >> .vscode/launch.json
	echo '        {' >> .vscode/launch.json
	echo '            "type": "lldb",' >> .vscode/launch.json
	echo '            "request": "launch",' >> .vscode/launch.json
	echo '            "name": "Launch",' >> .vscode/launch.json
	echo '            "program": "${workspaceFolder}/target/${fileBasenameNoExtension}",' >> .vscode/launch.json
	echo '            "args": [],' >> .vscode/launch.json
	echo '            "cwd": "${workspaceFolder}"' >> .vscode/launch.json
	echo '            // "preLaunchTask": "C/C++: clang build active file"' >> .vscode/launch.json
	echo '        },' >> .vscode/launch.json
	echo '        {' >> .vscode/launch.json
	echo '            "name": "gcc - Build and debug active file",' >> .vscode/launch.json
	echo '            "type": "cppdbg",' >> .vscode/launch.json
	echo '            "request": "launch",' >> .vscode/launch.json
	echo '            "program": "${fileDirname}/target/${fileBasenameNoExtension}",' >> .vscode/launch.json
	echo '            "args": [],' >> .vscode/launch.json
	echo '            "stopAtEntry": false,' >> .vscode/launch.json
	echo '            "cwd": "${fileDirname}",' >> .vscode/launch.json
	echo '            "environment": [],' >> .vscode/launch.json
	echo '            "externalConsole": false,' >> .vscode/launch.json
	echo '            "MIMode": "lldb"' >> .vscode/launch.json
	echo '            // "tasks": "C/C++: clang build active file"' >> .vscode/launch.json
	echo '        }' >> .vscode/launch.json
	echo '    ]' >> .vscode/launch.json
	echo '}' >> .vscode/launch.json
	echo '{' > .vscode/tasks.json
	echo '    "tasks": [' >> .vscode/tasks.json
	echo '        {' >> .vscode/tasks.json
	echo '            "type": "cppbuild",' >> .vscode/tasks.json
	echo '            "label": "C/C++: clang build active file",' >> .vscode/tasks.json
	echo '            "command": "{{clang_which}}",' >> .vscode/tasks.json
	echo '            "args": [' >> .vscode/tasks.json
	echo '                "-c",' >> .vscode/tasks.json
	echo '                "-fcolor-diagnostics",' >> .vscode/tasks.json
	echo '                "-fansi-escape-codes",' >> .vscode/tasks.json
	echo '                "-g",' >> .vscode/tasks.json
	echo '                "${file}",' >> .vscode/tasks.json
	echo '                "-o",' >> .vscode/tasks.json
	echo '                "${fileDirname}/target/${fileBasenameNoExtension}"' >> .vscode/tasks.json
	echo '            ],' >> .vscode/tasks.json
	echo '            "options": {' >> .vscode/tasks.json
	echo '                "cwd": "${fileDirname}"' >> .vscode/tasks.json
	echo '            },' >> .vscode/tasks.json
	echo '            "problemMatcher": [' >> .vscode/tasks.json
	echo '                "$gcc"' >> .vscode/tasks.json
	echo '            ],' >> .vscode/tasks.json
	echo '            "group": {' >> .vscode/tasks.json
	echo '                "kind": "build",' >> .vscode/tasks.json
	echo '                "isDefault": true' >> .vscode/tasks.json
	echo '            },' >> .vscode/tasks.json
	echo '            "detail": "Task generated by Debugger."' >> .vscode/tasks.json
	echo '        }' >> .vscode/tasks.json
	echo '    ],' >> .vscode/tasks.json
	echo '    "version": "2.0.0"' >> .vscode/tasks.json
	echo '}' >> .vscode/tasks.json

```


# CMake[|🔝|](#link)


```cmake
cmake_minimum_required(VERSION 4.0)

get_filename_component(ProjectId ${CMAKE_CURRENT_SOURCE_DIR} NAME)
string(REPLACE " " "_" ProjectId ${ProjectId})
project(${ProjectId} LANGUAGES C)

# Force GCC 15
set(CMAKE_CC_COMPILER "/opt/gcc-15/bin/gcc")

set(CMAKE_CXX_STANDARD 26)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
SET (CMAKE_C_FLAGS_INIT                "-Wall -std=c23")
SET (CMAKE_C_FLAGS_DEBUG_INIT          "-g")
SET (CMAKE_C_FLAGS_MINSIZEREL_INIT     "-Os -DNDEBUG")
SET (CMAKE_C_FLAGS_RELEASE_INIT        "-O3 -DNDEBUG")
SET (CMAKE_C_FLAGS_RELWITHDEBINFO_INIT "-O2 -g")

SET (CMAKE_CXX_FLAGS_INIT                "-Wall -std=c++23")
SET (CMAKE_CXX_FLAGS_DEBUG_INIT          "-g")
SET (CMAKE_CXX_FLAGS_MINSIZEREL_INIT     "-Os -DNDEBUG")
SET (CMAKE_CXX_FLAGS_RELEASE_INIT        "-O3 -DNDEBUG")
SET (CMAKE_CXX_FLAGS_RELWITHDEBINFO_INIT "-O2 -g")

# Common compile flags
add_compile_options(
    -pedantic
    -pthread
    -pedantic-errors
    -lm
    -Wall
    -Wextra
    -ggdb
    -std=c23
)

# Main executable with mandelbrot sources
add_executable(${ProjectId}
    src/main.c
    src/merge_sort.c
    # src/mandelbrot.c
)

target_link_options(${ProjectId} PRIVATE -pthread -lm)

# Output directory
set_target_properties(${ProjectId} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/target
)
```

# .clang-format[|🔝|](#link)


```clang-format
# BasedOnStyle: WebKit
# LLVM, Google, Chromium, Mozilla, WebKit

BasedOnStyle: WebKit
IndentWidth: 4
ContinuationIndentWidth: 4
IndentCaseLabels: false
IndentCaseBlocks: false
IndentGotoLabels: true
IndentPPDirectives: None
IndentExternBlock: NoIndent

ColumnLimit: 80
```
