#include<stdio.h>

int main(){

int a,b;
scanf("%d%d",&a,&b);

int res = a-b;

if(a>b){
//printf("%d\n",res);
 int mag=1;
 for(int i=0; i<res;i++){
mag*=32;

 }
printf("%d",mag);

}
else if(res == 0){
    printf("%d", 1);
}




return 0;
}
