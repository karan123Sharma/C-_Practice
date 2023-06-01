#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num <= 10000){
        printf("The Tax is : %f",num*0.02);
    }
    else if(num >= 10001 && num <= 20000){
        printf("The Tax is : %f",num*0.05);
    }
    else if(num >= 20001 && num <= 30000 ){
        printf("The Tax is : %f",num*0.07);
    }
    else if(num >= 30001 && num <= 50000){
        printf("The Tax is : %f",num*0.10);
    }
    else if(num >= 50001){
        printf("The Tax is : %f",num*0.15);
    }
}