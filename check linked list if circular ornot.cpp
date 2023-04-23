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
node* checkx(node*&head)
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
        if(slow==fast)
        {
            slow=head;
            break;
        }
    }
    node*temp=fast;
    while(slow!=fast)
    {
        temp=fast;
        slow=slow->next;
        fast=fast->next;
    }
    temp->next=NULL;
    return slow;

}
void print(node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;

    }
}
    
int main(){
    node*first=new node(10);
    node*sec=new node(20);
    node*third=new node(30);
    node*fort=new node(40);
    node*five=new node(50);
    node*six=new node(60);
    node*sev=new node(70);
    node*head=first;

    first->next=sec;
    sec->next=third;
    third->next=fort;
    fort->next=five;
    five->next=six;
    six->next=sev;
    sev->next=third;
    cout<<"found at"<<checkx(head)->data<<endl;
    print(head);
    
    

}