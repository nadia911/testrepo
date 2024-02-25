#include<stdio.h>
#include<math.h>
int main() {

    int a,b,c,D;
    float x,y;

    printf("enter coefficients of x2 ,x and constant\n");
    scanf("%d %d %d",&a,&b,&c);

    D = b*b - 4*a*c;

    if(D>0){
    printf("roots are real and distinct\n");
     x = (-b + sqrt(D))/2*a;
     y = (-b - sqrt(D))/2*a;
     printf(" roots are %f and %f",x,y);

    }

    if(D<0)
    {
        printf("roots are imaginary\n");
    }

    if(D==0)
    {
        printf("roots are equal\n");
        x = -b/(2.0*a);
        printf("root is %f",x);
    }
    return 0 ;
    
}