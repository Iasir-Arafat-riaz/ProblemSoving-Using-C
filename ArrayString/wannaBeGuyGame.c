#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){

int n,a,b,p[100],q[100];
scanf("%d\n",&n);
bool res= false;

scanf("%d",&a);
for(int i=0; i<a; i++){
scanf("%d",&p[i]);
if(p[i]==n){
    res=true;
}
}
scanf("%d",&b);
for(int i=0; i<b; i++){
scanf("%d",&q[i]);
if(q[i]==n){
    res=true;
}
}

if(res){
    printf("I become the guy.");
}
if(!res){
    printf("Oh, my keyboard!");
}

return 0;
}
