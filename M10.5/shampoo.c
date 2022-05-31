#include<stdio.h>
int main(){

int v,f,m,t;

scanf("%d%d%d%d",&v,&f,&m,&t);



for(int i=0; v>=0; i++){
      if(v>=f){
            v-=f;
        }
        else{
                printf("F");
                break;
        }

         if(v>=m){
            v-=m;
        }
        else{
                printf("M");
        break;
        }
         if(v>=t){
            v-=t;
        }
        else{printf("T");
        break;
        }

}




return 0;
}
