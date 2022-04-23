#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
float a,b;
float mult;
float sum=0;
for(int i =1; i<=n; i++){
    scanf("%f%f",&a,&b);
mult=a*b;
sum+= mult;
}
printf("%.3f",sum);


return 0;
}

