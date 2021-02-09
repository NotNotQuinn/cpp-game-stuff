# this makefile is pain.
testgame: o/test.o o/game.o o/menu_selection.o o/sudoku.o game.h menu_selection.h sudoku.h
	g++ o/test.o o/game.o o/menu_selection.o o/sudoku.o -o testgame
o/test.o: test.cpp
	g++ -c test.cpp -o o/test.o
o/game.o: game.cpp
	g++ -c game.cpp -o o/game.o
o/menu_selection.o: menu_selection.cpp
	g++ -c menu_selection.cpp -o o/menu_selection.o
o/sudoku.o: sudoku.cpp
	g++ -c sudoku.cpp -o o/sudoku.o

clean:
	rm o/*.o testgame