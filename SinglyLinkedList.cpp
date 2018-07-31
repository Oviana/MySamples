#include<iostream>
#include<string>
using namespace std; 

#include "SinglyLinkedList.h"

SinglyLinkedList::SinglyLinkedList(){
	head = NULL;
	curr = NULL;
        temp = NULL;
}

void SinglyLinkedList::AddNode(int iData)
{
           nodeptr n = new node();
           n->data = iData; 
           n->next = NULL;

           if ( head != NULL)
           {
           	curr = head; 
           	while(curr->next != NULL)
           	{
               	    curr = curr->next;
	   	}
           	curr->next = n; 
            }
	    else
	    {
	        head = n; 		
            }
}

void SinglyLinkedList::DeleteNode(int iData)
{
    nodeptr delPtr; 
    curr = head;
    temp = head;
    while(curr != NULL && curr->data != iData )
    {
        temp = curr; 
    	curr = curr->next;
    }
    if( curr == NULL )
    {
         cout<<iData<<" was not in the list"<<endl;
    }
    else
    {
        if ( curr == head )
        {
           head = curr->next;
        }
      	delPtr = curr; 
       	temp->next = curr->next; 
       	delete delPtr;
       	cout<<iData<<" deleted from the list"<<endl;
    }
}

void SinglyLinkedList::PrintList()
{
     if(head != NULL)
     {
     	curr = head;
        while( curr->next != NULL)
        {
            cout<<curr->data<<"->";
            curr = curr->next;
        }
        cout<<curr->data<<"->";
        cout<<"NULL"<<endl;
      }
      else
         cout<<"Empty List"<<endl;
}
