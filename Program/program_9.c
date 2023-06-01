#include<stdio.h>
void swap(int *a,int *b){
    int temp ;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int n1 = 10;
    int n2 = 20;
    // n1 = n1+n2;
    // n2 = n1 - n2;
    // printf("n2 == %d \n",n2);
    // n1 = n1 - n2;
    // printf("n1 == %d \n",n1);
    swap(&n1,&n2);
    printf("%d \n",n1);
    printf("%d",n2);
}