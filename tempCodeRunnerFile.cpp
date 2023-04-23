#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node*next=NULL;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }

};
node* middle(node*head)
{
    node*fast=head;
    node*slow=head;
    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
    }return slow;
}
node* reverse(node*head)
{
    node*curr=head;
    node*pre=NULL;
    node*forr=NULL;
    while(curr!=NULL)
    {
        forr=curr->next;
        curr->next=pre;
        pre=curr;
        curr=forr;

    }return pre;
}
void print(node*head)
{
    while(head!=NULL)
    {
        cout<<head->next;
        head=head->next;
    }
}
int main()
{
    node*first=new node(10);
    node*sec=new node(20);
    node* third=new node(30);
    node*forth=new node(30);
    node*five=new node(20);
    node*six=new node(10);
    first->next=sec;
    sec->next=third;
    third->next=forth;
    forth->next=five;
    five->next=six;
    node*head=first;
    cout<<middle(head)->data<<endl;
    print(head);
    head=reverse(head);
    print(head);


}