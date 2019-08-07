#File: makefile
#Author: Joshua DeNio
#Date: 4/30/2018

#Description: This makefile will make prog11



prog11:		main.o baseConvert.o
		g++ -o prog11 main.o baseConvert.o
main.o:		main.cpp baseConvert.h 
		g++ -c main.cpp
baseConvert.o:	baseConvert.cpp baseConvert.h queueType.h stackType.h
		g++ -c baseConvert.cpp
clean:
		rm -rf *.o prog11 *~
