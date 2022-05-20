#include<stdio.h>
int main(){

int n,a,b;
scanf("%d",&n);
int sum=0;
for(int i=1; i<=n; i++){
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("Case %d: %d\n",i,sum);
}


return 0;
}


