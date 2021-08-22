/* Avtividad: Elaborar una aplicación de línea de comandos en C que luego de introducir un
              valor numérico entero positivo pueda mostrar su tabla de multiplicar.      */ 

#include <stdio.h>
#include <conio.h>

int main (){

    int r, tabla, operacion;
    char seguir;  


     printf("\n\t\tEvaluacion  Sumativa #8 (Tabla de Multiplicar)\n");
     printf("\n   Introduzca un numero entero: " );
     scanf( "%d", &tabla); 
     for( r = 1; r <= 10; r++ )
     { 
         operacion = r * tabla; 
         printf( " %d * %d = %d \n", tabla, r, operacion ); 

     }
        printf( "\n\n   %cDesea ver otra tabla (Si/No)?: " );
        fflush( stdin );
        scanf("%c", &seguir );
     
        while ( seguir != 'n' );

     return 0; 

}