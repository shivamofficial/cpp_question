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
    
    // constructor
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
    
};

void insertathead(node* &head,int d)
{
    node* temp=new node(d);
    temp->data=d;
    temp->next=head;
    head=temp;
}

void insertattail(node* &tail,int d)
{
    node* temp =new node(d);
    tail->next=temp;
    tail=temp;
}
void print(node* &head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
   node*node1=new node(10);
   // head pointer to node1
   node* head=node1;
   node* tail=node1;
   insertathead(head,12);
   print(head);
   
    insertathead(head,11);
   print(head);
    insertathead(head,122);
   print(head);
   cout<<endl;
   insertattail(tail,12);
    print(head);
    insertattail(tail,11);
    print(head);
    insertattail(tail,122);
    print(head);

    return 0;
}
