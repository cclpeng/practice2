bsim.out: linkedlist.o bunnysimulator.o main.o
	g++ -g -Wall -ansi -o bsim.out bunnysimulator.o linkedlist.o main.o

# i forgot to put bunnysim.h, ll.h, and ll.cpp in ln 5, so make 
#wasnt rly updating
main.o: main.cpp bunnysimulator.h linkedlist.h linkedlist.cpp
	g++ -g -Wall -ansi -c main.cpp

bunnysimulator.o: bunnysimulator.cpp bunnysimulator.h
	g++ -g -Wall -ansi -c bunnysimulator.cpp

linkedlist.o: linkedlist.cpp linkedlist.h
	g++ -g -Wall -ansi -c linkedlist.cpp

clean:
	rm -f bsim.out *.o