#include<stdio.h>
int main(){

int room,stdnts, space;
scanf("%d",&room);

int total = 0;
for(int i=0; i<room; i++){
scanf("%d %d",&stdnts,&space);
if(stdnts<=space && space-stdnts>=2){
    total+=1;
}

}
printf("%d",total);

return 0;
}
