#include<stdio.h>
int main(){
//find largest value bitween A+B, A*B, A-B;

int A,B;
scanf("%d%d",&A,&B);

int add = A+B;
int subtract = A-B;
int multiply= A*B;

if(add > subtract && add > multiply){
    printf("%d",add);
}

else if(multiply > add && multiply>subtract){
    printf("%d",multiply);
}
else{
    printf("%d",subtract);
}


return 0;
}
