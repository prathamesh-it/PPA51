#include<stdio.h>     //standard input output
#include<stdlib.h>   //standard libarary

int main()
{
    int *ptr=NULL;
    ptr=(int *)malloc(5 * sizeof(int));

    ptr=(int *)realloc(ptr,7*sizeof(int));  //Increase memory

    ptr=(int *)realloc(ptr,3*sizeof(int));  ////Decrease memory

    ptr=(int *)realloc(NULL,5*sizeof(int)); //Works like malloc

    ptr=(int *)realloc(ptr,0);
    return 0;
}