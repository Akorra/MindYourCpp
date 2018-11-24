all: app

app: Utility.o main.o
  g++ Utility.o main.o -o app

Utility.o: Utility.cpp Utility.h
  g++ -c Utility.cpp

main.o: main.cpp Utility.h
  g++ -c main.cpp
