// calculate area of square rectangle and circle using function
#include<stdio.h>
#include<math.h>
float sq( float a);
float rec(float l, float b);
float c( float r);
int main (){
    float a, l, b, r;
    printf(" enter length of side of square \n");
    scanf("%f",&a);
    printf(" enter l and b of rectangle \n");
    scanf("%f%f",&l,&b);
    printf(" enter radius \n");
    scanf("%f",&r);
    sq(a);
    rec(l,b);
    c(r);
    return 0;
}
float sq( float a){ printf(" %f \n",a*a);}
float rec( float l, float b){ printf(" %f \n", l*b);}
float c( float r){ printf("%f \n", 3.14*r*r);}