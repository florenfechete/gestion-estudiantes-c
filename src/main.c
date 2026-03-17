#include <stdio.h>
#include "estudiante.h"
/* Programa para gestionar información de estudiantes */
void anadirEstudiante(Estudiante lista[],int *numEstudiantes, Estudiante nuevo);
int main() {
    int opcion;
    Estudiante lista[100];
    int numEstudiantes=0;


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
        } while (opcion == '\n' || opcion <= '0' || opcion >='7'); // ¿Valores ASCII de \n y 0?

        switch (opcion) {
            case '1':{
                Estudiante nuevo;
                printf("Introduce los datos del estudiante:\n");

                printf("Nombre: ");
                scanf("%s",nuevo.Nombre); // El array va por referencia y detecta que es cadena de caracteres

                printf("\nApellidos: ");
                scanf("%s",nuevo.Apellidos);

                printf("\nEdad: ");
                scanf("%d",&nuevo.Edad);

                printf("\nCurso(1-4): ");
                scanf("%d",&nuevo.actual);

                for (int i=0; i<4; i++) { // Siempre pedimos 5 notas
                    printf("\nNotas: ");
                    scanf("%f",&nuevo.Notas[i]);
                }
                break;
            }
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

    } while (opcion == '6' );

    return 0;
}
void anadirEstudiante(Estudiante lista[],int *numEstudiantes,Estudiante nuevo) {
}