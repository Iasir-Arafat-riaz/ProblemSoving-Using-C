#include<stdio.h>
#include<math.h>
int main(){

int totalGame,bjorn=0,king=0;
scanf("%d",&totalGame);

char res;
for(int i=0; i<totalGame; i++){

scanf(" %c",&res);

    if(res=='A'){
        bjorn+=1;
    }
    if(res=='D'){
        king+=1;
    }

}
if(bjorn>king){
    printf("Anton");
}
if(bjorn<king){
    printf("Danik");
}
if(bjorn==king){
    printf("Friendship");
}




return 0;
}
