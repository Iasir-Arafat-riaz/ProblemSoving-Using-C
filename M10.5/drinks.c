#include<stdio.h>

int main(){

int oc,allBtl;
scanf("%d",&oc);

for(int i =0; i<oc; i++){
int fracOr;
scanf("%d",&fracOr);
allBtl+=fracOr;

}
float res = (float)allBtl/oc;
printf("%.12f",res);

return 0;
}
