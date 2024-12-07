#include<iostream>
using namespace std;

class Demo
{
    public:
       int A;
       int B;


        void Fun()
        {
            cout<<"Inside fun \n";
        }

        void Gun()
        {
            cout<<"Inside Gun \n";
        }


};

int main()
{

    Demo obj;

    cout<<sizeof(obj)<<"\n";

    obj.A=11;
    obj.B=21;

    obj.Fun();
    obj.Gun();

    cout<<obj.A<<"\n";
    cout<<obj.B<<"\n";




    return 0;
}