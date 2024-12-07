#include<stdio.h>

int Addition(int Value1, int Value2){

    int Result=0;

    Result=Value1 + Value2;

    return Result;
}

int main(){

    int No1=0,No2=0;
    int Ans;

    printf("Enter first number: \n");
    scanf("%d",&No1);

    printf("Enter second number : \n");
    scanf("%d",&No2);

    Ans=Addition(No1,No2);

    printf("Addition is: %d\n",Ans);

  

    return 0;
    
}
    
    
