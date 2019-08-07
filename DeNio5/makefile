# File:    makefile
# Author:  Joshua DeNio
# Program: 5

# This makefile will compile and link the program producing an
# executable called prog5.

# macros
EXE=prog5
OBJECTS=main.o read.o sort.o averageScore.o calcLetterGrade.o deviation.o median.o outputSummary.o outputScores.o
CFLAGS=-Wall
LFLAGS=

$(EXE):		$(OBJECTS)
		g++ -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o:		main.cpp constants.h
		g++ $(CFLAGS) -c main.cpp


averageScore.o:	averageScore.cpp
			g++ $(CFLAGS) -c averageScore.cpp
			
calcLetterGrade.o:	calcLetterGrade.cpp
			g++ $(CFLAGS) -c calcLetterGrade.cpp
			
deviation.o:		deviation.cpp
			g++ $(CFLAGS) -c deviation.cpp
			
median.o:		median.cpp
			g++ $(CFLAGS) -c median.cpp

read.o:		read.cpp constants.h
		g++ $(CFLAGS) -c read.cpp

sort.o:		sort.cpp
		g++ $(CFLAGS) -c sort.cpp
		
outputScores.o:		outputScores.cpp 
			g++ $(CFLAGS) -c outputScores.cpp
			
outputSummary.o: 	outputSummary.cpp 
			g++ $(CFLAGS) -c outputSummary.cpp
			

clean:
		rm -rf $(OBJECTS) $(EXE) *~ 
