#include<stdio.h>
int main(){
    int num =10 ;
    printf("%d \n",num);
    printf("%p \n",&num);
    int * ptr = &num;
    printf("%p \n",&ptr);
    printf("%p \n",&ptr);
    int *p = 5;
    printf("%p \n",&p);
    printf("%d \n",p);
}