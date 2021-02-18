#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main()
{
    /// list is used for implementing doubly linked list

    list <int> ls;

    ls.push_back(3);
    ls.push_back(1);
    ls.push_back(100);
    ls.push_front(5);
    ls.push_back(4);
    ls.push_back(54);
    ls.push_front(7);

    list <int> :: iterator it;

    /// printing list elements

    cout << "\nList  is : ";

    for(it = ls.begin(); it != ls.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';

    /// printing list front and back value

    cout<<"Front value : "<<ls.front()<<endl;
    cout<<"Last value : "<<ls.back()<<endl;

    /// pop first element

    ls.pop_front();
    cout<<"After pop first element : ";
    for(it = ls.begin(); it != ls.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';

    /// pop last element

    ls.pop_back();
    cout<<"After pop last element : ";
    for(it = ls.begin(); it != ls.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';

    /// reversing the last

    ls.reverse();
    cout<<"After reverse the list : ";
    for(it = ls.begin(); it != ls.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';

    /// sort the list

    ls.sort();
    cout<<"After sorting the list : ";
    for(it = ls.begin(); it != ls.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';

    /// list is empty or not

    if(ls.empty())
        cout<<"\nList is empty.\n";
    else
        cout<<"\nList is not empty.\n";

    /// size of the list

    cout<<"\nList size : "<<ls.size()<<endl;

    return 0;

}
