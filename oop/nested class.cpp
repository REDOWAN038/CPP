/// A nested class is a class that is declared in another class.
/// The nested class is also a member variable of the enclosing class and has the same access rights as the other members


#include<iostream>
#include<string>
using namespace std;

class Person{       /// Person is the enclosing class
public :
    string name;

    class Address{          /// Address is the nested class
    public :
        string country;
        string city;
        string street_name;
        int house_no;
    };

    Address ad;   /// have to declare a object of a nested class if you want to use it's member in enclosing class

    void SetInfo(string iname,string icountry,string icity,string ist,int ihn)
    {
        name = iname;
        ad.country = icountry;
        ad.city = icity;
        ad.street_name = ist;
        ad.house_no = ihn;
    }

    void GetInfo()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Address : "<<ad.house_no<<","<<ad.street_name<<","<<ad.city<<","<<ad.country<<endl;
    }
};

int main()
{
    /**
        if you want to declare a object of the nested class then the syntax is:
            Person :: Address addr;
    */

    Person P;

    P.SetInfo("Redowan","Bangladesh","Sreemangal","Mission Road",154);
    P.GetInfo();
}
