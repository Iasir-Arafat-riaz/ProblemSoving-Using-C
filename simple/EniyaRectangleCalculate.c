#include<stdio.h>
int main(){

int quantityOfRectangle, length, width;
scanf("%d%d%d",&quantityOfRectangle,&length,&width);

int perRectangle = length*width;

int totalRectangleArea = quantityOfRectangle*perRectangle;
int bothSideCalculate = totalRectangleArea*2;

printf("%d\n",bothSideCalculate);


return 0;
}
