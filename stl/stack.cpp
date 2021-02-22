#include<iostream>
#include<stack>
using namespace std;

int main()
{
    /// stack is last in first out (lifo) type container

    stack <int> st;

    /// pushing elements into the stack

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    /// showing size and top value of the stack

    cout<<"Stack size : "<<st.size()<<endl;
    cout<<"Stack top value : "<<st.top()<<endl;

    /// showing stack elements

    cout<<"Stack elements : ";

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }

    cout<<"\n";

    return 0;
}

