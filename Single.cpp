#include<iostream>

using namespace std;

class Base
{
    public:
        int i,j;

        Base()
        {
            cout<<"Inside Base constructor\n";
            i=10;
            j=20;
        }
        ~Base()
        {
           cout<<"Inside Base destructor\n"; 
        }
        void Fun()
        {
            cout<<"Inside Base Fun\n";
        }


};

class Derived:public Base
{
    public:
        int x,y;
        Derived()
        {
        cout<<"Inside derived constructor\n";
        x=30;
        y=40;
        }
        ~Derived()
        {
           cout<<"Inside derived destructor\n"; 
        }
        void Gun()
        {
            cout<<"Inside derived Gun\n";
        }

    
};

int main()
{
     
    Derived dobj;

    cout<<"Inside main Function \n";

    cout<<dobj.i<<"\n";
    cout<<dobj.j<<"\n";
    cout<<dobj.x<<"\n";
    cout<<dobj.y<<"\n";

    dobj.Fun();
    dobj.Gun();

   // cout<<sizeof(bobj)<<"\n";
   // cout<<sizeof(dobj)<<"\n";


    return 0;
}