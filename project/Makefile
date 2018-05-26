ifndef DEBUG
# Default: compile for debug
DEBUG=1
endif
#PROFILE=1

CC = gcc

BASICFLAGS= -std=c11

DEBUGFLAGS=  -g 
OPTFLAGS= -g -finline -march=native -O3 -DNDEBUG

ifeq ($(PROFILE),1)
PROFFLAGS= -g -pg 
PLFLAGS= -g -pg
else
PROFFLAGS= 
PLFLAGS=
endif

INCLUDE_PATH=-I. 

CFLAGS= -Wall -D_GNU_SOURCE $(BASICFLAGS)

ifeq ($(DEBUG),1)
CFLAGS+=  $(DEBUGFLAGS) $(PROFFLAGS) $(INCLUDE_PATH)
else
CFLAGS+=  $(OPTFLAGS) $(PROFFLAGS) $(INCLUDE_PATH)
endif

LDFLAGS= $(PLFLAGS) $(BASICFLAGS)
LIBS=-lfl
FLEX=flex
BISON=bison

#------------------------------------------
# app
#------------------------------------------


C_PROG= ptucc ptucc_scan sample001
C_SOURCES= ptucc.c ptucc_scan.c cgen.c
C_GEN=ptucc_lex.c ptucc_parser.tab.h ptucc_parser.tab.c sample001.c

C_SRC= $(C_SOURCES) $(C_GEN)

C_OBJECTS=$(C_SRC:.c=.o)

.PHONY: all tests release clean distclean

all: ptucc_scan ptucc

ptucc: ptucc.o ptucc_lex.o ptucc_parser.tab.o cgen.o
	$(CC) $(CFLAGS) -o $@ $+ $(LIBS)

ptucc_scan: ptucc_scan.o ptucc_lex.o ptucc_parser.tab.o cgen.o
	$(CC) $(CFLAGS) -o $@ $+ $(LIBS)

ptucc_lex.c: ptucc_lex.l ptucc_parser.tab.h
	$(FLEX) -o ptucc_lex.c ptucc_lex.l

ptucc_parser.tab.c ptucc_parser.tab.h: ptucc_parser.y
	$(BISON) -d ptucc_parser.y

test: ptucc
	  ./ptucc < sample001.fl > sample001.c
	  gcc -Wall -std=c11 -o sample001 sample001.c
	  ./sample001

testall: ptucc
		 @rm -rf $(dir $(realpath $(firstword $(MAKEFILE_LIST))))bin    #Add Bin and C directories
		 @rm -rf $(dir $(realpath $(firstword $(MAKEFILE_LIST))))ptuc_c 
		 @mkdir $(dir $(realpath $(firstword $(MAKEFILE_LIST))))bin
		 @mkdir $(dir $(realpath $(firstword $(MAKEFILE_LIST))))ptuc_c
		 @cp ./ptuclib.h ./ptuc_c/ptuclib.h

		 @printf "\n------------------sample001------------------\n"
		 @./ptucc < ./FL/sample001.fl > ./ptuc_c/sample001.c
		 @gcc -Wall -std=c11 -o ./bin/sample001 ./ptuc_c/sample001.c
		 @./bin/sample001 

		 @printf "\n------------------sample002------------------\n"
		 @./ptucc < ./FL/sample002.fl > ./ptuc_c/sample002.c
		 @gcc -Wall -std=c11 -o ./bin/sample002 ./ptuc_c/sample002.c
		 @./bin/sample002 

		 @printf "\n------------------sample003------------------\n"
		 @./ptucc < ./FL/sample003.fl > ./ptuc_c/sample003.c
		 @gcc -Wall -std=c11 -o ./bin/sample003 ./ptuc_c/sample003.c
		 @./bin/sample003 

		 @printf "\n------------------sample004------------------\n"
		 @./ptucc < ./FL/sample004.fl > ./ptuc_c/sample004.c
		 @gcc -Wall -std=c11 -o ./bin/sample004 ./ptuc_c/sample004.c
		 @./bin/sample004 

		 @printf "\n------------------sample005------------------\n"
		 @./ptucc < ./FL/sample005.fl > ./ptuc_c/sample005.c
		 @gcc -Wall -std=c11 -o ./bin/sample005 ./ptuc_c/sample005.c
		 @./bin/sample005

		 @printf "\n------------------sample006------------------\n"
		 @./ptucc < ./FL/sample006.fl > ./ptuc_c/sample006.c
		 @gcc -Wall -std=c11 -o ./bin/sample006 ./ptuc_c/sample006.c
		 @./bin/sample006

		 @printf "\n\n-------------------bad001--------------------\n"
		 -@./ptucc < ./FL/bad001.fl > ./ptuc_c/bad001.c

		 @printf "\n\n-------------------bad002--------------------\n"
		 -@./ptucc < ./FL/bad002.fl > ./ptuc_c/bad002.c

		 @printf "\n\n-------------------bad003--------------------\n"
		 -@./ptucc < ./FL/bad003.fl > ./ptuc_c/bad003.c

		 @printf "\n\n-------------------bad004--------------------\n"
		 -@./ptucc < ./FL/bad004.fl > ./ptuc_c/bad004.c

		 @printf "\n\n-------------------bad005--------------------\n"
		 -@./ptucc < ./FL/bad005.fl > ./ptuc_c/bad005.c

		 @printf "\n------------------correct1------------------\n"
		 @./ptucc < ./FL/correct1.fl > ./ptuc_c/correct1.c
		 @gcc -Wall -std=c11 -o ./bin/correct1 ./ptuc_c/correct1.c
	     @./bin/correct1

		 @printf "\n------------------correct2------------------\n"
		 @./ptucc < ./FL/correct2.fl > ./ptuc_c/correct2.c
		 @gcc -Wall -std=c11 -o ./bin/correct2 ./ptuc_c/correct2.c
		 @./bin/correct2

		 @printf "\n\n-------------------wrong1--------------------\n"
		 -@./ptucc < ./FL/wrong1.fl > ./ptuc_c/wrong1.c

		 @printf "\n\n-------------------wrong2--------------------\n"
		 -@./ptucc < ./FL/wrong2.fl > ./ptuc_c/wrong2.c





#-----------------------------------------------------
# Build control
#-----------------------------------------------------

distclean: realclean
	-touch .depend
	-rm *~

realclean:
	-rm $(C_PROG) $(C_OBJECTS) $(C_GEN) .depend *.o sample001.c sample001
	-rm .depend
	-touch .depend
	-rm -rf $(dir $(realpath $(firstword $(MAKEFILE_LIST))))bin    #Add Bin and C directories
	-rm -rf $(dir $(realpath $(firstword $(MAKEFILE_LIST))))ptuc_c 

depend: $(C_SOURCES)
	$(CC) $(CFLAGS) -MM $(C_SOURCES) > .depend
	
clean: realclean depend

include .depend

# Create release (courses handout) archive

release: clean-release-files tinyos2.tgz

clean-release-files:
	-rm tinyos2.tgz

TARFILES= cgen.c	cgen.h	Makefile  ptucc.c  ptucc_lex.l	\
  ptucc_parser.y ptucc_scan.c  ptuclib.h  sample001.fl \
  README.txt


ptuc_example.tgz: $(TARFILES)
	$(MAKE) distclean
	tar czvhf ptuc_example.tgz $(TARFILES)


