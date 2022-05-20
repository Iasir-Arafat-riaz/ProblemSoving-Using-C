/*In a grid there are HH rows and WW columns of cells. All cells are white initially.

Alex picks some hh rows and ww columns. Then all cells that are in these rows or columns are colored black.

How many cells will remain white?

input 3 2      output:1
      2 1
*/

#include<stdio.h>
int main(){
int H,W,h,w;
scanf("%d%d%d%d",&H,&W,&h,&w);
int result = (H-h)*(W-w);
printf("%d\n",result);
return 0;

}
