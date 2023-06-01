#include<stdio.h>
void min_max(){
    int arr[10];
    int min = 0;
    int max = 99;
    for(int i=0;i<10;i++){
        scanf("%d", &arr[i]);
        if(arr[i] < min){
            min = arr[i];
        }
        else if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("maxmimum element is : %d \n",max);
    printf("minimum element is : %d",min);

}
int main(){
    min_max();
}