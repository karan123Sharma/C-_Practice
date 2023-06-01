#include <stdio.h>
#include <limits.h>
#include <math.h>
// #include <conio.h>
int main()
{
    //    int num ;
    //    int num2 ;
    //    scanf("%d",&num);
    //    scanf("%d",&num2);
    //    if(num > num2){
    //     printf("%d it is greater than %d", num,num2);
    //    }
    //    else{
    //     printf("%d it is greater than %d", num2,num);
    //    }
    // write a program to check if the character is upper case of lowercase charater
    // int num
    // char c;
    // scanf("%c",&c);
    //     if(c >=65 && c <=90){
    //         printf("%c Uppercase",c);
    //     }
    //     else{
    //           printf("%c Lowercase",c );
    //     }
    // }
    // write a program to check if the year is leap year
    // int num;
    // scanf("%d",&num);
    // if(num%4==0){
    //     printf("Its a Leap Year");
    // }
    // else{
    //     printf("Its not a Leap Year");
    // }
    // write a program to check the number is divisible by 5
    // int num;
    // scanf("%d",&num);
    // if(num%5==0){
    //     printf("Divisible");
    // }
    // else{
    //     printf("Its not Divisible");
    // }
    // write a program to enter month number and print number of days in that month;
    // int num;
    // scanf("%d",&num);
    // if(num == 4 || num == 6 || num == 9 || num == 11){
    //     printf("30");
    // }
    // else if(num == 2){

    //     printf("Enter the Year for Accurate Days");
    //     scanf("%d",&num);
    //     if(num%4==0){
    //         printf("29");
    //     }
    //     else{
    //         printf("28");
    //     }
    // }

    // else if(num == 1 || num == 2 || num == 3 || num == 5 || num == 7 || num == 8 || num == 10 || num == 12){
    //     printf("31");
    // }
    // else {
    //     printf("Invalid input");
    // }
    // write a program to enter Sides and check if it is Equilateral ;
    // int a,b,c;
    // scanf("%d%d%d",&a,&b,&c);
    // // printf("%d%d%d",a,b,c);
    // if(a==b && b==c && a==c){
    //     printf("It is What it is");
    // }
    // else if(a==b || b==c || a==c  ){
    //     printf("It is but chalega");
    // }
    // else{
    //     printf("Galat");
    // }

    // Write a program o find the simple intrest and Compound intrest;
    // Simple interset program
    // int principal, rate, time, interest;

    // printf("Enter the principal: ");
    // scanf("%d", &principal);

    // printf("Enter the rate: ");
    // scanf("%d", &rate);

    // printf("Enter the time: ");
    // scanf("%d", &time);

    // interest = principal * rate * time / 100;
    // printf("The Simple interest is %d", interest);
    // Principal amount
    //   double principal = 10000;

    //   // Annual rate of interest
    //   double rate = 5;

    //   // Time
    //   double time = 2;

    //   // Calculating compound Interest
    //   double Amount = principal *
    //                   ((pow((1 + rate / 100),
    //                     time)));
    //   double CI = Amount - principal;

    //   printf("Compound Interest is : %lf",CI);
    // int num;
    // scanf("%d", &num);
    // int arr[50];
    // int i = 0;
    // while (num > 0)
    // {
    //     i++;
    //     arr[i] = num % 10;
    //     num = num / 10;
    //     if (arr[i] != 0)
    //     {
    //         printf("%d", arr[i]);
    //     }
    // }
    // char k[20];
    // scanf("%s",k);
    // int num = sprintf(k,"%s",k);
    // printf("%d\n",num);
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=0;i<b;i++){
        a = a * b;
    }
    printf("%d",a);
}
