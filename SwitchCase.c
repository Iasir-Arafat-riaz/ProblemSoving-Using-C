#include<stdio.h>
#include<stdbool.h>
int main(){

int in1,in2;
char characters;
//scanf("%d%c%d",&in1,&characters,&in2);
scanf("%d%c%in2",&in1,&characters,&in2);

switch(characters){

case '+' : printf("%d",in1+in2);
break;
case '-' : printf("%d",in1-in2);
break;
case '*' : printf("%d",in1*in2);
break;
case '/' : printf("%d",in1/in2);
break;
default : printf("unknown operator");
}



return 0;
}
