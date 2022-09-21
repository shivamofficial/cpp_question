/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node*next;
};
void print(node* n)
{
    while(n!=NULL)
    {
        cout<< n->data<<" ";
        n=n->next;
    }
}


int main()
{  // 3 node ban gya
   node*head;
   node*second;
   node*third;
   // allocate node to heap
   head=new node();
   second=new node();
   third=new node();
   head->data=1;
   head->next=second;
   second-> data=2;
   second->next=third;
   third->data=3;
   third->next=NULL;
print(head);
    return 0;
}
