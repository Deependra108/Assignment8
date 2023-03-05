#include<stdio.h>
int main()
{
    int i,j;
    char name[20]="MYSIRG";
    for(i=1;i<=13;i++)
    {
        for(j=1;j<=19;j++)
        {
            if(i<=3)
            {
                if((j>=4-i&&j<=5+i) || (j>=14-i && j<=16+i))
                printf("*");
            else
                printf(" ");
            }
            if(i>=4)
            {
                if(i==4)
                {
                    if(j>=7&&j<=12)
                        {
                            printf("%s",name);
                            j=j+5;
                        }
                    else
                        printf("*");
                }
                else
                {
                    if(j>=i-3 && j<=23-i)
                        printf("*");
                    else
                        printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}

