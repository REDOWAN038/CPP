#include<iostream>
#include<string>
using namespace std;

/// passing values from derived class to base class

class Father{
protected :
    float height;
public :
    Father(float h)
    {
        height = h;
    }
};

class Mother{
protected :
    string colour;
public :
    Mother(string c)
    {
        colour = c;
    }
};

class Child : public Father, public Mother{
public :
    Child(float inp_height,string inp_colour) : Father(inp_height),Mother(inp_colour)
    {
        cout<<"Height : "<<height<<endl;
        cout<<"Colour : "<<colour<<endl;
    }
};

int main()
{
    Child female(5.5,"white");

    return 0;
}
