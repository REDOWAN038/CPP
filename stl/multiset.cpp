#include<iostream>
#include<set>
#include<iterator>

using namespace std;

int main()
{
    /// multiset don't contain distinct values like set

    multiset <int> s;

    /// inserting elements
    s.insert(10);
    s.insert(10);
    s.insert(30);
    s.insert(89);
    s.insert(23);
    s.insert(23);
    s.insert(42);

    /// printing set s

    multiset <int> :: iterator it;
    cout << "\nThe multiset s is : \n";
    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it<<" ";
    }
    cout << endl;

    return 0;
}
