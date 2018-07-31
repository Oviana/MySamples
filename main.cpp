#include<string>
using namespace std; 

#include "SinglyLinkedList.h"

int main ()
{
    SinglyLinkedList list;
    list.AddNode(5);
    list.AddNode(7);
    list.AddNode(8);
    list.DeleteNode(1);
    list.PrintList();
}
 
