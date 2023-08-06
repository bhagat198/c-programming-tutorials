#include<stdio.h>
int main()

{
    int profit;

int loss;
int sp;

printf("enter selling  price ");
scanf("%d", &sp );

int cp;
printf("enter cost price ");
scanf("%d",&cp );


 if(sp>cp){
    printf("profit ");
    profit=sp-cp;
    printf("%d" , profit );
 }
 else{
    printf("loss  ");
    loss=cp-sp;
    printf("%d", loss );
 }
    return 0;
}