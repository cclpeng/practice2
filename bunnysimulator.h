#ifndef BUNNYSIMULATOR_H
#define BUNNYSIMULATOR_H

using namespace std;


class Bunny
{
private:
	short age;
	char sex;		//m or f
	string name;			//or put std::string
	short vampire;  //0 for true, 1 for falses
public:
	Bunny(){}		//default constructor
	Bunny(short a, char s, string n, short v); //constructor
	Bunny(const Bunny &source);//copy constructor
	void display();
	friend ostream& operator<<(ostream& ofile, const Bunny& bunny);
};

#endif