#include<stdio.h>
int main(){

int N;

scanf("%d",& N);
if(N>0 && N<=125){
    printf("%d",4);
}
if(N>125 && N<=211){
    printf("%d",6);
}
if(N>211 && N<=214){
    printf("%d",8);
}
return 0;
}




