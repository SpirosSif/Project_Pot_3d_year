all:
	g++ -o main main.cpp diamond.cpp malfoi.cpp poteridis.cpp -lncurses
	./main 