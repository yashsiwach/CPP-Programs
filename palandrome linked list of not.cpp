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
        cout<<head->data<<" ";
        head=head->next;
    }
}
bool pal(node*slow,node*reverse,node*head)
{
    node*temp1=head;
    node*temp2=reverse;
    while(temp2!=NULL)
    {
        
        if(temp1->data!=temp2->data)
        {
            return false;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }return true;

}
int main()
{
    node*first=new node(10);
    node*sec=new node(20);
    node* third=new node(30);
    node*forth=new node(30);
    node*five=new node(20);
    node*six=new node(50);
    first->next=sec;
    sec->next=third;
    third->next=forth;
    forth->next=five;
    five->next=six;
    node*head=first;
    node*slow=middle(head);
    cout<<slow->data<<endl;
    node* rev=reverse(slow->next);
    print(rev);
    bool ans=pal(slow,rev,head);
    cout<<ans<<endl;


}