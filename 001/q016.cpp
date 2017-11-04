#include<stdio.h>
#include<math.h>

int main()
{
    int x,y,r;
    char z;
    scanf("%d %d %c", &x, &y, &z);
    switch(z)
    {
        case '+':
        {
           r = x + y;
           break; 
        }
        case '-':
        {
            r = x - y;
            break;
        }
        case '*':
        {
            r = x * y;
            break;
        }
        case '/':
        {
            if(y == 0)
            {
                printf("Divided by zero!");
                return 0;
            }
            r = x / y;
            break;
        }
        default:
            printf("Invalid operator!");
            return 0;        
    }
    printf("%d",r);        
    
}