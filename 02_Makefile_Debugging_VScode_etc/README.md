# Contents Link

- <a href="https://github.com/YoungHaKim7/c_project/tree/main/02_Makefile_Debugging_VScode_etc#echo-gitignore-file">echo로 .gitignore 넣기 이동</a>
- <a href="https://github.com/YoungHaKim7/c_project/tree/main/02_Makefile_Debugging_VScode_etc#makefile%EC%A7%81%EC%A0%91-%EB%84%A3%EA%B8%B0-">Makefile 넣기 이동</a>
- <a href="https://github.com/YoungHaKim7/c_project/tree/main/02_Makefile_Debugging_VScode_etc#launchjson--tasksjson">launch & tasks.json (macOS)</a>


# VS Code에서 C++ 프로젝트 디버그

https://youtu.be/G9gnSGKYIg4?si=xxmdCBQSWqa0dtSs

# echo로 Makefile 넣기 <a href="https://github.com/YoungHaKim7/c_project/tree/main/02_Makefile_Debugging_VScode_etc#contents-link">[🔝]</a>

- <a href="https://github.com/YoungHaKim7/c_project/tree/main/02_Makefile_Debugging_VScode_etc#makefile%EC%A7%81%EC%A0%91-%EB%84%A3%EA%B8%B0-">Makefile 넣기 이동</a>

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
echo "\x09\x09echo \x22\x09\x09\x09\\\"command\\\": \\\"/home/gy/Utilities/llvm16_0_4/bin/clang\\\",\x22 >> .vscode/tasks.json" >> Makefile &&
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

echo "# Prerequisites" >> .gitignore &&
echo "*.d\xa" >> .gitignore &&

echo "echo # Object files" >> .gitignore &&
echo "*.o" >> .gitignore &&
echo "*.ko" >> .gitignore &&
echo "*.obj" >> .gitignore &&
echo "*.elf\xa" >> .gitignore &&

echo "# Linker output" >> .gitignore &&
echo "*.ilk" >> .gitignore &&
echo "*.map" >> .gitignore &&
echo "*.exp\xa" >> .gitignore &&

echo "# Precompiled Headers" >> .gitignore &&
echo "*.gch" >> .gitignore &&
echo "*.pch\xa" >> .gitignore &&

echo "# Libraries" >> .gitignore &&
echo "*.lib" >> .gitignore &&
echo "*.a" >> .gitignore &&
echo "*.la" >> .gitignore &&
echo "*.lo\xa" >> .gitignore &&

echo "# Shared objects (inc. Windows DLLs)" >> .gitignore &&
echo "*.dll" >> .gitignore &&
echo "*.so" >> .gitignore &&
echo "*.so.*" >> .gitignore &&
echo "*.dylib\xa" >> .gitignore &&

echo "# Executables" >> .gitignore &&
echo "*.exe" >> .gitignore &&
echo "*.out" >> .gitignore &&
echo "*.app" >> .gitignore &&
echo "*.i*86" >> .gitignore &&
echo "*.x86_64" >> .gitignore &&
echo "*.hex\xa" >> .gitignore &&

echo "# Debug files" >> .gitignore &&
echo "*.dSYM/" >> .gitignore &&
echo "*.su" >> .gitignore &&
echo "*.idb" >> .gitignore &&
echo "*.pdb\xa" >> .gitignore &&

echo "# Kernel Module Compile Results" >> .gitignore &&
echo "*.mod*" >> .gitignore &&
echo "*.cmd" >> .gitignore &&
echo ".tmp_versions/" >> .gitignore &&
echo "modules.order" >> .gitignore &&
echo "Module.symvers" >> .gitignore &&
echo "Mkfile.old" >> .gitignore &&
echo "dkms.conf\xa" >> .gitignore
```

# launch.json & tasks.json<a href="https://github.com/YoungHaKim7/c_project/tree/main/02_Makefile_Debugging_VScode_etc#contents-link">[🔝]</a>


- launch.json

```json
{
	"version": "0.2.0",
	"configurations": [
		{
			"type": "lldb",
			"request": "launch",
			"name": "Launch",
			"program": "${workspaceFolder}/target/${fileBasenameNoExtension}",
			"args": [],
			"cwd": "${workspaceFolder}",
			// "preLaunchTask": "C/C++: clang build active file"
		},
		{
			"name": "gcc - Build and debug active file",
			"type": "cppdbg",
			"request": "launch",
			"program": "${fileDirname}/target/${fileBasenameNoExtension}'",
			"args": [],
			"stopAtEntry": false,
			"cwd": "${fileDirname}",
			"environment": [],
			"externalConsole": false,
			"MIMode": "lldb",
			// "tasks": "C/C++: clang build active file"
		}
	]
}

