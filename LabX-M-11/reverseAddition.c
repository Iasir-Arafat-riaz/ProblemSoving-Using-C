#include<stdio.h>
int main(){

int abc;
scanf("%d",&abc);
int a,b,c,ab,bca,cab,res;
c=abc%10;
ab=abc/10;
b=ab%10;
a=ab/10;


bca=(b*100)+(c*10)+a;
cab = (c*100)+(a*10)+b;
res=abc+bca+cab;


printf("%d",res);


return 0;
}
