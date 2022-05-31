#include<stdio.h>

int main(){

int n;
scanf("%d",&n);
int test = n/100;

if(n>0 && n<=100){
    printf("%d",1);
}
else if(n%100==0){
        printf("%d",n/100);

}
else if(n>0 && n>100 ){
     printf("%d",test+1);
}


return 0;
}
