#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int temp;
int count=0;
for(int i =1; i<=n; i++){
    scanf("%d", &temp);
    if(temp<0){
        count++;
    }
}
printf("%d",count);


return 0;
}
