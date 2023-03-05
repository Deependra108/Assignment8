#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        int k=1;
        for(j=1;j<=7;j++)
        {
            if(j>=5-i && j<=3+i)
            {
                if(j<4)
                {
                    printf("%d",k);
                    k++;

                }
                else
                {
                    printf("%d",k);
                    k--;
                }
            }
                else
                    printf(" ");
            }
                printf("\n");
        }
    return 0;
}
