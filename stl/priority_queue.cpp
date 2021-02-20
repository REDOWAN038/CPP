#include<iostream>
#include<queue>
using namespace std;

int main()
{
    /// max heap

    priority_queue <int> pq;

    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.push(50);

    /// showing size of the max heap

    cout<<"Max heap size : "<<pq.size()<<endl;

    /// printing elements of the max heap

    cout<<"Max heap elements : ";

    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }

    cout<<"\n\n";

    /// min heap

    priority_queue<int, vector<int>, greater<int> > pq1;

    pq1.push(10);
    pq1.push(20);
    pq1.push(30);
    pq1.push(40);
    pq1.push(50);

    /// showing size of the in heap

    cout<<"Min heap size : "<<pq1.size()<<endl;

    /// printing elements of the min heap

    cout<<"Min heap elements : ";

    while(!pq1.empty())
    {
        cout<<pq1.top()<<" ";
        pq1.pop();
    }

    cout<<"\n";

    return 0;
}

