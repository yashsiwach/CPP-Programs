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
void rev(node* head,int pos)
{
    node*temp=head;
    node* pre=NULL;
    node* forr=NULL;
    int count=0;
    while(count<pos)
    {
        forr=temp->next;
        temp->next=pre;
        
        pre=temp;
        temp=forr;
        count++;

    }
    if(forr!=NULL){
        head->next=rev(forr,pos);
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
    rev()

}