#include <iostream>
			//#include <string> dont need to do it hahah cuz already in header
#include "bunnysimulator.h"

using namespace std;


Bunny::Bunny(short a, char s, string n, short v)
{
	age = a;
	sex = s;
	name = n;
	vampire = v;
} //constructor

Bunny::Bunny(const Bunny &source)
{
	age = source.age;
	sex = source.sex;
	name = source.name;
	vampire = source.vampire;
}


ostream& operator<<(ostream& ofile, const Bunny& bunny)
{
	ofile << bunny.name << ", " << bunny.sex << "," 
		  << bunny.age << "," << bunny.vampire;	
	return ofile;
}


void Bunny::display()
{
	cout << age <<", "<< sex <<", "<< name <<", "<< vampire <<endl;
	return;
}
