#include <stdio.h>
int main(){

 int a;

 do{
 scanf("%d",&a);
 if (a==0||a==1){
    printf("You entered %d\n",a);
    break;
 }

 else{
    printf("Wrong Input. Try Again");
 }

 }


while(a>-1);


return 0;
}
