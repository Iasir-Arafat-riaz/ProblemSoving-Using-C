#include<stdio.h>
int main(){

int marks;
scanf("%d",&marks);


int higher;
        if(marks<40&&marks>=0){
            higher = 40-marks;
            printf("%d",higher);
        }
        if(marks>=40&&marks<70){
            higher=70-marks;
            printf("%d",higher);
        }
        if(marks>=70&&marks<90){
            higher=90-marks;
            printf("%d",higher);
        }
        if(marks>90&&marks<=100){
            printf("expert");
        }



return 0;
}
