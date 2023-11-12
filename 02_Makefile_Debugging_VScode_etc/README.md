# VS Code에서 C++ 프로젝트 디버그

https://youtu.be/G9gnSGKYIg4?si=xxmdCBQSWqa0dtSs

```Makefile
echo "C = gcc " >> Makefile &&
echo "CLANG = clang" >> Makefile &&
echo "" >> Makefile &&

echo "SOURCE_CLANG = ./src/main.c" >> Makefile &&
echo "SOURCE_CLANG_OBJ = ./target/main.o" >> Makefile &&
echo "" >> Makefile &&

echo "TARGET = ./target/main" >> Makefile &&
echo "LDFLAGS_COMMON = -pedantic -pthread -pedantic-errors -lm -Wall -Wextra -ggdb" >> Makefile &&
echo "LDFLAGS_DEBUG = -c -pthread -lm -Wall -Wextra -ggdb" >> Makefile &&
echo "LDFLAGS_EMIT_LLVM = -S -emit-llvm" >> Makefile &&
echo "LDFLAGS_ASSEMBLY = -Wall -save-temps" >> Makefile &&
echo "LDFLAGS_FSANITIZE_ADDRESS = -O1 -g -fsanitize=address -fno-omit-frame-pointer -c" >> Makefile &&
echo "LDFLAGS_FSANITIZE_OBJECT = -g -fsanitize=address" >> Makefile &&
echo "LDFLAGS_FSANITIZE_VALGRIND = -fsanitize=address -g3" >> Makefile &&

echo "" >> Makefile &&

echo "r:\xa\x09\x09rm -rf target\xa\x09\x09mkdir target\xa\x09\x09\x24(CLANG) \x24(LDFLAGS_COMMON) -o \x24(TARGET) \x24(SOURCE_CLANG)" >> Makefile &&
echo "\x09\x09\x24(TARGET)\xa" >> Makefile &&

echo "zr:\xa\x09\x09rm -rf target\xa\x09\x09mkdir target\xa\x09\x09zig cc \x24(LDFLAGS_COMMON) -o \x24(TARGET) \x24(SOURCE_CLANG)" >> Makefile &&
echo "\x09\x09\x24(TARGET)\xa" >> Makefile &&

echo "b:\xa\x09\x09rm -rf target\xa\x09\x09mkdir target" >> Makefile &&
echo "\x09\x09\x24(CLANG) \x24(LDFLAGS_DEBUG) -o \x24(TARGET) \x24(SOURCE_CLANG)" >> Makefile &&
echo "" >> Makefile &&

echo "ll:\xa\x09\x09rm -rf target\xa\x09\x09mkdir target" >> Makefile &&
echo "\x09\x09cp -rf ./src/main.c ./." >> Makefile &&
echo "\x09\x09\x24(CLANG) \x24(LDFLAGS_EMIT_LLVM) main.c" >> Makefile &&
echo "\x09\x09mv *.ll ./target" >> Makefile &&
echo "\x09\x09\x24(CLANG) \x24(LDFLAGS_COMMON) -o \x24(TARGET) \x24(SOURCE_CLANG)" >> Makefile &&
echo "\x09\x09mv *.cpp ./target" >> Makefile &&
echo "\x09\x09rm -rf *.out" >> Makefile &&
echo "" >> Makefile &&

echo "as:\xa\x09\x09rm -rf target\xa\x09\x09mkdir target" >> Makefile &&
echo "\x09\x09\x24(CLANG) \x24(LDFLAGS_ASSEMBLY) -o \x24(TARGET) \x24(SOURCE_CLANG)" >> Makefile &&
echo "\x09\x09mv *.ii ./target" >> Makefile &&
echo "\x09\x09mv *.o ./target" >> Makefile &&
echo "\x09\x09mv *.s ./target" >> Makefile &&
echo "\x09\x09mv *.bc ./target" >> Makefile &&
echo "" >> Makefile &&

echo "fsan:\xa\x09\x09rm -rf target\xa\x09\x09mkdir target" >> Makefile &&
echo "\x09\x09\x24(CLANG) \x24(LDFLAGS_FSANITIZE_ADDRESS) \x24(SOURCE_CLANG) -o \x24(TARGET)" >> Makefile &&
echo "\x09\x09\x24(CLANG) \x24(LDFLAGS_FSANITIZE_OBJECT) \x24(TARGET)" >> Makefile &&
echo "\x09\x09mv *.out ./target" >> Makefile &&
echo "" >> Makefile &&

echo "mem:\xa\x09\x09rm -rf target\xa\x09\x09mkdir target" >> Makefile &&
echo "\x09\x09\x24(CLANG) \x24(LDFLAGS_FSANITIZE_VALGRIND) \x24(SOURCE_CLANG) -o \x24(TARGET)" >> Makefile &&
echo "\x09\x09valgrind --leak-check=full \x24(TARGET)" >> Makefile &&
echo "" >> Makefile &&

echo "obj:\xa\x09\x09rm -rf target\xa\x09\x09mkdir target" >> Makefile &&
echo "\x09\x09\x24(CLANG) \x24(LDFLAGS_ASSEMBLY) -o \x24(TARGET) \x24(SOURCE_CLANG)" >> Makefile &&
echo "\x09\x09mv *.ii ./target" >> Makefile &&
echo "\x09\x09mv *.o ./target" >> Makefile &&
echo "\x09\x09mv *.s ./target" >> Makefile &&
echo "\x09\x09mv *.bc ./target" >> Makefile &&
echo "\x09\x09objdump --disassemble -S -C ./target/main.o" >> Makefile &&
echo "" >> Makefile &&

echo "xx:\xa\x09\x09rm -rf target\xa\x09\x09mkdir target" >> Makefile &&
echo "\x09\x09\x24(CLANG) \x24(LDFLAGS_FSANITIZE_VALGRIND) \x24(SOURCE_CLANG) -o \x24(TARGET)" >> Makefile &&
echo "\x09\x09xxd -c 16 \x24(TARGET)" >> Makefile &&
echo "" >> Makefile &&

echo "clean:" >> Makefile &&
echo "\x09\x09rm -rf ./target *.out ./src/*.out *.bc ./src/target/ *.dSYM ./src/*.dSYM" >> Makefile &&
echo "" >> Makefile &&

echo "init:\xa\x09\x09mkdir src" >> Makefile &&
echo "\x09\x09echo \x22#include <stdio.h>\x22 >> src/main.c" >> Makefile &&
echo "\x09\x09echo \x22\x22 >> src/main.c" >> Makefile &&
echo "\x09\x09echo \x22int main(void) {\x22 >> src/main.c" >> Makefile &&
echo "\x09\x09echo \x22\x09printf(\\\"Hello world C lang \\\" );\x22 >> src/main.c" >> Makefile &&
echo "\x09\x09echo \x22\x09return 0;\x22 >> src/main.c" >> Makefile &&
echo "\x09\x09echo \x22}\x22 >> src/main.c" >> Makefile &&
echo "" >> Makefile &&


echo "vscode:\xa\x09\x09rm -rf .vscode\xa\x09\x09mkdir .vscode" >> Makefile && 
echo "\x09\x09echo \x22{\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\\\"version\\\": \\\"0.2.0\\\",\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\\\"configurations\\\": [\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09{\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"type\\\": \\\"lldb\\\",\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"request\\\": \\\"launch\\\",\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"name\\\": \\\"Launch\\\",\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"program\\\": \\\"\\\x24{workspaceFolder}/target/\\\x24{fileBasenameNoExtension}\\\",\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"args\\\": [],\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"cwd\\\": \\\"\\\x24{workspaceFolder}\\\",\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09// \\\"preLaunchTask\\\": \\\"C/C++: clang build active file\\\"\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09},\x22 >> .vscode/launch.json" >> Makefile &&

echo "\x09\x09echo \x22\x09\x09{\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"name\\\": \\\"gcc - Build and debug active file\\\",\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"type\\\": \\\"cppdbg\\\",\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"request\\\": \\\"launch\\\",\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"program\\\": \\\"\\\x24{fileDirname}/target/\\\x24{fileBasenameNoExtension}'\\\",\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"args\\\": [],\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"stopAtEntry\\\": false,\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"cwd\\\": \\\"\\\x24{fileDirname}\\\",\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"environment\\\": [],\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"externalConsole\\\": false,\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"MIMode\\\": \\\"lldb\\\",\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09// \\\"tasks\\\": \\\"C/C++: clang build active file\\\"\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09}\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09]\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22}\x22 >> .vscode/launch.json" >> Makefile &&

echo "\x09\x09echo \x22{\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\\\"tasks\\\": [\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09{\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"type\\\": \\\"cppbuild\\\",\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"label\\\": \\\"C/C++: clang build active file\\\",\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"command\\\": \\\"/home/gy/Utilities/llvm16_0_4/bin/g++\\\",\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"args\\\": [\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\x09\\\"-c\\\",\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\x09\\\"-fcolor-diagnostics\\\",\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\x09\\\"-fansi-escape-codes\\\",\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\x09\\\"-g\\\",\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\x09\\\"\\\x24{file}\\\",\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\x09\\\"-o\\\",\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\x09\\\"\\\x24{fileDirname}/target/\\\x24{fileBasenameNoExtension}\\\"\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09],\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"options\\\": {\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\x09\\\"cwd\\\": \\\"\\\x24{fileDirname}\\\"\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09},\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"problemMatcher\\\": [\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\x09\\\"\\\x24gcc\\\"\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09],\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"group\\\": {\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\x09\\\"kind\\\": \\\"build\\\",\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\x09\\\"isDefault\\\": true\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09},\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"detail\\\": \\\"Task generated by Debugger.\\\"\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09}\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09],\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\\\"version\\\": \\\"2.0.0\\\"\x22 >> .vscode/tasks.json" >>  Makefile &&
echo "\x09\x09echo \x22}\x22 >> .vscode/tasks.json" >> Makefile &&


echo "# Result\xa\xa\x60\x60\x60\xa\xa\x60\x60\x60" >> README.md &&

echo "# A collection of useful .gitignore templates " >> .gitignore &&
echo "# https://github.com/github/gitignore\xa" >> .gitignore &&
echo "# General" >> .gitignore &&
echo ".DS_Store" >> .gitignore &&
echo "dir/otherdir/.DS_Store\xa" >> .gitignore &&
echo "target/" >> .gitignore &&
echo ".vscode/" >> .gitignore &&


echo "a.out.dSYM/\xa" >> .gitignore &&

echo "# Prerequisites" >> .gitignore &&
echo "*.d\xa" >> .gitignore &&

echo "# Compiled Object files" >> .gitignore &&
echo "*.slo" >> .gitignore &&
echo "*.lo" >> .gitignore &&
echo "*.o" >> .gitignore &&
echo "*.obj\xa" >> .gitignore &&

echo "# Precompiled Headers" >> .gitignore &&
echo "*.gch" >> .gitignore &&
echo "*.pch\xa" >> .gitignore &&

echo "# Compiled Dynamic libraries" >> .gitignore &&
echo "*.so" >> .gitignore &&
echo "*.dylib" >> .gitignore &&
echo "*.dll\xa" >> .gitignore &&

echo "# Fortran module files" >> .gitignore &&
echo "*.mod" >> .gitignore &&
echo "*.smod\xa" >> .gitignore &&

echo "# Compiled Static libraries" >> .gitignore &&
echo "*.lai" >> .gitignore &&
echo "*.la" >> .gitignore &&
echo "*.a" >> .gitignore &&
echo "*.lib\xa" >> .gitignore &&

echo "# Executables" >> .gitignore &&
echo "*.exe" >> .gitignore &&
echo "*.out" >> .gitignore &&
echo "*.app\xa" >> .gitignore
```

# Result

```

```
# Result

```

```
# Result

```

```
