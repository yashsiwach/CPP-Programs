 #include<iostream>
 #include<vector>
 using namespace std;
 int main(){
    vector<int>a;
    vector<int>p(5,1);
    for (int i:p){
      cout<<i<<" ";
    }
    a.push_back(2);
    cout<<"capacity"<<a.capacity()<<endl;
    a.push_back(3);
    a.push_back(4);
    cout<<"size"<<a.size()<<endl;//kitne element h
    cout<<"element"<<a.at(1)<<endl;//index element
    cout<<"fist ele"<<a.front()<<endl;//phala elemnt
    cout<<"last element"<<a.back()<<endl;//last ala
    


 }