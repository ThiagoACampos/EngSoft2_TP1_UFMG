
CC=g++

all: tp

place: place.c
	$(CC) -o place place.cpp

reservation: reservation.cpp
	$(CC) -o reservation reservation.cpp

tp: main.cpp
	$(CC) -o tp main.cpp reservation.cpp place.cpp

clean: # remove todos os arquivos temporarios que forem gerados pela compilacao
	rm -rf tp place reservation
