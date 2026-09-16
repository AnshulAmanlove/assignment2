# include <stdio.h>
#include <math.h>
int main()
{  double a;
    double b; 
    double c;
    
    double d;
    double s1, s2;
    printf("enter the  a b and c of the standard quadratic equation");
    scanf("%lf %lf %lf", &a,&b,&c);
    double D = ((b * b) - (4.0 * a * c));

    if ((b*b)-(4*a*c) >= 0)
    {     d = sqrt(b * b - 4.0 * a * c);

        s1=(-b+d)/(2.0*a);
        s2=(-b-d)/(2.0*a);
        printf("the roots of the equation are %lf %lf \n",s1,s2);

    }
    else if (D<0)
    {
        printf("the roots of the quadratic equation are imaginary");
    }


    return 0;
}
