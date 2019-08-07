#File: makefile
#Author: Joshua DeNio
#Date: 4/10/2018

#Description: This makefile will make prog8

CC = g++
OBJECTS = main.o timeType.o dateType.o
EXE = prog8

$(EXE):		$(OBJECTS)
		$(CC) -o $(EXE) $(OBJECTS)
main.o:		main.cpp timeType.h dateType.h
		$(CC) -c main.cpp
timeType.o:	timeType.cpp timeType.h
		$(CC) -c timeType.cpp
dateType.o:	dateType.cpp dateType.h 
		$(CC) -c dateType.cpp
clean:
		rm -rf *.o *~ $(EXE)
