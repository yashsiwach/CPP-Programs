#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void print(node*head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void insertathead(node*&head,node*&newnode)
{
   
    newnode->next=head;
    head=newnode;
}
int main()
{
    node*first=new node(10);
    node*sec=new node(20);
    node*third=new node(30);
    node*forth= new node(40);
    node*head=first;
    node*tail=forth;
    node*newnode=new node(50);

    first->next=sec;
    sec->next=third;
    third->next=forth;
    forth->next=NULL;
    print(head);
    insertathead(head,newnode);
    cout<<endl;
    print(head);
}