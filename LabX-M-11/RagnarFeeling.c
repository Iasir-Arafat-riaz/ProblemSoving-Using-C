#include<stdio.h>
int main(){

int a;
scanf("%d",&a);


if(a<=100 && a>0){


 if(a%3==1){
     printf("I hate it");
 }

else if(a%3==2){
    printf("I hate that I love it");
 }
 else if(a%3==0){
    printf("I hate that I love that I hate it");
 }

}



return 0;
}
