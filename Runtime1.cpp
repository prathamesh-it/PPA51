#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
        void Fun()         //Defination
        {
            cout<<"Inside Base Fun \n";
        }
        void Gun()
        {
           cout<<"Inside Base Gun \n"; 
        }
        void Sun()
        {
            cout<<"Inside Base Sun \n";
        }
        void Run()
        {
            cout<<"Inside Base Run \n";
        }
       
};

class Derived : public Base
{
    public:
        int x,y;
        void Fun()         //Redefination
        {
           cout<<"Inside Derived Fun \n";  
        }
        void Gun()
        {
            cout<<"Inside Derived Gun \n";
        }
        void Sun()
        {
            cout<<" Inside Derived Sun \n";
        }
        void Mun()
        {
            cout<<"Inside Derived Mun \n";
        }       

};
int main()
{
      
    Derived dobj;

    Base *bptr=NULL;

    bptr=&dobj;  //Upcasting

    bptr->Fun();
    bptr->Gun();
    bptr->Sun();
    bptr->Run();
    //bptr->Mun();

 
    return 0;
}