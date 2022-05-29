#include <stdio.h>
int main(){
//    int lim,bob;
//    scanf("%d%d",&lim,&bob);
//   int year=0;
//
//
//
//for(int i=1;lim <=bob ; i++){
//        lim*=3;
//bob*=2;
//year++;
//}
//printf("%d",year);
int x=0;

int n;
char a,b,c;
scanf("%d",&n);
for(int i=0; i<n; i++){
    scanf(" %c%c%c",&a,&b,&c);
   if(b=='+'){
    x+=1;
   }
   else if(b=='-'){
    x-=1;
   }
}
printf("%d\n",x);

return 0;
}
