
default: 
	g++ euler.cpp Actual.cpp  amb4.cpp ms.cpp rk4.cpp function.cpp main.cpp -o main

rk4: default
	rm -f rk4.csv
	./main "rk4" > rk4.csv

euler: default
	rm -f euler.csv
	./main "euler" > euler.csv

amb4: default
	rm -f amb4.csv
	./main "amb4" > amb4.csv

ms: default
	rm -f ms.csv
	./main "ms" > ms.csv


actual : default
	rm -f actual.csv
	./main "solution" > sol.csv

all : default ms amb4 euler rk4 actual

graphs: all
	gnuplot graphs.gp

dist: graphs 
	tar -czf hw3.tar.gz Adam_PC.png Euler.png mil_simp.png \
	Rung.png amb4.cpp amb4.h euler.cpp euler.h function.cpp \
	function.h main.cpp ms.cpp ms.h rk4.cpp rk4.h Actual.cpp  \
	Actual.h Solution.png Makefile graphs.gp  README