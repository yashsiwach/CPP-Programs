#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* add;
    node(int a){
        this->data=a;
        this->add=NULL;
    }
};
void insert(node* &head , int a ){
    node *temp =new node(a);
    temp->add=head;
    head=temp;
}
void tal(node * &tail ,int a){
    node* temp=new node(a);
    temp->add=temp;
    tail=temp;

}
void insert(node* )

void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<< temp->data<<" ";
        temp =temp->add;

    }cout<<endl;
}

int main(){
    node *n= new node(7);
    cout<<n->data<<endl;
    cout<<n->add<<endl;
    node* head= n;
    node* tail=n;
    

    insert(head,4);
   
    insert(head,5);
    //tal(tail,9);
    print(head); 
    


    return 0;
}