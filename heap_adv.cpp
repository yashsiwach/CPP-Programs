#include<bits/stdc++.h>
using namespace std;

void heapify(vector<int>& v, int size, int i)
{
    int index = i;
    int left = 2 * index;
    int right = 2 * index + 1;
    int largest = index;
    if (left <= size && v[left] > v[largest])
        largest = left;
    if (right <= size && v[right] > v[largest])
        largest = right;
    if (index != largest)
    {
        swap(v[index], v[largest]);
        heapify(v, size, largest);
    }
}

void buildheap(vector<int>& v, int size)
{
    for (int i = size / 2; i >= 1; i--)
    {
        heapify(v, size, i);
    }
}

void heapsort(vector<int>& v, int size)  
{
    while (size > 1)
    {
        swap(v[1], v[size]);
        size--;
        heapify(v, size, 1);
    }
}

int main()
{
    vector<int> v = {-1, 12, 56, 43, 6, 78, 87, 5, 44, 3, 23, 32};
    int size = v.size() - 1;
    buildheap(v, size);
    cout << "printing" << endl;
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    heapsort(v, size);
    for (auto it : v)
    {
        cout << it << " ";
    }
}