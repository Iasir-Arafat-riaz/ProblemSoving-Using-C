#include<stdio.h>
int main(){
    #include <stdio.h>


int main ()
{
   int a, b, c, d, e, f, x;
//input to all variables;
    scanf("%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &x);
    int t = 0;
    int aoki = 0;
    int y = x;
    while(x > 0)
    {
        if(x >= a)
        {
            t+=a;
            x-= a+c;
        }
        else if(x < a)
        {
            t+=x;
            x-=a;
        }
    }
    while(y > 0)
    {
        if(y >= d)
        {
            aoki+=d;
            y-= d+f;
        }
        else if(y < d)
        {
            aoki+=y;
            y-=d;
        }
    }
    int TMeter = t*b;
    int AMeter = aoki * e;
  //  TMeter > AMeter ? printf("Takahashi") : TMeter < AMeter ? printf("Aoki") : printf("Draw");
if(TMeter > AMeter){
printf("Takahashi");
}
 else if(TMeter < AMeter){
printf("Aoki");
}
 else if(TMeter == AMeter){
printf("Draw");
}

    return 0;
}

//int takashiRunningTime, takashiDistance, takashiRest, aokiRunningTime, aokiDistance,aokiRest,totalTime;
//scanf("%d%d%d%d%d%d%d",&takashiRunningTime, &takashiDistance, &takashiRest, &aokiRunningTime, &aokiDistance, &aokiRest,&totalTime);
//
//int takshiTotalDistance=0,aokiTotalDistance=0;
//
//if(takashiRunningTime>0&&takashiRunningTime<101 && takashiDistance>0 && takashiDistance<101 && takashiRest>0 && takashiRest<101 && aokiRunningTime>0 && aokiRunningTime<101 && aokiDistance>0 && aokiDistance<101 && aokiRest>0 && aokiRest<101 && totalTime>0 && totalTime<101 ){
//
//    //3 1 4 1 5 9 2
//    if(takashiRunningTime<totalTime){
//
////takashi
//if(takashiRunningTime+takashiRest<totalTime){
//        int a,b;
//     a = takashiRunningTime+takashiRest;
//    b = totalTime - a;
//    takshiTotalDistance= takashiRunningTime + b;
//    takshiTotalDistance*=takashiDistance;
//
//}
//else{
//    takshiTotalDistance=takashiRunningTime*takashiDistance;
//}
//}
//else if(takashiRunningTime>=totalTime){
//
//takshiTotalDistance=totalTime*takashiDistance;
//}
////Aoki
//if(aokiRunningTime <totalTime){
//
//if(aokiRunningTime+aokiRest<totalTime){
//int c,d;
//    c= aokiRunningTime+aokiRest;
//    d= totalTime-c;
//aokiTotalDistance=aokiRunningTime+d;
//aokiTotalDistance*=aokiDistance;
//}
//else{
//aokiTotalDistance=aokiRunningTime*aokiDistance;
//}
//}
//else if(aokiRunningTime>=totalTime){
//    aokiTotalDistance=totalTime*aokiDistance;
//}
//if(takshiTotalDistance>aokiTotalDistance){
//    printf("Takahashi");
//}
//if(takshiTotalDistance<aokiTotalDistance){
//    printf("Aoki");
//}
//if(takshiTotalDistance==aokiTotalDistance){
//    printf("Draw");
//}
//
//}

return 0;
}
