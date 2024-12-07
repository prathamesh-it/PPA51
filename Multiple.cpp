#include<iostream>

using namespace std;

class Base1
{
    public:
       int i,j;
       Base1()
       {
        cout<<"Inside Base1 constrctor \n";
        i=10;
        j=20;
       }
       ~Base1()
       {
        cout<<"Inside Base1 destructor \n";
       }
       void Fun()
       {
        cout<<"Inside Fun of Base1 \n";
       }
};
class Base2
{
    public:
       int x,y;
       Base2()
       {
        cout<<"Inside Base2 constrctor \n";
        x=30;
        y=40;
       }
       ~Base2()
       {
        cout<<"Inside Base2 destructor \n";
       }
       void Gun()
       {
        cout<<"Inside Gun of Base2 \n";
       }
};
class Derived : public Base1, public Base2
{
    public:
       int a,b;
       Derived()
       {
        cout<<"Inside derived constructor \n";
        a=50;
        b=60;
       }
       ~Derived()
       {
        cout<<"Inside derived destructor \n";
       }
       void Sun()
       {
        cout<<"Inside derived Sun \n";
       }

};
int main()
{
    Derived dobj;
    cout<<sizeof(Base1)<<"\n";  //8
    cout<<sizeof(Base2)<<"\n";  //8
    cout<<sizeof(Derived)<<"\n";  //24

    return 0;
}