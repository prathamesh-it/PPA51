#include<iostream>
using namespace std;

class Demo
{
    public:
        int No1,No2,No3;

    //Paramterised constructor with DEFAULT arguments
    Demo(int A=11,int B=21,int C=51)
    {
      No1=A;
      No2=B;
      No3=C;
    }
};
int main()
{
    //Demo obj1(11,21,51);
    //Demo obj2;   ERROR

    Demo obj1();
    Demo obj2(10);
    Demo obj3(10,20);
    Demo obj4(10,20,30);

    return 0;
}