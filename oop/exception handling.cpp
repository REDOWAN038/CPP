#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 0;

    try{
        if(b==0)
            throw "divide by zero";
        cout<<a/b<<endl;
    }catch(const char *f){          /// catch (const char) can catch only character type exception
        cout<<f<<endl;
    }catch(...){                    /// catch (...) can catch all type of exception
        cout<<"default\n";
    }

    return 0;
}

