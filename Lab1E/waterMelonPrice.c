#include<stdio.h>
int main(){

int A,B,C;
scanf("%d%d%d",&A,&B,&C);

int sum;
if(A>=B&&A>=C){
sum=B+C;
}
else if(B>=A&B>=C){
    sum=A+C;
}
else{
    sum=A+B;
}

printf("%d",sum);

return 0;
}
