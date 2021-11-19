# scripts/dtc makefile

objects	:= dtc.o flattree.o fstree.o data.o livetree.o treesource.o updatetree.o\
		   srcpos.o checks.o util.o \
		   script_parser/iniparser.o \
		   script_parser/dictionary.o \
		   script_parser/script.o \
		   script_parser/script_to_dts.o
objects	+= dtc-lexer.lex.o dtc-parser.tab.o

# Source files need to get at the userspace version of libfdt_env.h to compile

edit:$(objects)
	gcc $(INCLUDE) -o  dtc $(objects)
	rm -rf $(objects)

clean:
	rm -rf dtc $(objects)
