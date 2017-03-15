# build an executable named myprog from myprog.c
  all:
	gcc -g -Wall Extra.h Test.c Extra.c -o myprog

  clean: 
	$(RM) myprog