```

- tasks.json

```json
{
	"tasks": [
		{
			"type": "cppbuild",
			"label": "C/C++: clang build active file",
			"command": "/opt/homebrew/opt/llvm/bin/clang",
			"args": [
				"-fcolor-diagnostics",
				"-fansi-escape-codes",
				"-g",
				"${file}",
				"-o",
				"${fileDirname}/target/${fileBasenameNoExtension}"
			],
			"options": {
				"cwd": "${fileDirname}"
			},
			"problemMatcher": [
				"$gcc"
			],
			"group": {
				"kind": "build",
				"isDefault": true
			},
			"detail": "Task generated by Debugger."
		}
	],
	"version": "2.0.0"
}

```



# Makefile직접 넣기 <a href="https://github.com/YoungHaKim7/c_project/tree/main/02_Makefile_Debugging_VScode_etc#contents-link">[🔝]</a>

- <a href="https://github.com/YoungHaKim7/c_project/tree/main/02_Makefile_Debugging_VScode_etc#echo-gitignore-file">echo로 .gitignore 넣기 이동</a>

```Makefile
C = gcc 
CLANG = clang

SOURCE_CLANG = ./src/main.c
SOURCE_CLANG_OBJ = ./target/main.o

TARGET = ./target/main
LDFLAGS_COMMON = -pedantic -pthread -pedantic-errors -lm -Wall -Wextra -ggdb
LDFLAGS_DEBUG = -c -pthread -lm -Wall -Wextra -ggdb
LDFLAGS_EMIT_LLVM = -S -emit-llvm
LDFLAGS_ASSEMBLY = -Wall -save-temps
LDFLAGS_FSANITIZE_ADDRESS = -O1 -g -fsanitize=address -fno-omit-frame-pointer -c
LDFLAGS_FSANITIZE_OBJECT = -g -fsanitize=address
LDFLAGS_FSANITIZE_VALGRIND = -fsanitize=address -g3

r:
		rm -rf target
		mkdir target
		$(CLANG) $(LDFLAGS_COMMON) -o $(TARGET) $(SOURCE_CLANG)
		$(TARGET)

zr:
		rm -rf target
		mkdir target
		zig cc $(LDFLAGS_COMMON) -o $(TARGET) $(SOURCE_CLANG)
		$(TARGET)

b:
		rm -rf target
		mkdir target
		$(CLANG) $(LDFLAGS_DEBUG) -o $(TARGET) $(SOURCE_CLANG)

ll:
		rm -rf target
		mkdir target
		cp -rf ./src/main.c ./.
		$(CLANG) $(LDFLAGS_EMIT_LLVM) main.c
		mv *.ll ./target
		$(CLANG) $(LDFLAGS_COMMON) -o $(TARGET) $(SOURCE_CLANG)
		mv *.cpp ./target
		rm -rf *.out

as:
		rm -rf target
		mkdir target
		$(CLANG) $(LDFLAGS_ASSEMBLY) -o $(TARGET) $(SOURCE_CLANG)
		mv *.ii ./target
		mv *.o ./target
		mv *.s ./target
		mv *.bc ./target

fsan:
		rm -rf target
		mkdir target
		$(CLANG) $(LDFLAGS_FSANITIZE_ADDRESS) $(SOURCE_CLANG) -o $(TARGET)
		$(CLANG) $(LDFLAGS_FSANITIZE_OBJECT) $(TARGET)
		mv *.out ./target

mem:
		rm -rf target
		mkdir target
		$(CLANG) $(LDFLAGS_FSANITIZE_VALGRIND) $(SOURCE_CLANG) -o $(TARGET)
		valgrind --leak-check=full $(TARGET)

