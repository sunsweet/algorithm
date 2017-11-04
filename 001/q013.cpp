#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c,x1,x2;
    scanf("%lf %lf %lf", &a, &b, &c );
    //实部 = -b / (2*a), 虚部 = sqrt(4*a*c-b*b) / (2*a)
    double realPart,imaginaryPart;
    realPart = b/(2*a)>0?-b/(2*a):0;
    imaginaryPart = sqrt(4*a*c-b*b) / (2*a);
    if(b*b == 4 * a * c)
    {
        printf("x1=x2=%.5lf",realPart);        
    }else if(b*b > 4 * a * c)
    {
        printf("x1=%.5lf;x2=%.5lf",(-b + sqrt(b*b-4*a*c))/(2*a),(-b - sqrt(b*b-4*a*c))/(2*a));

    }else{
        //x1=-1.00000+2.64575i;x2=-1.00000-2.64575i
        printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi",realPart,imaginaryPart,realPart,imaginaryPart);
    }
    
}