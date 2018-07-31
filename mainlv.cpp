#include<iostream>
using namespace std;

#include "leftviewBT.h"

int main()
{
    leftviewBT ObjBT;
    ObjBT.AddNodeToBT(12);
    ObjBT.AddNodeToBT(8);
    ObjBT.AddNodeToBT(25);
    ObjBT.AddNodeToBT(4);
    ObjBT.AddNodeToBT(9);
    ObjBT.AddNodeToBT(20);
    ObjBT.AddNodeToBT(45);
    ObjBT.AddNodeToBT(10);
    ObjBT.AddNodeToBT(18);
    ObjBT.AddNodeToBT(22);
    ObjBT.AddNodeToBT(35);
    ObjBT.AddNodeToBT(41);
    ObjBT.AddNodeToBT(50);
    ObjBT.PrintBT();
    cout<<"Done Printing Binary Tree"<<endl;
    cout<<"starting to print left view of the Binary Tree"<<endl;
    ObjBT.leftviewBTprint();
    cout<<"done printing left view of the Binary Tree"<<endl;
    
}
