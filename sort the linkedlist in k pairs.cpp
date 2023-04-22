#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next=NULL;
   
    node(int data){
        this->data=data;
        this->next=NULL;
        
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
int len(node* head){
    node*temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }return count;
}
node* revs(node* head,int pos)
{
    node*curr=head;
    node* pre=NULL;
    node* forr=curr->next;
    int count=0;
    while(curr!=NULL&&count<pos)
    {
        forr=curr->next;
        curr->next=pre;
        
        pre=curr;
        curr=forr;
        count++;

    }
    if(curr!=NULL && forr!=NULL){
        head->next=revs(forr,pos);

    }return pre;
} 

int main()
{
    node*first=new node(10);
    node*sec=new node(20);
    node*third=new node(30);
    node*forth=new node(40);
    node*five=new node(50);


    first->next=sec;
    sec->next=third;
    third->next=forth;
    forth->next=five;
    five->next=NULL;
    node*head=first;
    
    print(head);
    head=revs(head,2);
    print(head);

}