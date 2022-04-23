#include<stdio.h>
int main(){
char t;

scanf("%c",&t);

if(t=='a'||t=='e'||t=='i'||t=='o'||t=='u'){
    printf("vowel");
}
else{
    printf("consonant");
}
return 0;
}
