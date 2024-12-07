#include<stdio.h>

#pragma pack(1)
struct Demo
{
    int i;       //4
    float f;      //4
    char ch;     //1
    double d;     //8

};
union Hello
{
    int i;         //4
    float f;     //4
    char ch;     //1
    double d;     //8
                 //Largest:8

};

int main()
{
    struct Demo dobj;
    union Hello hobj;

    printf("size of structure is:%d \n",sizeof(dobj));
    printf("size of union is:%d \n",sizeof(hobj));




    return 0;
}