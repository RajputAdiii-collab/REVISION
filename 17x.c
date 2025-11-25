// // #include<stdio.h>
// // int main (){
// //     int year;
// //     printf("enter a year:");
// //     scanf("%d",&year) ;
// //     if ((year%400==0) || ((year%4==0) && (year%100!=0))) {
// //         printf("leap year");
// //     }
// //     else{
// //         printf("not a leap year");
// //     }
// //     return 0;
// //     }
// #include<stdio.h>
// int main (){
//     float bill, final;
//     printf("enter the bill amount:");
//     scanf("%f",&bill);
//     if (bill>1000)
//     {
//          final=bill-(bill*0.40);
//     }
//     else if (bill>500)
//     {
//          final=bill-(bill*0.20);
//     }
//     else if (bill>300)
//     { 
//         final=bill-(bill*0.10);
//     }
//     else 
//     { 
//         final=bill;
//     }
//     printf("the final bill amount is:%f",final);
//     return 0;
// }
// STRUCT STUDENT CODE
#include <stdio.h>
#include <string.h>
struct student {
    char name[30];
    int roll;
    float marks;
};

int main() {
    struct student S1, S2;
    strcpy(S1.name,"John Doe");
    S1.roll = 101;
    S1.marks = 95.5;
    S2 = S1;

    printf("\nName: %s, Roll: %d, Marks: %f\n", S2.name, S2.roll, S2.marks);


    return 0;
}