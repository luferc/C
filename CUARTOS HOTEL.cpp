#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    /* Declaracion de Variables */
    int cuartos [60];
    int i,x;
    int opcion=1;
    /* Datos de Entrada */
    while ( opcion != 8 )
    {
          printf ("\n\t\t\t.........................\n");
          printf ("\n\t\t\t*  HOTEL VILLA DEL MAR  *\n");
          printf ("\n\t\t\t.........................\n");
          printf ("\n\n");
          printf ("\t...........................................................\n");
          printf ("\t.               MENU                                      .\n");
          printf ("\t...........................................................\n");
          printf ("\t.     (1)....PLANTA BAJA                                  .\n");
          printf ("\t.     (2)....PRIMER PISO                                  .\n");
          printf ("\t.     (3)....SEGUNDO PISO                                 .\n");
          printf ("\t.     (4)....TERCER PISO APARTAMENTOS Y MIRADOR SECCION B .\n");
          printf ("\t.     (5)....PRIMER PISO SECCION  A                       .\n");
          printf ("\t.     (6)....SEGUNDO PISO SECCION A                       .\n");
          printf ("\t.     (7)....TERCER PISO APARTAMENTOS SECCION A           .\n");
          printf ("\t.     (8)....SALIR                                        .\n");
          printf ("\t...........................................................\n");
          printf ("\n\n\t ELIJA UNA OPCION: ");
          scanf ("%i",&opcion);
          system("cls");
          switch (opcion)
          {
                 case 1:
                      printf ("\n\t SECCION B \n\t PLANTA BAJA \n\t INTERIORES \n");
                      for (i=1;i<=8;i++)
                      {
                          printf ("\n\t CUARTO[%i]:\n\t  1 CAMA MATRIMONIAL\n\t PARA: 1-2 PERSONAS.\n\t PRECIO: $305.00 (1) $360.00(2)\n",i);
                          cuartos [i] = x; // Incrementa los numeros de los cuartos.
                          }// Fin de for.
                          printf ("\n\t CUARTO[9]:\n\t  2 CAMAS MATRIMONIALES \n\t PARA: 4 PERSONAS.\n\t PRECIO: $470.00 (4) $400.00(2)\n");
                          printf ("\n\t CUARTO[10]:\n\t 3 CAMAS MATRIMONIALES \n\t PARA: 6 PERSONAS.\n\t PRECIO: $580.00 (6) $580.00(3)\n");
                          printf ("\n\t CUARTO[00]:\n\t POR FUERA \n\t 1 CAMA MATRIMONIAL\n\t PARA: 1-2 PERSONAS.\n\t PRECIO: $480.00(1) $530.00(2)\n");
                          break;
                          case 2:
                               printf ("\n\t SECCION B \n\t PRIMER PISO \n\t INTERIORES \n");
                               printf ("\n\t CUARTO[11]:\n\t  1 CAMA MATRIMONIAL \n\t   PARA: 1-2 PERSONAS.\n\t PRECIO: $305.00 (1) $360.00(2)\n");
                               printf ("\n\t CUARTO[12]:\n\t  1 CAMA MATRIMONIAL \n\t   PARA: 1-2 PERSONAS.\n\t PRECIO: $305.00 (1) $360.00(2)\n");
                               printf ("\n\t CUARTO[13]:\n\t  2 CAMAS INDIVIDUALES \n\t PARA:  2  PERSONAS.\n\t PRECIO: $380.00 (2)\n");
                               printf ("\n\t CUARTO[14]:\n\t  2 CAMAS MATRIMONIALES \n\tPARA:  4  PERSONAS.\n\t PRECIO: $470.00 (4) $400.00(2)\n");
                               printf ("\n\t CUARTO[15]:\n\t  1 CAMA MATRIMONIAL \n\t   PARA: 1-2 PERSONAS.\n\t PRECIO: $305.00 (1) $360.00(2)\n");
                               printf ("\n\t CUARTO[16]:\n\t  1 CAMA MATRIMONIAL Y 2 CAMAS INDIVIDUALES\n\t PARA: 4 PERSONAS.\n\t PRECIO: $650.00 (4)\n");
                               printf ("\n\t CUARTO[17]:\n\t  2 CAMAS MATRIMONIALES \n\t PARA: 4 PERSONAS.\n\t PRECIO: $470.00 (4) $400.00(2)\n");
                               printf ("\n\t CUARTO[18]:\n\t  1 CAMA MATRIMONIAL\n\t PARA: 1-2 PERSONAS.\n\t PRECIO: $305.00 (1) $360.00(2)\n");
                               printf ("\n\t CUARTO[19]:\n\t  2 CAMAS INDIVIDUALES \n\t PARA:  2  PERSONAS.\n\t PRECIO: $380.00 (2)\n");
                               printf ("\n\t CUARTO[20]:\n\t  2 CAMAS INDIVIDUALES \n\t PARA:  2  PERSONAS.\n\t PRECIO: $380.00 (2)\n");
                               printf ("\n\t CUARTO[21]:\n\t  2 CAMAS INDIVIDUALES \n\t PARA:  2  PERSONAS.\n\t PRECIO: $380.00 (2)\n");
                               printf ("\n\t CUARTO[22]:\n\t  2 CAMAS MATRIMONIALES \n\tPARA:  4  PERSONAS.\n\t PRECIO: $470.00 (4) $400.00(2)\n");
                               printf ("\n\t CUARTO[150]:\n\t SUITE \n\t 1 CAMA MATRIMONIAL\n\t PARA: 1-2 PERSONAS.\n\t PRECIO: $480.00(1) $530.00(2)\n");
                                 break;
                                 case 3:
                                       printf ("\n\t SECCION B \n\t SEGUNDO PISO \n\t INTERIORES \n");
                                       printf ("\n\t CUARTO[23]:\n\t  1 CAMA MATRIMONIAL\n\t PARA: 1-2 PERSONAS.\n\t PRECIO: $305.00 (1) $360.00(2)\n");
                                       printf ("\n\t CUARTO[24]:\n\t  1 CAMA MATRIMONIAL\n\t PARA: 1-2 PERSONAS.\n\t PRECIO: $305.00 (1) $360.00(2)\n");
                                       printf ("\n\t CUARTO[25]:\n\t  1 CAMA MATRIMONIAL\n\t PARA: 1-2 PERSONAS.\n\t PRECIO: $305.00 (1) $360.00(2)\n");
                                       printf ("\n\t CUARTO[26]:\n\t  2 CAMAS MATRIMONIALES \n\tPARA:  4  PERSONAS.\n\t PRECIO: $470.00 (4) $400.00(2)\n");
                                       printf ("\n\t CUARTO[27]:\n\t  1 CAMA MATRIMONIAL\n\t PARA: 1-2 PERSONAS.\n\t PRECIO: $305.00 (1) $360.00(2)\n");
                                       printf ("\n\t CUARTO[28]:\n\t  1 CAMA MATRIMONIAL\n\t PARA: 1-2 PERSONAS.\n\t PRECIO: $305.00 (1) $360.00(2)\n");
                                       printf ("\n\t CUARTO[29]:\n\t  1 CAMA MATRIMONIAL\n\t PARA: 1-2 PERSONAS.\n\t PRECIO: $305.00 (1) $360.00(2)\n");
                                       printf ("\n\t CUARTO[30]:\n\t  1 CAMA MATRIMONIAL\n\t PARA: 1-2 PERSONAS.\n\t PRECIO: $305.00 (1) $360.00(2)\n");
                                       printf ("\n\t CUARTO[31]:\n\t  1 CAMA MATRIMONIAL\n\t PARA: 1-2 PERSONAS.\n\t PRECIO: $305.00 (1) $360.00(2)\n");
                                       printf ("\n\t CUARTO[32]:\n\t  1 CAMA MATRIMONIAL\n\t PARA: 1-2 PERSONAS.\n\t PRECIO: $305.00 (1) $360.00(2)\n");
                                       printf ("\n\t CUARTO[33]:\n\t  1 CAMA MATRIMONIAL Y 1 CAMA INDIVIDUAL\n\t PARA: 3 PERSONAS.\n\t PRECIO: $480.00\n");
                                       printf ("\n\t CUARTO[34]:\n\t  1 CAMA MATRIMONIAL Y 1 CAMA INDIVIDUAL\n\t PARA: 3 PERSONAS.\n\t PRECIO: $480.00\n");
                                       printf ("\n\t CUARTO[35]:\n\t  SUITE\n\t TERRAZA\n\t 1 CAMA MATRIMONIAL\n\t PARA 1-2 PERSONAS.\n\t PRECIO: $480.00(1) $530.00(2)\n");
                                       break;
                                       case 4:
                                            printf ("\n\t SECCION B \n\t TERCER PISO \n\t SUITES AND VIEW \n");
                                            printf ("\n\t CUARTO[90]:\n\t BALCON \n\t 1 CAMA MATRIMONIAL\n\t PARA: 1-2 PERSONAS.\n\t PRECIO: $480.00(1) $530.00(2)\n");
                                            printf ("\n\t CUARTO[100]:\n\t INTERIOR \n\t 1 CAMA MATRIMONIAL\n\t PARA: 1-2 PERSONAS.\n\t PRECIO: $480.00(1) $530.00(2)\n");
                                            printf ("\n\t CUARTO[110]:\n\t VENTANA CALLE \n\t 1 CAMA MATRIMONIAL\n\t PARA: 1-2 PERSONAS.\n\t PRECIO: $480.00(1) $530.00(2)\n");
                                            printf ("\n\t CUARTO[120]:\n\t VENTANA CALLE \n\t 1 CAMA MATRIMONIAL\n\t PARA: 1-2 PERSONAS.\n\t PRECIO: $480.00(1) $530.00(2)\n");
                                            printf ("\n\t CUARTO[130]:\n\t VENTANA CALLE \n\t 1 CAMA MATRIMONIAL\n\t PARA: 1-2 PERSONAS.\n\t PRECIO: $480.00(1) $530.00(2)\n");
                                            break;
                                            case 5:
                                                 printf ("\n\t SECCION A \n\t PRIMER PISO \n\t EXTERIOR \n");
                                                     printf ("\n\t CUARTO [36]:\n\t BALCON \n\t 1 CAMA MATRIMONIAL\n\t PARA: 1-2 PERSONAS.\n\t PRECIO: $350.00(1) $400.00(2)\n");
                                                     printf ("\n\t CUARTO [37]:\n\t BALCON \n\t 1 CAMA MATRIMONIAL\n\t PARA: 1-2 PERSONAS.\n\t PRECIO: $350.00(1) $400.00(2)\n");
                                                     printf ("\n\t CUARTO [38]:\n\t BALCON \n\t 1 CAMA MATRIMONIAL\n\t PARA: 1-2 PERSONAS.\n\t PRECIO: $350.00(1) $400.00(2)\n");
                                                     printf ("\n\t CUARTO [39]:\n\t BALCON \n\t 1 CAMA MATRIMONIAL\n\t PARA: 1-2 PERSONAS.\n\t PRECIO: $350.00(1) $400.00(2)\n");
                                                     printf ("\n\t CUARTO [40]:\n\t BALCON \n\t 1 CAMA MATRIMONIAL\n\t PARA: 1-2 PERSONAS.\n\t PRECIO: $350.00(1) $400.00(2)\n");
                                                     printf ("\n\t CUARTO [41]:\n\t BALCON \n\t 1 CAMA MATRIMONIAL\n\t PARA: 1-2 PERSONAS.\n\t PRECIO: $350.00(1) $400.00(2)\n");
                                                     printf ("\n\t CUARTO [42]:\n\t INTERIOR \n\t 1 CAMA MATRIMONIAL\n\t PARA: 1-2 PERSONAS.\n\t PRECIO: $350.00(1) $400.00(2)\n");
                                                     break;
                                                     case 6:
                                                          printf ("\n\t SECCION A \n\t SEGUNDO PISO \n\t EXTERIOR \n");
                                                          printf ("\n\t CUARTO [43]:\n\t BALCON \n\t 1 CAMA MATRIMONIAL\n\t PARA: 1-2 PERSONAS.\n\t PRECIO: $350.00(1) $400.00(2)\n");
                                                          printf ("\n\t CUARTO [44]:\n\t BALCON \n\t 1 CAMA MATRIMONIAL\n\t PARA: 1-2 PERSONAS.\n\t PRECIO: $350.00(1) $400.00(2)\n");
                                                          printf ("\n\t CUARTO [45]:\n\t BALCON \n\t 1 CAMA MATRIMONIAL Y 1 CAMA INDIVIDUAL\n\t PARA: 3 PERSONAS.\n\t PRECIO: $450.00(3)\n");
                                                          printf ("\n\t CUARTO [46]:\n\t BALCON \n\t 1 CAMA MATRIMONIAL Y 1 CAMA INDIVIDUAL\n\t PARA: 3 PERSONAS.\n\t PRECIO: $450.00(3)\n");
                                                          printf ("\n\t CUARTO [47]:\n\t BALCON \n\t 1 CAMA MATRIMONIAL Y 1 CAMA INDIVIDUAL\n\t PARA: 3 PERSONAS.\n\t PRECIO: $450.00(3)\n");
                                                          printf ("\n\t CUARTO [48]:\n\t BALCON \n\t 1 CAMA MATRIMONIAL Y 1 CAMA INDIVIDUAL\n\t PARA: 3 PERSONAS.\n\t PRECIO: $450.00(3)\n");
                                                          printf ("\n\t CUARTO [49]:\n\t INTERIOR \n\t 1 CAMA MATRIMONIAL\n\t PARA: 1-2 PERSONAS.\n\t PRECIO: $350.00(1) $400.00(2)\n");
                                                          break;
                                                          case 7:
                                                               printf ("\n\t SECCION A \n\t TERCER PISO \n\t SUITES\n\t EXTERIOR \n");
                                                               printf ("\n\t CUARTO [50]:\n\t BALCON \n\t 1 CAMA MATRIMONIAL Y 1 SOFA CAMA\n\t PARA: 3 PERSONAS.\n\t PRECIO: $450.00(3) $400.00(2) $350.00(1)\n");
                                                               printf ("\n\t CUARTO [60]:\n\t BALCON \n\t 1 CAMA MATRIMONIAL Y 1 SOFA CAMA\n\t PARA: 3 PERSONAS.\n\t PRECIO: $450.00(3) $400.00(2) $350.00(1)\n");
                                                               printf ("\n\t CUARTO [70]:\n\t BALCON \n\t 1 CAMA MATRIMONIAL Y 1 SOFA CAMA\n\t PARA: 3 PERSONAS.\n\t PRECIO: $450.00(3) $400.00(2) $350.00(1)\n");
                                                               printf ("\n\t CUARTO [80]:\n\t BALCON \n\t 1 CAMA MATRIMONIAL Y 1 SOFA CAMA\n\t PARA: 3 PERSONAS.\n\t PRECIO: $450.00(3) $400.00(2) $350.00(1)\n");
                                                               break;
                                                               case 8:
                                                                     printf ("\n.....GRACIAS POR USAR ESTE PROGRAMA\n.....QUE TENGA BUEN DIA..!\n");
                                                                     printf ("\n...............By: FERNANDO CERVANTES..............\n\n");
                                                                     break;
                                                                     default:
                                                                     printf("\n....OPCION INVALIDA....\n");
                                                                     } // Fin switch  - case

    system("PAUSE");
    system("cls");
    } // Fin de while()
    return EXIT_SUCCESS;
}// Fin de Main.


                                                                    
  
