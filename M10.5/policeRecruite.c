#include<stdio.h>

int main(){

int event, crime =0, police=0, inp;
scanf("%d",&event);

for (int i=0; i<event ; i++){
    scanf("%d",&inp);

    if(inp== -1){
        if(police ==0){
            crime ++;
        }
        else{

            police--;
        }

    }
    if(inp >0 && inp<=10){
        police +=inp;
    }


}
printf("%d",crime);



return 0;
}
