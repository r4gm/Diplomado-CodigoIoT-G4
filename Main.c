#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 20

// LISTA POR ORDEN ALFABETICO Y POR LONGITUD
int main()
{
    int opc;
    char nombre[ 60 ][ T ];
    char aux[ T ];
    int i, j, k, l = 0;
    
    printf(" |||  PROGRAMA QUE MUESTRA EN ORDEN LAS PALABRAS INGRESADAS  |||\n");
    printf("\tCuando termine de ingresar las palabras escriba: # \n\n");
    do
    {
        printf("  Introduce una palabra: ");
        gets(nombre[ l ]);
        l ++;
    }
    while ( strcmp( nombre[ l-1 ],"#" ) != 0 );

    do
    {
        printf( "\n\n       ORDENAR LA LISTA POR:");
        printf( "\n   1. Orden alfabetico");
        printf( "\n   2. Longitud de la palabra");
        printf( "\n   3. Salir" );
        printf( "\n\n   Elija una opcion (1-3): ");
        scanf( "%d", &opc );

        switch ( opc )
        {
            case 1: 
                     for( i = 0; i < l-1; i ++)
                     {
                         k = i;
                         strcpy( aux, nombre[ i ] );
                         for( j = i+1 ; j < l; j++ )
                        {
                         
                             if( strcmp( nombre[ j ], aux ) < 0 )
                             {
                                 k = j;
                                 strcpy( aux, nombre[ j ]);
                             }
                        }
                     
                         strcpy( nombre[ k ], nombre[ i ] );
                         strcpy( nombre[ i ], aux );
                     }
                     printf("\n\n ||>  La lista ordenada por orden ALFABETICO es: ");
                     for( i = 0; i < l; i++ )
                     {
                         printf(" %s ", nombre[ i ] ) ;
                         printf(" \n ");
                     }
                    break;

            case 2: 
                    for( i = 0; i < l-1; i ++)
                     {
                         k = i;
                         strcpy( aux, nombre[ i ] );
                         for( j = i+1 ; j < l; j++ )
                        {
                             if(strlen(nombre[ j ]) < strlen(aux) )
                             {
                                 k = j;
                                 strcpy( aux, nombre[ j ]);
                             }
                        }
                     
                         strcpy( nombre[ k ], nombre[ i ] );
                         strcpy( nombre[ i ], aux );
                     }
                     
                     printf("\n\n ||>  La lista ordenada por orden de LONGITUD es: ");
                     for( i = 0; i < l; i++ )
                     {
                         printf(" %s ", nombre[ i ] ) ;
                         printf(" \n ");
                     }
                    break;
         }

    } while ( opc != 3 );

    return 0;
}