obj:
		rm -rf target
		mkdir target
		$(CLANG) $(LDFLAGS_ASSEMBLY) -o $(TARGET) $(SOURCE_CLANG)
		mv *.ii ./target
		mv *.o ./target
		mv *.s ./target
		mv *.bc ./target
		objdump --disassemble -S -C ./target/main.o

xx:
		rm -rf target
		mkdir target
		$(CLANG) $(LDFLAGS_FSANITIZE_VALGRIND) $(SOURCE_CLANG) -o $(TARGET)
		xxd -c 16 $(TARGET)

clean:
		rm -rf ./target *.out ./src/*.out *.bc ./src/target/ *.dSYM ./src/*.dSYM

init:
		mkdir src
		echo "#include <stdio.h>" >> src/main.c
		echo "" >> src/main.c
		echo "int main(void) {" >> src/main.c
		echo "	printf(\"Hello world C lang \" );" >> src/main.c
		echo "	return 0;" >> src/main.c
		echo "}" >> src/main.c

vscode:
		rm -rf .vscode
		mkdir .vscode
		echo "{" >> .vscode/launch.json
		echo "	\"version\": \"0.2.0\"," >> .vscode/launch.json
		echo "	\"configurations\": [" >> .vscode/launch.json
		echo "		{" >> .vscode/launch.json
		echo "			\"type\": \"lldb\"," >> .vscode/launch.json
		echo "			\"request\": \"launch\"," >> .vscode/launch.json
		echo "			\"name\": \"Launch\"," >> .vscode/launch.json
		echo "			\"program\": \"\x24{workspaceFolder}/target/\x24{fileBasenameNoExtension}\"," >> .vscode/launch.json
		echo "			\"args\": []," >> .vscode/launch.json
		echo "			\"cwd\": \"\x24{workspaceFolder}\"," >> .vscode/launch.json
		echo "			// \"preLaunchTask\": \"C/C++: clang build active file\"" >> .vscode/launch.json
		echo "		}," >> .vscode/launch.json
		echo "		{" >> .vscode/launch.json
		echo "			\"name\": \"gcc - Build and debug active file\"," >> .vscode/launch.json
		echo "			\"type\": \"cppdbg\"," >> .vscode/launch.json
		echo "			\"request\": \"launch\"," >> .vscode/launch.json
		echo "			\"program\": \"\x24{fileDirname}/target/\x24{fileBasenameNoExtension}'\"," >> .vscode/launch.json
		echo "			\"args\": []," >> .vscode/launch.json
		echo "			\"stopAtEntry\": false," >> .vscode/launch.json
		echo "			\"cwd\": \"\x24{fileDirname}\"," >> .vscode/launch.json
		echo "			\"environment\": []," >> .vscode/launch.json
		echo "			\"externalConsole\": false," >> .vscode/launch.json
		echo "			\"MIMode\": \"lldb\"," >> .vscode/launch.json
		echo "			// \"tasks\": \"C/C++: clang build active file\"" >> .vscode/launch.json
		echo "		}" >> .vscode/launch.json
		echo "	]" >> .vscode/launch.json
		echo "}" >> .vscode/launch.json
		echo "{" >> .vscode/tasks.json
		echo "	\"tasks\": [" >> .vscode/tasks.json
		echo "		{" >> .vscode/tasks.json
		echo "			\"type\": \"cppbuild\"," >> .vscode/tasks.json
		echo "			\"label\": \"C/C++: clang build active file\"," >> .vscode/tasks.json
		echo "			\"command\": \"/home/gy/Utilities/llvm16_0_4/bin/clang\"," >> .vscode/tasks.json
		echo "			\"args\": [" >> .vscode/tasks.json
		echo "				\"-c\"," >> .vscode/tasks.json
		echo "				\"-fcolor-diagnostics\"," >> .vscode/tasks.json
		echo "				\"-fansi-escape-codes\"," >> .vscode/tasks.json
		echo "				\"-g\"," >> .vscode/tasks.json
		echo "				\"\x24{file}\"," >> .vscode/tasks.json
		echo "				\"-o\"," >> .vscode/tasks.json
		echo "				\"\x24{fileDirname}/target/\x24{fileBasenameNoExtension}\"" >> .vscode/tasks.json
		echo "			]," >> .vscode/tasks.json
		echo "			\"options\": {" >> .vscode/tasks.json
		echo "				\"cwd\": \"\x24{fileDirname}\"" >> .vscode/tasks.json
		echo "			}," >> .vscode/tasks.json
		echo "			\"problemMatcher\": [" >> .vscode/tasks.json
		echo "				\"\x24gcc\"" >> .vscode/tasks.json
		echo "			]," >> .vscode/tasks.json
		echo "			\"group\": {" >> .vscode/tasks.json
		echo "				\"kind\": \"build\"," >> .vscode/tasks.json
		echo "				\"isDefault\": true" >> .vscode/tasks.json
		echo "			}," >> .vscode/tasks.json
		echo "			\"detail\": \"Task generated by Debugger.\"" >> .vscode/tasks.json
		echo "		}" >> .vscode/tasks.json
		echo "	]," >> .vscode/tasks.json
		echo "	\"version\": \"2.0.0\"" >> .vscode/tasks.json
		echo "}" >> .vscode/tasks.json


```

# echo .gitignore file<a href="https://github.com/YoungHaKim7/c_project/tree/main/02_Makefile_Debugging_VScode_etc#contents-link">[🔝]</a>

- - <a href="https://github.com/YoungHaKim7/c_project/tree/main/02_Makefile_Debugging_VScode_etc#makefile%EC%A7%81%EC%A0%91-%EB%84%A3%EA%B8%B0-">Makefile 넣기 이동</a>

```bash


echo "# Result\xa\xa\x60\x60\x60\xa\xa\x60\x60\x60" >> README.md &&

echo "# A collection of useful .gitignore templates " >> .gitignore &&
echo "# https://github.com/github/gitignore\xa" >> .gitignore &&
echo "# General" >> .gitignore &&
echo ".DS_Store" >> .gitignore &&
echo "dir/otherdir/.DS_Store\xa" >> .gitignore &&
echo "target/" >> .gitignore &&
echo ".vscode/" >> .gitignore &&

echo "# Prerequisites" >> .gitignore &&
echo "*.d\xa" >> .gitignore &&

echo "echo # Object files" >> .gitignore &&
echo "*.o" >> .gitignore &&
echo "*.ko" >> .gitignore &&
echo "*.obj" >> .gitignore &&
echo "*.elf\xa" >> .gitignore &&

echo "# Linker output" >> .gitignore &&
echo "*.ilk" >> .gitignore &&
echo "*.map" >> .gitignore &&
echo "*.exp\xa" >> .gitignore &&

echo "# Precompiled Headers" >> .gitignore &&
echo "*.gch" >> .gitignore &&
echo "*.pch\xa" >> .gitignore &&

echo "# Libraries" >> .gitignore &&
echo "*.lib" >> .gitignore &&
echo "*.a" >> .gitignore &&
echo "*.la" >> .gitignore &&
echo "*.lo\xa" >> .gitignore &&

echo "# Shared objects (inc. Windows DLLs)" >> .gitignore &&
echo "*.dll" >> .gitignore &&
echo "*.so" >> .gitignore &&
echo "*.so.*" >> .gitignore &&
echo "*.dylib\xa" >> .gitignore &&

echo "# Executables" >> .gitignore &&
echo "*.exe" >> .gitignore &&
echo "*.out" >> .gitignore &&
echo "*.app" >> .gitignore &&
echo "*.i*86" >> .gitignore &&
echo "*.x86_64" >> .gitignore &&
echo "*.hex\xa" >> .gitignore &&

echo "# Debug files" >> .gitignore &&
echo "*.dSYM/" >> .gitignore &&
echo "*.su" >> .gitignore &&
echo "*.idb" >> .gitignore &&
echo "*.pdb\xa" >> .gitignore &&

echo "# Kernel Module Compile Results" >> .gitignore &&
echo "*.mod*" >> .gitignore &&
echo "*.cmd" >> .gitignore &&
echo ".tmp_versions/" >> .gitignore &&
echo "modules.order" >> .gitignore &&
echo "Module.symvers" >> .gitignore &&
echo "Mkfile.old" >> .gitignore &&
echo "dkms.conf\xa" >> .gitignore
```


