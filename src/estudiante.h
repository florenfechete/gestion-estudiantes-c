#ifndef estudiante_h
#define estudiante_h

typedef enum {
    PRIMERO=1, SEGUNDO, TERCERO, CUARTO
}Curso;

typedef struct{
    char Nombre[50];
    char Apellidos[50];
    int Edad;
    Curso actual;
    float Notas[5];
}Estudiante;

#endif