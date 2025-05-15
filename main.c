
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bst.h"




int main(int argc, char **argv)
{
    srand(time(NULL));
    BST *arvinha = inicializaBST();
    int rangeN;
    scanf("%d", &rangeN);
    for(int i=0; i< rangeN;i++)
    {
        arvinha = adicionaBST(arvinha, rand());
    }

    imprimeBST(arvinha);


    printf("\n Altura maxima da BST: %d", obtemAlturaBST(arvinha));
    liberaBST(arvinha);
}