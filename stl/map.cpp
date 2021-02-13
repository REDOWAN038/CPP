#include<iostream>
#include<map>
#include<iterator>

using namespace std;

int main()
{

    /// no two mapped values can have same key values

    map<int, int> mp;

    /// inserting elements in map
    mp.insert({1,10});
    mp.insert({2, 20});
    mp.insert({3, 30});
    mp.insert({4, 40});
    mp.insert({5, 50});

    /// printing mp

    map<int, int> :: iterator it;
    cout << "\nThe map mp is : \n";

    for (it = mp.begin(); it != mp.end(); ++it)
    {
        cout<< it->first<<" "<< it->second << '\n';
    }
    cout << endl;

    /// assigning the elements from mp to mp2
    map<int, int> mp2(mp.begin(), mp.end());
    map<int, int> :: iterator itr;

    /// printing mp2
    cout << "\nThe map mp2 is : \n";
    for (itr = mp2.begin(); itr != mp2.end(); ++itr)
    {
        cout <<itr->first<<" "<< itr->second << '\n';
    }
    cout << endl;

    /// remove all elements up to element with key 3
    cout << "\nmp2 after removal of elements less than key=3 : \n";

    mp2.erase(mp2.begin(), mp2.find(3));
    for (itr = mp2.begin(); itr != mp2.end(); ++itr)
    {
        cout <<itr->first<<" "<<itr->second << '\n';
    }

    /// removing key 4

    mp2.erase(4);

    cout << "\nmp2 after removal of elements with key=3 : \n";

    for (itr = mp2.begin(); itr != mp2.end(); ++itr)
    {
        cout <<itr->first<<" "<<itr->second << '\n';
    }

    cout << endl;
}
