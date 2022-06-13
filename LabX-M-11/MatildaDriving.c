#include<stdio.h>
int main()
{

    int x,y,firstCount=2,secondCount=4;
    scanf("%d%d",&x,&y);

//    z=y;
    for(int i=1; i<=x; i++)
    {


        if(x>=3 && x<=50 && y >=3 && y<=50)
        {
            if(i%2!=0)
            {
                for(int k=0; k<y; k++)
                {
                    printf("#");

                }
            }
            else if(i%2==0)
            {
                if(i==firstCount)
                {
                    for(int j=1; j<=y; j++)
                    {
                        if(j%y==0)
                        {
                            printf("#");
                            firstCount+=4;
                        }
                        else
                        {
                            printf(".");
                        }
                    }
                }
                else if(i==secondCount)
                {
                    for(int j=1; j<=y; j++)
                    {
                        if(j==1)
                        {
                            printf("#");
                            secondCount+=4;
                        }
                        else
                        {
                            printf(".");
                        }
                    }
                }
            }

            printf("\n");
        }


    }

    return 0;
}
