#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define all(x) (x).begin(), (x).end()
#define debug(x) cerr<<x<<" ";
class node{
public:
    int roll;
    int marks;
    node*next;
    node()
    {
        this->roll=0;
        this->marks=0;
        this->next=nullptr;
    }
    node(int roll,int marks)
    {
        this->roll=roll;
        this->marks=marks;
        this->next=NULL;
    }

};
void print(node*head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<"roll "<<temp->roll<<" ";
        cout<<"marks "<<temp->marks<<endl;
        temp=temp->next;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    clock_t time_req=clock();
    
    

    node *first=new node(3,43);
    node *second=new node(5,35);
    node *third= new node(7,62);
    node *forth= new node(7,63);
    node *fifth= new node(7,67);
    first->next=second;
    second->next=third;
    third->next=forth;
    forth->next=fifth;
    fifth->next=nullptr;
    print(first);





#ifndef ONLINE_JUDGE
    cout<<endl<<"Time: "<<fixed<<setprecision(6)<<((double)(clock()-time_req))/CLOCKS_PER_SEC<<endl;
#endif
}

