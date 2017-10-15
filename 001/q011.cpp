#include<stdio.h>
#include<math.h>

int main()
{
    int h,r;
    double pi = 3.14159;
    scanf("%d %d", &h, &r);
    printf("%d",(int)ceil(20000/(pi*r*r*h)));
}