#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],arrRev[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=n-1,j=0; i>=0,j<n; i--,j++){
        printf("%d ",arrRev[i]=arr[i]);
    }


return 0;
}
