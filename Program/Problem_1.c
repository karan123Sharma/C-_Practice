#include<stdio.h>
int main(){
    //Area of Rectangle
    printf("------------------------------------------------------ \n");
    int a,b;
    printf("Enter the Sides of Rectangle.. ");
    scanf("%d%d",&a,&b);
    printf("Area of Rectangle : %d \n",a*b);
    printf("------------------------------------------------------ \n");
    //Area of Circle
    int rad;
    printf("Enter the Radius of Circle... ");
    scanf("%d",&rad);
    printf("Area of Circle : %f \n",3.14*rad*rad);
    printf("------------------------------------------------------\n");
    //Area of Triangle
    int hei,bre;
    printf("Enter the Sides of Triangle.. ");
    scanf("%d%d",&hei,&bre);
    printf("Area ofTriangle : %d \n",(hei*bre)/2);
    printf("------------------------------------------------------\n");
    //Circumferance of Circle
    int rad1;
    printf("Enter the Radius of Circle... ");
    scanf("%d",&rad1);
    printf("Circumferance of Circle : %f \n",3.14*2*rad1);
    printf("------------------------------------------------------\n");
}