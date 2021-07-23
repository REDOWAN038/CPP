/// In C++, we can make operators to work for user defined classes

#include<iostream>
using namespace std;

class Complex{
private :
    int real;
    int imag;

public :
    Complex()
    {
        real = 0;
        imag = 0;
    }

    Complex(int first,int second)
    {
        real = first;
        imag = second;
    }

    void Print()
    {
        cout<<real<<" + i"<<imag<<endl;
    }

    Complex operator+(Complex obj)          /// overloading '+' operator
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
};

int main()
{
    Complex obj1(50,60);
    Complex obj2(30,50);

    Complex obj3;
    obj3 = obj1+obj2;
    obj3.Print();
}
