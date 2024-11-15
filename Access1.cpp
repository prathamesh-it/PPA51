#include<iostream>

using namespace std;

class Base
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    public:
        Base()
        {
            i=10;
            j=20;
            k=30;
        }
        void gun()
        {
            cout<<i<<"\n";     //ALLOWED
            cout<<j<<"\n";     //ALLOWED
            cout<<k<<"\n";     //ALLOWED
        }

};

class Derived : public Base
{
    public:
        void fun()
        {
            cout<<i<<"\n";     //ALLOWED
            cout<<j<<"\n";     //NOT ALLOWED
            cout<<k<<"\n";      //ALLOWED
        }
};
int main()
{
    Base bobj;

    cout<<bobj.i<<"\n";       //ALLOWED
    cout<<bobj.j<<"\n";       //NOT ALLOWED
    cout<<bobj.k<<"\n";       //NOT ALLOWED fakt mula sathi tayar 
    //zala ahe mhnje derived class sathi tayar zala ahe!



    return 0;
}