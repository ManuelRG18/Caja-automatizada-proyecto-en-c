#include <stdio.h>

#include <string.h>

#include <stdlib.h>

#include <ctype.h>


void login ();
void crearusu();

typedef struct usuarios
{
 char usu [50];
 char pass [50];
}usuarios;



int main (void){
system ("cls");
int opc;
char temp [10];
fgets(temp,10,stdin);
opc = atoi (temp);
do
{
   printf("bienvenido al sistema");
 printf("\n\t---------------------------------------------");
        printf("\n\n\t\t1.-Crear usuario");
        printf("\n\t\t2.-login admin");
        printf("\n\t\t3.-login cliente");
		printf("\n\t\t4.-Salir");
        printf("\n\t---------------------------------------------");
        switch (opc)
        {
        case 1:{


         break;
        } 
        case 2:{

         break;   
        }
        case 3:{


         break;
        }

        
        default:
            
            printf("opcion incorrecta \n");

            break;

        }

} while (opc != 4);

return 0;
}









void crearusu(){
 
    
}





