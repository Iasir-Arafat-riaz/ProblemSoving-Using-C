#include<stdio.h>
int main()
{
    int k,n,w;
    int cost=0;
    scanf("%d%d%d",&k,&n,&w);
for(int i=1; i<=w;i++){
    //cost of wth bananas
    cost+=i*k;

}
const borrow= cost-n;
if(borrow>0){
    printf("%d",cost-n);
}
else{
    printf("%d",0);
}



return 0;
}
