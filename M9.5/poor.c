#include<stdio.h>
int main(){

int a,b,c;
scanf("%d%d%d",&a,&b,&c);

if(a==b && a==c ){
    char cr[]="No";
    printf("%s",cr);
}
else if( a==b || a==c){
    char ar[]="Yes";
    printf("%s",ar);
}
else if( b==c || b==a){
    char ar[]="Yes";
    printf("%s",ar);
}
else if( c==a || c==b){
    char ar[]="Yes";
    printf("%s",ar);
}
else{
  char cr[]="No";
    printf("%s",cr);
}

return 0;
}
