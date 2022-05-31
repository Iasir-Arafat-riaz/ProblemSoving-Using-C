#include<stdio.h>
int main(){
int N,P;

scanf("%d%d",&N,&P);
int failed=0;
for(int i=0; i<N; i++){
    int sub;
    scanf("%d",&sub);
    if(sub<P){
        failed++;
    }
}
printf("%d",failed);


return 0;
}
