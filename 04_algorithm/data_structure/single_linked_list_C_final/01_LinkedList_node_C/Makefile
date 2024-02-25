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
		which clang
