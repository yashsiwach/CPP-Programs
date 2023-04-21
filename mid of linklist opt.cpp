#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next=NULL;
    node* pre=NULL;
    node(int data){
        this->data=data;
        this->next=NULL;
        this->pre=NULL;
    }
};
void print(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{
    node*first=new node(10);
    node*sec=new node(20);
    node*third=new node(30);
    first->next=sec;
    sec->next=third;
    third->next=NULL;
    node*head=first;
    
    print(head);

}