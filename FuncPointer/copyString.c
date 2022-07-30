#include<stdio.h>

void changeString(char *a, char *b){
    char *c;
*c=*a;
*(c+1)=*(a+1);
*(c+2)=*(a+2);
*(c+3)=*(a+3);
*(c+4)=*(a+4);
*a=*b;
*(a+1)=*(b+1);
*(a+2)=*(b+2);
*(a+3)=*(b+3);
*(a+4)=*(b+4);
*(a+5)=*(b+5);

*b=*c;
*(b+1)=*(c+1);
*(b+2)=*(c+2);
*(b+3)=*(c+3);
*(b+4)=*(c+4);
*(b+5)=*(c+5);
*(b+6)=*(c+6);
printf("%d\n",a);
}

int main(){
char strA[50]="riaz";
char strB[50]="miraz";

changeString(strA,strB);

printf("string of A= %s  string of B= %s\n",strA,strB);



return 0;
}
