#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> v;

    /// insert at the last position
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    cout<<"Printin from first to last without using any iterator : ";

    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";

    cout << "\nPrinting from first element to last element using iterator: ";
    for (auto it = v.begin(); it != v.end(); it++)
        cout << *it << " ";

    cout << "\nPrinting from last element to first element: ";
    for (auto itr = v.rbegin(); itr != v.rend(); itr++)
        cout << *itr << " ";

    ///checking a vector is empty or not
    if(v.empty())
        cout<<"\nvector is empty\n";
    else
        cout<<"\nVector is not empty\n";

    ///checking element element at some position
    cout<<v[2]<<" "<<v.at(2)<<endl;

    ///checking value at front and back
    cout<<"Front value is : "<<v.front()<<" and Last value is : "<<v.back()<<endl;

    /// fill the array with 10 five times
    v.assign(5, 10);

    cout << "The vector elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    /// removes last element
    v.pop_back();

    /// prints the vector
    cout << "\nThe vector elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    /// inserts 5 at the beginning
    v.insert(v.begin(), 5);
    cout << "\nThe vector elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    /// removes the first element
    v.erase(v.begin());
    cout << "\nThe vector elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    /// inserts at some position
    v.insert(v.begin()+2, 5);
    cout << "\nThe vector elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    /// swapping two elements of a vector
    swap(v[0],v[2]);
    cout << "\nThe vector elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    /// erases the vector
    v.clear();
    cout << "\nVector size after erase : " << v.size();

    return 0;
}
