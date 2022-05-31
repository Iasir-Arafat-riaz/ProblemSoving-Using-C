#include<stdio.h>
#include <limits.h>

int main(){

int max,min;
long long int n;
scanf("%lld",&n);
max = INT_MAX;
min = INT_MIN;

if(n<=max && n>=min){
    printf("Yes");
}
else{
 printf("No");
}



return 0;
}
