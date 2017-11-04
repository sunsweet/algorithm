#include<stdio.h>
#include<math.h>

int main()
{
    int n,tmp,sum = 0;
    double avg;
    scanf("%d",&n);
    int i = 0;
    for(;i<n;i++)
    {
        scanf("%d",&tmp);        
        sum += tmp;
    }
    avg = sum/(double)n;
    printf("%d %.5lf", sum, avg);
}