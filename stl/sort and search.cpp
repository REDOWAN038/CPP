#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    vector <int> v = {3,6,1,8,3};

    /// sort function sorted the vector in ascending order
    /// syntex ---> sort(startaddress,endaddress)
    /// before sorting

    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" \n"[i==v.size()-1];

    sort(v.begin(),v.end());

    ///after sorting from first to last

    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" \n"[i==v.size()-1];

    vector <int> vv = {3,6,1,8,3};

    sort(vv.begin()+2,vv.end());

    ///after sorting from index 2[0 based] to last

    for(int i=0;i<vv.size();i++)
        cout<<vv[i]<<" \n"[i==vv.size()-1];

    /// sorting in descending order

    vector <int> vvv = {3,6,1,8,3};
    sort(vvv.rbegin(),vvv.rend());

    ///after sorting in descending order

    for(int i=0;i<vvv.size();i++)
        cout<<vvv[i]<<" \n"[i==vvv.size()-1];

    ///for finding a value in a vector or array there is binary search in stl....binary search works in sorted array
    /// syntex ---> binary_search(startaddress,endaddress,valuetofind)
    /// let's find 3 in a vector v

    if(binary_search(v.begin(),v.end(),3))
        cout<<"3 is found\n"<<endl;
    else
        cout<<"3 is not found\n"<<endl;

    return 0;
}
