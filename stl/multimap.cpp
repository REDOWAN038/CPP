#include<iostream>
#include<map>
#include<iterator>

using namespace std;

int main()
{

    /// multiple values can have same key values

    multimap<int, int> mp;

    /// inserting elements in map
    mp.insert({1,10});
    mp.insert({1,10});
    mp.insert({2, 20});
    mp.insert({3, 30});
    mp.insert({3, 30});
    mp.insert({4, 40});
    mp.insert({5, 50});

    /// printing mp

    map<int, int> :: iterator it;
    cout << "\nThe multimap mp is : \n";

    for (it = mp.begin(); it != mp.end(); ++it)
    {
        cout<< it->first<<" "<< it->second << '\n';
    }
    cout << endl;

    return 0;
}
