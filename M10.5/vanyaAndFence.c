#include<stdio.h>
int main(){

int n,h,frnd;
scanf("%d%d",&n,&h);
int res=0;

for(int i=0; i<n; i++){
  scanf("%d",&frnd);
if(frnd<=h){
    res+=1;
}
if(frnd>h){
    res+=2;
}
}

printf("%d",res);


return 0;
}
