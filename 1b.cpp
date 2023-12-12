#include <stdio.h>
#include <string.h>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

int main() {

    struct Estudiante estudiante1;
    
    snprintf(estudiante1.nombre, sizeof(estudiante1.nombre), "%s", "Juan");
    estudiante1.edad = 20;
    estudiante1.promedio = 9.5;

