#include<bits/stdc++.h>
using namespace std;
class node 
{
    public:
    int data;
    node* next;
    node* pre;
    node() 
    {
        this->data=0;
        this->next=NULL;
        this->pre=NULL;
    }
    node(int data)
    {
        this->data=data;
        this->next=NULL;
        this->pre=NULL;
    }

};
void print(node*head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
}
int len(node*head)
{
    int lent=0;
    node*temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        lent++;
    }
    return lent;

}
void ins(node* &head, node* &tail, int data)
{
    node* newnode = new node(data);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        newnode->next = head;
        head->pre = newnode;
        head = newnode;
    }
}
void last(node* &head ,node*&tail,int data)
{
    node * newnode= new node(data);
    if(head==NULL){
        head=newnode;
        tail=newnode;
    }
    else{
        tail->next=newnode;
        newnode->pre=tail;
        tail=newnode;

    }
}
void pos(node* &head,node* &tail,int data,int p){
    if(head==NULL){
        node* newnode= new node(data);
        head=newnode;
        tail=newnode;
    }
    else{
    if(p==1)
    {
        ins(head,tail,data);
        return;
    }
    int lent=len(head);
    if(p>lent){
        last(head,tail,data);
        return;
    }
    int i=1;
    node* prenode=head;
    while(i<p-1)
    {
        prenode=prenode->next;
        i++;

    }
    node *curr=prenode->next;
    node *newnode=new node(data);
    prenode->next=newnode;
    newnode->pre=prenode;
    newnode->next=curr;
    curr->pre=newnode;

    }
}


int main()
{
    node* first = new node(10);
    node* sec = new node(20);
    node* third = new node(30);
    node* head = first;
    node* tail = third;
    first->next = sec;
    sec->pre = first;
    sec->next = third;
    third->pre = sec;
    print(first);
    cout << endl;
    int jat = len(first);
    cout << jat << endl;
    ins(head, tail, 90);
    print(head);
    cout << endl;
    last(head,tail,50);
    print(head);
    cout << endl;
    pos(head,tail,400,1);
    print(head);
}