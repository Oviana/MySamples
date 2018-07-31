#include <iostream>
#include <string>
using namespace std;

class SinglyLinkedList
{
   private:
	typedef struct node
	{
	    int data;
            node *next;
	}*nodeptr;	

        nodeptr temp = NULL;
        nodeptr head = NULL;
        nodeptr curr = NULL; 

    public:
        SinglyLinkedList();
	void AddNode(int);
	void PrintList();
        void DeleteNode(int);
};

