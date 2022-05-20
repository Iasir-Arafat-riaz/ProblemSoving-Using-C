#include<stdio.h>
int main(){

//A=which people follow me
//B = i am following
// method 2*a+100

int A,B;
scanf("%d%d",&A,&B);

int full = A*2+100;
int difference = full-B;

printf("%d",difference);


return 0;
}
