#include<iostream>
#include<queue>
using namespace std;

int main()
{
    /// queue is first in first out (fifo) type container
    /// elements are inserted at the back and are deleted from the front

    queue <int> q;

    /// pushing elements into the queue

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    /// showing size,first element and last element

    cout<<"Front value : "<<q.front()<<endl;
	cout<<"Last value : "<<q.back()<<endl;
	cout<<"Queue size : "<<q.size()<<endl;

	/// printing queue elements

	cout<<"Queue elements : ";

    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }

    cout<<"\n";

    return 0;
}

