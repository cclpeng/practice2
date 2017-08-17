#include <iostream>
#include <string>
#include "bunnysimulator.h"
#include "linkedlist.h"
#include "linkedlist.cpp" 
//templates create the class on the go (since the data type not specified)
//so w/o including linkedlist.cpp (or the implementation file) here,
//for some reason, list.insert(bunny) won't work
using namespace std;

int main()
{

	List<Bunny> list;
	Bunny bunny(0, 'f', "Buttercup", 0);
	//bunny.display();
	list.insert(bunny);
	
	Bunny munny(0, 'm', "Man", 0);
	list.insert(munny);
	//list.display();

	Bunny nunny(0, 'm', "Albert", 0);
	list.insert(nunny);
	list.display();

	//testing with integer instead of custom struct
	// List<int> otherlist;
	// otherlist.insert(5);
	// otherlist.display();


}