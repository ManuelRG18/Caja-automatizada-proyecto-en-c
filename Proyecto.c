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



int main (){

void crearusu();







}

void crearusu(){
 int i;
 usuarios user [2];
  char userName[20], password[20]; // Variables temporales para guardar los datos
    FILE *userData; // Archivo donde se guardarán los datos de los usuarios
   // Solicita los datos a dos usuarios
    userData = fopen("userdata.txt","a");
    for (i = 0; i < 2; i++)
    {
        printf("Usuario %d\n", i + 1);
        printf("Nombre de usuario: ");
        scanf("%s", userName);
        printf("Contraseña: ");
        scanf("%s", password);
        // Guarda los datos de los usuarios en la estructura
        strcpy(user[i].usu, userName);
        strcpy(user[i].pass, password);
    }
 
    // Abre el archivo donde se guardarán los datos y lo escribe
    userData = fopen("userData.txt", "w");
    for (i = 0; i < 2; i++)
    {
        fprintf(userData, "%s %s\n", user[i].usu, user[i].pass);
    }
    fclose(userData);
 
    // Lee el archivo y valida los datos de los usuarios
    userData = fopen("userData.txt", "r");
    for (i = 0; i < 2; i++)
    {
        fscanf(userData, "%s %s\n", userName, password);
        if (strcmp(userName, user[i].usu) == 0 && strcmp(password, user[i].pass) == 0)
            printf("Los datos del usuario %d son correctos\n", i + 1);
        else
            printf("Los datos del usuario %d son incorrectos\n", i + 1);
    }
    fclose(userData);
    
}





