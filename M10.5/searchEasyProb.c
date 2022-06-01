#include<stdio.h>
int main(){

int p,input,res;
scanf("%d",&p);
int i=0;

while(i<p){
        scanf("%d",&input);
if(input == 1){
res=1;
break;
}
if(input==0){
    res=0;
}
i++;
}
if(res==1){
    printf("HARD");
}
if(res==0){
    printf("EASY");
}

return 0;
}
