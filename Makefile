all: qtimer

qtimer: main.o QTimer.o
	g++ -std=c++11 -o qtimer main.o QTimer.o

main.o: main.cpp QTimer.h
	g++ -std=c++11 -c main.cpp

QTimer.o: QTimer.cpp QTimer.h
	g++ -std=c++11 -c QTimer.cpp

clean:
	rm -f main.o QTimer.o qtimer
