#include<stdio.h>
int main(){

int N,K,A;
scanf("%d%d%d",&N,&K,&A);

int lastPerson = A;

if(N>1){
    for(int i=0; i<K;i++){
if(lastPerson>N){
    lastPerson=1;
}

//printf("%d ",lastPerson);
lastPerson++;

}
printf("%d ",lastPerson-1);

}
if(N==1){
    printf("%d",N);
}




return 0;
}
