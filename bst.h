#ifndef BST_H
#define BST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct BST BST;


BST *inicializaBST();

BST *adicionaBST(BST *prim, int elemento);

void imprimeBST(BST *prim);

void liberaBST(BST *prim); // em padroes diferentes, apenas "if(a)" em vez de 
//                           "if( a!= NULL)"
int obtemAlturaBST(BST *prim);


#endif