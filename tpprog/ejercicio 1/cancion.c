#include <stdio.h>
#include <ctype.h>



int esVocal(char cancion);
void mostrarCancion(char cancion, char vocal);

int main()
{
    char cancion,vocal;
    int contV,contM;
    
    puts("ingrese la vocal de cambio: ");
    scanf("%c", &vocal);
    fflush(stdin);
    puts("ingrese la estrofa de su cancion terminada en un punto: ");
    scanf("%c", &cancion);

    while (cancion != '.')
    {
        
        mostrarCancion(cancion,vocal);
        scanf("%c", &cancion);
    }



    return 0;
}

int esVocal(char cancion){

    
    switch (cancion)
            {
            case 'a':
                 return 1;
                break;
            case 'e':
                return 1;
                break;
            case 'i':
               return 1;
                break;
            case 'o':
               return 1;
                break;
            case 'u':
                return 1;
                break;
            default:
                return 0;
                break;
            }
            
}
void mostrarCancion(char cancion, char vocal){
    if (esVocal(cancion) == 1)
    {
        cancion = vocal;

        
    } 
    
  

  printf("%c", cancion);
}