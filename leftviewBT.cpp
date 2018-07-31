#include<iostream>
#include<string>

#include "leftviewBT.h"

using namespace std;

leftviewBT::leftviewBT()
{
      root = NULL;
      currRoot = NULL;
}
void leftviewBT:: leftviewBTprint()
{
    int MaxLevel = 0;
    int level = 1;
    leftviewTrav(level,&MaxLevel,root);
}
void leftviewBT:: leftviewTrav(int Level, int* MaxLevel, nodeptr ptr)
{
        if( ptr == NULL)
             return; 

        if( *MaxLevel < Level)
        {
             cout<<ptr->data<<"->";
             *MaxLevel = Level; 
        }
        leftviewTrav(Level+1 , MaxLevel,ptr->leftchild);
        leftviewTrav(Level+1 , MaxLevel,ptr->rightchild);
}
leftviewBT::nodeptr leftviewBT:: CreateLeaf(int data)
{
          nodeptr n = new node();
          n->data = data;
          n->leftchild = NULL;
          n->rightchild = NULL;
          return n;
}

void leftviewBT:: AddNodeToBT(int data )
{
        nodeptr n = new node(); 
        n =  CreateLeaf(data);
        if(root == NULL)   
        {
              root = n;
              currRoot = n;
              return;   
        }
        AddNodeTraverse(n);
}

void leftviewBT:: AddNodeTraverse(nodeptr n)
{
       if(n->data < currRoot->data)
       {
          if(currRoot->leftchild != NULL)
          {
                currRoot = currRoot->leftchild;
		AddNodeTraverse(n);
          }
          else
          {
		currRoot->leftchild = n;
          }             
       } 
       else if(n->data > currRoot->data)
       {
          if(currRoot->rightchild != NULL)
          {
                currRoot = currRoot->rightchild;
		AddNodeTraverse(n);
          }
          else
          {
		currRoot->rightchild = n;
          }             
       }
       
}

void leftviewBT:: PrintBT()
{
      if( root == NULL)
      {
         cout<<"Empty BT"<<endl;
         return;
      }
      cout<<"Printing BinaryTrea"<<endl;
      PrintRecBT(root); 
}
void leftviewBT:: PrintRecBT(node* ptr)
{
      if(ptr != NULL)   
      {
           cout<<ptr->data<<"->";
           if(ptr->leftchild != NULL)
           {
                PrintRecBT(ptr->leftchild);
	   }
           if(ptr->rightchild!=NULL)
           {
                PrintRecBT(ptr->rightchild);
           }
      }
}




