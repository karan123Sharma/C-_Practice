#include<stdio.h>
int main(){
    //Fibonacci Series
    printf("------------------------------------------------ \n");
    int num =0;
    int num2 =1;
    int res;
    int count= 1;
    for(int i=0;i<30;i++){
        res = num + num2;
        num = num2;
        num2 = res;
        printf("%d \n",res);
    }
    //Factorial Series
    printf("------------------------------------------------\n");
    int n;
    printf("Enter the Element of Factorial : ");
    scanf("%d",&n);
    int  nu = 1;
    for(int i=1;i<=n;i++){
    nu = nu * i;
    }
    printf("%d \n",nu);
    printf("------------------------------------------------\n");
}
