#include<stdio.h>
#include<math.h>

int main()
{
    int n,j,y,t,jSum,ySum,tSum,allSum;
    jSum = ySum = tSum = allSum = 0;
    scanf("%d",&n);
    int i = 0;
    for(;i<n;i++)
    {
        scanf("%d %d %d",&j,&y,&t);
        jSum += j;
        ySum += y;
        tSum += t;
    }

    printf("%d %d %d %d",jSum, ySum, tSum,jSum + ySum + tSum);
    
}