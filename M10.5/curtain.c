#include<stdio.h>
int main(){

int win,cert;
int uncovered=0;
scanf("%d%d",&win,&cert);
if(win>cert*2){
 uncovered=win-cert*2;
 printf("%d",uncovered);
}
else{
    printf("%d",uncovered);
}


return 0;
}
