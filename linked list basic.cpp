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
void insertattail(node*&tail,node*&newnode)
{
    newnode->next=NULL;
    tail->next=newnode;
    
    tail=newnode;
    
}

int len(node*head){
    int count=0;
    while(head!=NULL)
    {
        count++;
        head=head->next;
    }return count;
}
void insertatpos(node*&head,node*newnode,int pos)
{
    int i=1;
    node*temp=head;
    node*pre=NULL;
    node*cur=NULL;
    int count=0;
    if(pos==0){
        insertathead(head,newnode);
        
    }
    else{
       
        while(i<pos)
        {
            count++;
            cout<<count<<endl;
            temp=temp->next;
            i++;

            
        }
        pre=temp;
        cur=pre->next;
        newnode->next=cur;
        pre->next=newnode;
    }
}
void nodedeletehead(node*&head){
    node*temp=head;
    
    head=head->next;
    temp->next=NULL;
    delete temp;
}
void nodedelete(node*&head,int a){
    node*temp=head;
    node*pre=NULL;
    node*curr=NULL;
    
    int i=1;
    while(i<a)
    {
        temp=temp->next;
        i++;
    }
    pre=temp;
    curr=pre->next;
    pre->next=curr->next;
    curr->next=NULL;
    delete curr;


}
int main()
{
    node*first=new node(10);
    node*sec=new node(20);
    node*third=new node(30);
    node*forth= new node(40);
    node*head=first;
    //node*tail=forth;
    node*newnode=new node(50);

    first->next=sec;
    sec->next=third;
    third->next=forth;
    forth->next=NULL;
    
    // insertathead(head,newnode);
    // cout<<endl;
    // print(head);
    // insertattail(tail,newnode);
    // cout<<endl;
    // print(head);
    // insertatpos(head,newnode,1);
    cout<<endl;
    print(head);
    nodedelete(head,1);
    cout<<endl;
    print(head);
   

}