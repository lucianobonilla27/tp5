#include <stdio.h>

int anunciar(float punt1, float punt2, float punt3);

int main()
{
    float punt1,punt2,punt3, nota;
    puts("ingrese la nota del primer punto: ");
    scanf("%f", punt1);
    puts("ingrese la nota del segundo punto: ");
    scanf("%f", punt2);
    puts("ingrese la nota del tercer punto: ");
    scanf("%f", punt3);
   nota = punt1+ punt2 +punt3;
    
    
    
    return 0;
}
int anunciar(float punt1, float punt2, float punt3){
    int aux;
    if (punt1 >= punt1*0.4)
    {
        aux++;
    }
    if (punt2 >= punt2*0.3)
    {
        aux++;
    }
}