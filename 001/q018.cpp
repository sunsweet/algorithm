#include<stdio.h>
#include<math.h>

int main()
{
    int n,min,max,tmp;
    scanf("%d",&n);
    scanf("%d",&min);
    max = min;
    int i = 1;
    for(;i<n;i++)
    {
        scanf("%d",&tmp);  
        if(tmp > max)
        {
            max = tmp;
        }
        if(tmp < min)
        {
            min = tmp;
        }    
    }
    printf("%d", max-min);
}