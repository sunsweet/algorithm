#include<stdio.h>
#include<math.h>

int main()
{
    int n,x,y;
    scanf("%d %d %d", &n, &x, &y);
    if(x == 0)
    {
        printf("%d",n); 
        return 0;       
    }
    if(n-(int)ceil((double)y/x)<=0)
    {
        printf("%d",0);
    }else{
        printf("%d",n-(int)ceil((double)y/x));        
    }
}