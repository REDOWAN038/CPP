#include<iostream>
#include<set>
#include<iterator>

using namespace std;

int main()
{
    /// set is used to contain distinct elements

    set<int> s;

    /// inserting elements
    s.insert(10);
    s.insert(30);
    s.insert(89);
    s.insert(23);
    s.insert(23);
    s.insert(42);

    /// printing set s

    set<int> :: iterator it;
    cout << "\nThe set s is : \n";
    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it<<" ";
    }
    cout << endl;

    /// assigning the elements from s to ss

    set <int> ss(s.begin(), s.end());
    set <int> :: iterator itr;

    /// printing set ss
    cout << "\nThe set ss after assign from s is : \n";
    for (itr = ss.begin(); itr != ss.end(); itr++)
    {
        cout << *itr<<" ";
    }
    cout << endl;

    /// removing multiple elements

    cout<< "\nss after removal of elements less than 30 :\n";
    ss.erase(ss.begin(), ss.find(30));
    for (itr = ss.begin(); itr != ss.end(); itr++) {
        cout <<*itr<<" ";
    }
    cout<<endl;

    /// removing single element

    ss.erase(42);

    cout<< "\nss after removal 42 :\n";

    for (itr = ss.begin(); itr != ss.end(); itr++)
    {
        cout <<*itr<<" ";
    }

    cout << endl;

    /// size or number of elements of the set

    cout<<"\nNumber of elements in ss are : \n";
    cout<<ss.size()<<endl;

    return 0;
}
