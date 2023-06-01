#include<stdio.h>
int main(){
    int num = 100;
    int *pNum;
    pNum = &num;
    printf("Value of num : %d \n address of num  : %u ",num,&num);
    printf("Using Pointers variable : \n");
    printf("Value of num : %u \n address of num : %u \n",*pNum,pNum);
    return 0;
}