#include<stdio.h>
int main(){
    const int a = 10;
    int *p = &a;
    printf("Before Changing : %d \n",a);
    *p = 20;
    printf("After Changing : %d",a);
    return 0;
    //  char arr[100] = "♔♕♖♗♘♙♚♛♜♝♞♟";
    // printf("%s",arr);
}