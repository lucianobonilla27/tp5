#include <stdio.h>
#include <math.h>

void ValoresSeno(int angulo);
int main()
{
     ValoresSeno(0);
    return 0;
}

void ValoresSeno(int angulo){
    int i;
    float radian;
    
    for (int i = 0; i <= 360; i+= 30)
    {
       radian = (i* M_PI)/180;
       printf("el seno en radianes de %f es %f \n",radian,sin(radian) );

    }
    

}