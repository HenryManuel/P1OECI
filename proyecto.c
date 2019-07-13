#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(int argc, char *argv[]){
    FILE * file;
    char * nombrefile;

    //printf("Argumento 1:%s\n",argv[1]);
    nombrefile = argv[1];
    file = fopen(nombrefile,"r+");
    if(file == NULL ) {
     printf("No fue posible abrir el archivo\n");
     return -1;
   }
}
