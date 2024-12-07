#include<iostream>

using namespace std;

class Base
{
    public:
        int i,j;

        void fun()
        {
            cout<<"Inside fun";
        }
        void gun()
        {
            cout<<"Inisde Gun";
        }
        Base()
        {
            cout<<"Inside Base constructor";
        }
        
        ~Base()
        {
            cout<<"Inside Destructor";
        }
};

class Derived : public Base
{
    public:
        int x,y;

        void sun()
        {
            cout<<"Inside fun";
        }
        void mun()
        {
            cout<<"Inisde Gun";
        }
        Derived()
        {
            cout<<"Inside Base constructor";
        }
        
        ~Derived()
        {
            cout<<"Inside Destructor";
        }
};


int main()
{
    cout<<"Inisde main function";
    Derived dobj;

    dobj.i = 11;
    dobj.j=21;
    dobj.x = 31;
    dobj.y = 41;

    return 0;

}