#include<iostream>
#include<deque>
using namespace std;
int main()
{
	deque <int> dq;
	deque <int> :: iterator it;

	/// pushing elements into the deque

	dq.push_back(8);
	dq.push_front(9);
	dq.push_back(82);
	dq.push_back(3);
	dq.push_front(8);
	dq.push_back(81);

	/// showing deque elements

	cout<<"Deque elements : ";

	for(it=dq.begin();it<dq.end();it++)
		cout<<*it<<" ";
    cout<<"\n";

	/// showing deque size, deque front value, deque last value

	cout<<"Front value : "<<dq.front()<<endl;
	cout<<"Last value : "<<dq.back()<<endl;
	cout<<"Deque size : "<<dq.size()<<endl;

	/// deleting first element

	dq.pop_front();

	cout<<"After deleting first element : ";

	for(it=dq.begin();it<dq.end();it++)
		cout<<*it<<" ";
    cout<<"\n";

    /// deleting last element

	dq.pop_back();

	cout<<"After deleting last element : ";

	for(it=dq.begin();it<dq.end();it++)
		cout<<*it<<" ";
    cout<<"\n";

    return 0;
}
