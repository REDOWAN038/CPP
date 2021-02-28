#include<iostream>
#include<string>
using namespace std;


class Father{
public :
    float height;
};

class Mother{
public :
    string colour;
};

/// inheriting from both father and mother class

class Child : public Father, public Mother{
public :

    void set_items(float inp_height,string inp_colour)
    {
        height = inp_height;
        colour = inp_colour;
    }

    void display()
    {
        cout<<"Height : "<<height<<endl;
        cout<<"Colour : "<<colour<<endl;
    }
};

int main()
{
    Child female;
    female.set_items(5.5,"white");
    female.display();

    return 0;
}
