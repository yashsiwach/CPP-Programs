#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* pre;
    node(){
        this->data=0;
        this->next=NULL;
        this->pre=NULL;
    }
    node(int data){
        this->data=data;
        this->next=NULL;
        this->pre=NULL;
    }
};
void print(node* &head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        
        temp=temp->next;
    }cout<<endl;

}
node* rev(node* head)
{
    node* prev=NULL;
    node* curr=head;
    while(curr!=NULL)
    {
        node* temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }return prev;
}
int main()
{
    node* first=new node(10);
    node* sec=new node(20);
    node* third=new node(30);
    first->next=sec;
    sec->pre=first;
    sec->next=third;
    third->pre=sec;
    node*head=first;
    node*tail=third;
    print(head);
    head=rev(head);
    print(head);

}
