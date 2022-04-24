#include<stdio.h>
int main(){

//int A,B,C;
//scanf("%d%d%d",&A,&B,&C);
//
//if(A<=C&&C<=B){
//    printf("Yes");
//}
//else {
//    printf("No");
//}

int A,B;
scanf("%d%d",&A,&B);

int sum= A+B;

if(sum<10){
    printf("%d",sum);
}
else{
    printf("error");
}


return 0;
}
