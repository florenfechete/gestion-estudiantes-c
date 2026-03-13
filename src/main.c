#include <stdio.h>
//#include <ctype.h>



/* Programa para gestionar información de estudiantes */



int main() {
    int estudiantes[100];
    int opcion;


    printf("------------------------Bienvenido al Sistema de Gestion de Estudiantes------------------------\n\n\n");


    do {
        printf("`````` Menu Principal ``````\n"
                "1 - Anadir estudiante \n"
                "2 - Lista de estudiantes\n"
                "3 - Buscar estudiante\n"
                "4 - Eliminar estudiante\n"
                "5 - Mostrar estadisticas\n"
                "6 - Salir\n");

        // Validación de entrada con getchar + limpieza de buffer
        do {
            printf("\nTeclee una opcion: ");
            opcion = getchar();
            if (opcion != '\n') {
                while (getchar() != '\n');
            }
        } while (opcion == '\n');

    } while (opcion <= '0' || opcion > '6' );


    switch (opcion) {
        case '1':
            printf("Aqui introduciremos datos");
            break;
        case '2':
            printf("Aqui es la lista de estudiantes");
            break;
        case '3':
            printf("Aqui buscamos estudiantes");
            break;
        case '4':
            printf("Aqui eliminamos estudiantes");
            break;
        case '5':
            printf("Aqui mostramos estadisticas");
            break;
        case '6':
            printf("Salimos del programa");
            break;
        default: // Imposible llegar aquí
            break;
    }
    return 0;
}