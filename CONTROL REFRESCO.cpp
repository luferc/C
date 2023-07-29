#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    // DECLARACION DE VARIABLES.
    float refLata=0,refBot=0,aguaGd=0,aguaCh=0,total=0;
    int a=0,b=0,c=0,d=0,op;
    char nombre[50];
    char fecha[50];
    char turno[20];
    // DATOS DE ENTRADA.
    printf ("\n\n\n\n");
     printf ("\t\t\t °°°°°°°°°°°°°°°°°°°°°°\n");
     printf ("\t\t\t °                    °\n");
     printf ("\t\t\t °     CALCULADOR     °\n");
     printf ("\t\t\t °         DE         °\n");
     printf ("\t\t\t °       BEBIDAS      °\n");
     printf ("\t\t\t °                    °\n");
     printf ("\t\t\t °°°°°°°°°°°°°°°°°°°°°°\n");
     printf ("\n\n\n\n");
     printf ("\t\t\t NOMBRE: ");
     scanf ("%s",&nombre);
     printf("\t\t\t TURNO:  ");
     scanf("%s",&turno);
     printf ("\t\t\t FECHA:  ");
     scanf("%s",&fecha);
     system("PAUSE");
     system("cls");
    while ( op!=6 )
    {
          printf("\n\n\n\n");
          printf("\t\t °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
          printf("\t\t °                             °\n");
          printf("\t\t °   (1)...REFRESCO LATA       °\n");
          printf("\t\t °   (2)...REFRESCO BOTELLA    °\n");
          printf("\t\t °   (3)...AGUA GRANDE         °\n");
          printf("\t\t °   (4)...AGUA CHICA          °\n");
          printf("\t\t °   (5)...VENTAS              °\n");
          printf("\t\t °   (6)...SALIR               °\n");
          printf("\t\t °                             °\n");
          printf("\t\t °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
          printf("\n\n\t\t SELECCIONE:  ");
          scanf("%i",&op);
          system("cls");
          switch(op)
          {//INICIO SWITCH.
          case 1:// REFRESCO LATA.
          printf("\n\n\n\n");
          printf("\n\t\t REFRESCO DE LATA \n");
          printf("\n\t\t VENDIDOS --> ");
          scanf("%i",&a);
          printf("\n\t\t CALCULAR --> %i X $8.00 \n",a);
          refLata = a * 8;
          printf("\n\t\t TOTAL = $%f \n",refLata);
          break;
          case 2:// REFRESCO BOTELLA.
          printf("\n\n\n\n");
          printf("\n\t\t REFRESCO DE BOTELLA \n");
          printf("\n\t\t VENDIDOS --> ");
          scanf("%i",&b);
          printf("\n\t\t CALCULAR --> %i X $7.00 \n",b);
          refBot = b * 7;
          printf("\n\t\t TOTAL = $%f \n",refBot);
          break;
          case 3:// AGUA GRANDE.
          printf("\n\n\n\n");
          printf("\n\t\t AGUA GRANDE \n");
          printf("\n\t\t VENDIDOS --> ");
          scanf("%i",&c);
          printf("\n\t\t CALCULAR --> %i X $13.00 \n",c);
          aguaGd = c * 13;
          printf("\n\t\t TOTAL = $%f \n",aguaGd);
          break;
          case 4:// AGUA CHICA.
          printf("\n\n\n\n");
          printf("\n\t\t AGUA CHICA \n");
          printf("\n\t\t VENDIDOS --> ");
          scanf("%i",&d);
          printf("\n\t\t CALCULAR --> %i X $7.00 \n",d);
          aguaCh = d * 7;
          printf("\n\t\t TOTAL = $%f \n",aguaCh);
          break;
          case 5:// VENTAS.
          total = refLata + refBot + aguaGd + aguaCh;
          printf("\n\n\n\n");
          printf("\n\t\t PRODUCTO             VENDIDOS    SUBTOTAL \n");
          printf("\n\t\t REFRESCO LATA    --> PIEZAS %i  =  $%f",a,refLata);
          printf("\n\t\t REFRESCO BOTELLA --> PIEZAS %i  =  $%f",b,refBot);
          printf("\n\t\t AGUA GRANDE      --> PIEZAS %i  =  $%f",c,aguaGd);
          printf("\n\t\t AGUA CHICA       --> PIEZAS %i  =  $%f",d,aguaCh);
          printf("\n\n\t\t VENTA TOTAL = $%f \n\n",total);
          printf("\n\n\t\t FECHA:  %s \n",fecha);
          printf("\t\t TURNO:  %s \n",turno);
          printf("\t\t NOMBRE: %s \n",nombre);

          break;
          case 6:// SALIR.
          printf("\n\n\n");
          printf("\t °°°°°°°°°°°\n");
          printf("\t °   FIN   °\n");
          printf("\t °°°°°°°°°°°\n");
          printf("\n\n\t BY:...%s...!\n\n",nombre);
          break;
          default://default.
               printf("\n\n\n\n");
               printf("\t °°°°°°°°°°°°°°°°°°°°°°°°°°\n");
               printf("\t °        x       x       °\n");
               printf("\t °          x   x         °\n");
               printf("\t °            x           °\n");
               printf("\t °          x   x         °\n");
               printf("\t °        x       x       °\n");
               printf("\t °°°°°°°°°°°°°°°°°°°°°°°°°°\n");
               printf("\n\n");
               printf("\t\t °°°°°°°°°°°°°°°°°°°°°°°°°°\n");
               printf("\t\t °        x       x       °\n");
               printf("\t\t °          x   x         °\n");
               printf("\t\t °            x           °\n");
               printf("\t\t °          x   x         °\n");
               printf("\t\t °        x       x       °\n");
               printf("\t\t °°°°°°°°°°°°°°°°°°°°°°°°°°\n");
               printf("\n\n");
               printf("\t\t\t °°°°°°°°°°°°°°°°°°°°°\n");
               printf("\t\t\t ° OPCION INCORRECTA °\n");
               printf("\t\t\t °      ELIJA        °\n");
               printf("\t\t\t °       DEL         °\n");
               printf("\t\t\t °       1-6         °\n");
               printf("\t\t\t °°°°°°°°°°°°°°°°°°°°°\n");
                                                                        
               }//Fin de Switch.        
    system("PAUSE");
    system("cls");
    } // Fin de While.
    return EXIT_SUCCESS;
}
