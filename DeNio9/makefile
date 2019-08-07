#File: makefile
#Author: Joshua DeNio
#Date: 4/16/2018

#Description: This makefile will make prog9

CC = g++
OBJECTS = main.o personType.o dateType.o
EXE = prog9

$(EXE):		$(OBJECTS)
		$(CC) -o $(EXE) $(OBJECTS)
main.o:		main.cpp personType.h dateType.h
		$(CC) -c main.cpp
personType.o:	personType.cpp personType.h
		$(CC) -c personType.cpp
dateType.o:	dateType.cpp dateType.h 
		$(CC) -c dateType.cpp
clean:
		rm -rf *.o *~ $(EXE)
