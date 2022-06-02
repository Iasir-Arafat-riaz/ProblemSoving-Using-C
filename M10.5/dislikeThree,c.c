#include<stdio.h>
#include<math.h>

int main(){

int in,num,j;
scanf("%d",&in);

for(int i=0;i<in; i++){
        scanf("%d",&num);
int count=0;
//printf("before %d\n",j);
for(j=0; count<num;j++){
    if(j%3==0||j%10==3){
        continue;
    }
    else{
        count ++;
    }
//printf("middle %d\n",j);
}
printf("%d\n",j-1);

}


return 0;
}
