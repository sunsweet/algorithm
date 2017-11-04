#include<stdio.h>
#include<math.h>

int main()
{
    int x,result = 1;
    unsigned n;
    scanf("%d %d",&x,&n);
    int i = 0;
    for(;i<n;i++)
    {
        result *= x;
    }
    printf("%d",result);
    
}