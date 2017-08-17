#ifndef LINKEDLIST_H
#define LINKEDLIST_H


template <typename T>
struct Item
{
	T data;		//bunny is the data
	Item<T>* next;  //each item contains a bunny and pointer to next item
public:
	Item<T>(T &d):data(d), next(){} //constructor
	Item<T>(const Item<T> &source):data(source.data), next(){}   //copy constructor
};

template <typename T>
class List
{
	Item<T> *head; 
public:
	List();
	void insert(T data);
	void insertMiddle(Item<T> *temp);
	void display();
};

#endif