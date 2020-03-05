hespi: derle calistir

derle:
	g++ -I ./include/ -o ./lib/Liste.o -c ./src/Liste.cpp
	g++ -I ./include/ -o ./lib/Dugum.o -c ./src/Dugum.cpp
	g++ -I ./include/ -o ./lib/Stack.o -c ./src/Stack.cpp
	g++ -I ./include/ -o ./bin/Test ./lib/Liste.o ./lib/Dugum.o ./lib/Stack.o  ./src/Test.cpp
	
calistir:
	./bin/Test