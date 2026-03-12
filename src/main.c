#include <stdio.h>


/* Programa para gestionar información de estudiantes */



int main() {

    int estudiantes[100];
    int opc;


    printf("------------------------Bienvenido al Sistema de Gestion de Estudiantes------------------------\n\n\n");

    do{
    printf("`````` Menu Principal ``````\n"
            "1 - Anadir estudiante \n"
            "2 - Lista de estudiantes\n"
            "3 - Buscar estudiante\n"
            "4 - Eliminar estudiante\n"
            "5 - Mostrar estadisticas\n"
            "6 - Salir\n");

        printf("\nTeclee opcion: ");
        scanf("%d",&opc); // tocar

    } while (opc <= 0 || opc > 6 );

        switch (opc) {
            case 1:
                printf("Aqui introduciremos datos");
                break;
            case 2:
                printf("Aqui es la lista de estudiantes");
                break;
            case 3:
                printf("Aqui buscamos estudiantes");
                break;
            case 4:
                printf("Aqui eliminamos estudiantes");
                break;
            case 5:
                printf("Aqui mostramos estadisticas");
                break;
            case 6:
                printf("Salimos del programa");
                break;
            default: ;
        }
        return 0;
}