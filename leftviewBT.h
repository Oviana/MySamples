#include<iostream>

class leftviewBT{

   private:
         typedef struct node
         {
	     int data;
             node* leftchild;
             node* rightchild;
	}*nodeptr;

        node *root, *currRoot;
        node *CreateLeaf(int);

   public:
         leftviewBT();
         void PrintBT();
         void PrintRecBT(node*);
         void AddNodeToBT(int);
         void AddNodeTraverse(nodeptr);
         void leftviewBTprint();
         void leftviewTrav(int, int*, nodeptr);
};
