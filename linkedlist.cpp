#include "linkedlist.h"
#include <iostream>
using namespace std;


template<typename T>  //must say head is null or else idk why, wont be null
List<T>::List():head(NULL){}	

template <typename T>
void List<T>::display()
{
	Item<T> *curr = head;  //for custom structs, gotta overload << 
	if(curr != NULL)		//operator in structs file
	{
		cout << curr->data <<endl;
		while(curr->next)
		{	//test if can do head->next instead of curr->next
			curr = curr->next;	//do * first time to say curr is a ptr
								//after, dont do *curr...
								//that dereferences it further
			cout << curr->data <<endl;
		}
	}
	
}


template <typename T>
void List<T>::insert(T data)
{
	Item<T> *temp = new Item<T>(data);
	
	if(head == NULL)	//add to beginning of list
	{	cout << "head is null" <<endl;
		//*head = *temp;	//dont do this, global List<T> lets u just use head
		head = temp;		//and *head will dereference further
	}

	else 	//look for a place to insert
	{
		//cout <<" head is.... "<<head->data<<endl; //do head->data i think cuz 
												//data is a ptr
												//i hate ptrs :/, cant understand them
		insertMiddle(temp); //*temp gives address of temp
	}
	return;
}

template <typename T>
void List<T>::insertMiddle(Item<T> *temp) //& asks for address
{
	Item<T> *curr = head; //bcuz head is a ptr, curr must be *, 
						//but *head=address not value
	while(curr->next)
		curr = curr->next;
	curr->next = temp;

	return;
}