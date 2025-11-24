// #include<stdio.h>
// int main (){
//     int year;
//     printf("enter a year:");
//     scanf("%d",&year) ;
//     if ((year%400==0) || ((year%4==0) && (year%100!=0))) {
//         printf("leap year");
//     }
//     else{
//         printf("not a leap year");
//     }
//     return 0;
//     }
#include<stdio.h>
int main (){
    float bill, final;
    printf("enter the bill amount:");
    scanf("%f",&bill);
    if (bill>1000)
    {
         final=bill-(bill*0.40);
    }
    else if (bill>500)
    {
         final=bill-(bill*0.20);
    }
    else if (bill>300)
    { 
        final=bill-(bill*0.10);
    }
    else 
    { 
        final=bill;
    }
    printf("the final bill amount is:%f",final);
    return 0;
}