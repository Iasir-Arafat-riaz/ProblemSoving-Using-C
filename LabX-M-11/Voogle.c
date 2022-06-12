#include<stdio.h>
int main()
{

    int go,come, stayOrNot;
    scanf("%d%d%d",&go,&come,&stayOrNot);
    int x=0;
    float past;
    if(go<=23 && come <=23 && stayOrNot<=23 && go>=0 && come>=0 && stayOrNot>=0  )
    {
        past= stayOrNot*60+30;
        past /=60;

        if(go<come)
        {
            for(float i=(float)go ; i<=come; i+=.5)
            {
                if(past == i)
                {
                    x=2;
                    break;
                }
                else
                {
                    x=1;
                }
            }
        }
        else if(go>come)
        {
            for (float i=(float)go; i<24; i+=.5)
            {
                if(past == i)
                {

                    x=2;
                    break;
                }
                else
                {
                    x=1;
                }

            }
            if(x!=2)
            {
                for(float i=(float)go; i<=come; i+=.5)
                {
                    if(past == i)
                    {

                        x=2;
                        break;
                    }
                    else
                    {
                        x=1;
                    }
                }
            }
        }



    }

    if(x==2)
    {
        printf("Yes");
    }
    else if(x==1)
    {
        printf("No");
    }
//printf("%.2f",past);

    return 0;
}
