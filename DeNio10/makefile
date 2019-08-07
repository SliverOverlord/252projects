#File: makefile
#Author: Joshua DeNio
#Date: 4/23/2018

#Description: This makefile will make prog10

CC = g++
OBJECTS = main.o personType.o dateType.o studentType.o output.o read.o
EXE = prog10

$(EXE):		$(OBJECTS)
		$(CC) -o $(EXE) $(OBJECTS)
main.o:		main.cpp personType.h dateType.h
		$(CC) -c main.cpp
personType.o:	personType.cpp personType.h
		$(CC) -c personType.cpp
studentType.o:	studentType.cpp studentType.h
		$(CC) -c studentType.cpp
dateType.o:	dateType.cpp dateType.h 
		$(CC) -c dateType.cpp
read.o:		read.cpp
		$(CC) -c read.cpp
output.o:	output.cpp
		$(CC) -c output.cpp
clean:
		rm -rf *.o *~ $(EXE)
