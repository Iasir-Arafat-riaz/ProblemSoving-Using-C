#include<stdio.h>
#include<string.h>
int main(){

char str[100]={0};
int num[10]={0};
scanf("%s",&str);
for(int i=0; i<strlen(str);i++){
    char val =str[i];
//    printf("%d",val-'0');
    if(val-'0'>=0 && val-'0'<=9){
        num[val-'0']++;
    }
}
for(int i=0; i<10; i++){
    printf("%d ",num[i]);
}

return 0;
}
