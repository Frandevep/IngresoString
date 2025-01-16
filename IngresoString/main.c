#include <stdio.h>


int main()
{
    char string[5];//creamos la variable char con los corchetes y los espacios necesarios para crear el string
    printf("Escriba su palabra:");
    scanf("%s",&string);//Ingresamos el string
    printf("Su palabra escrita fue:%s",string); //para la impresion usamos %s

    return 0;
}
