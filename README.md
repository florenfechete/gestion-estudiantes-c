# Sistema de Gestión de Estudiantes en C

Proyecto de prácticas para el examen de Fundamentos de Programación en C.

## Funcionalidades
- [ X ] Menú interactivo por consola
- [ ] Añadir, listar y buscar estudiantes
- [ ] Gestión de notas por asignatura
- [ ] Guardado y carga desde fichero

## Estructura del proyecto
```
gestion-estudiantes-c/
├── src/
│   ├── main.c
│   ├── estudiante.h
│   └── estudiante.c
├── datos/
│   └── estudiantes.dat
└── README.md
```
## Progreso

### Sesión 17/03/2026 - Fase 2 en progreso
**Hecho:**
* Repasado typedef y enum: cómo funcionan, valores por defecto desde 0 y asignación explícita (PRIMERO=1)
* Razonado paso a paso el paso de parámetros: lista[] por puntero implícito, numEstudiantes por puntero explícito, nuevo por valor
* Firma definitiva: void añadirEstudiante(Estudiante lista[], int *numEstudiantes, Estudiante nuevo)
* case '1' implementado: recogida de datos campo a campo con printf/scanf, notas con bucle for, Curso como %d con enum desde 1
* Corregido error de declaración en case añadiendo llaves {}

**Pendiente:**
* Validación con do while para Curso (1-4) con limpieza de buffer
* Validación de Edad y Notas
* Cuerpo de añadirEstudiante()
* Implementar mostrarEstudiantes()

## Compilación
```bash
gcc src/main.c src/estudiante.c -o gestion
```

## Temas practicados
Temas 1-8 de Fundamentos de Programación en C