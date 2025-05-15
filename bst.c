#include "bst.h"




struct BST
{
    int elemento;
    BST *esq;
    BST *dir;
};


BST *inicializaBST()
{
    return NULL;
}

BST *adicionaBST(BST *prim, int elemento)
{
    if(prim == NULL)
    {
        prim = malloc(sizeof(BST));
        prim->elemento = elemento;
        prim->esq = prim->dir = NULL;
        return prim;
    }
    else
    {
        if(prim->elemento > elemento)
        {
            prim->esq = adicionaBST(prim->esq, elemento);
        }
        else if(prim->elemento < elemento)
        {
            prim->dir = adicionaBST(prim->dir, elemento);
        }
        return prim;
    }
}

// esta imprimindo simplesmente ordenada em vez de "bonitinho" em formato de arvore
// pq o intuito eh firmar o conhecimento de arvores nao imprimir bonitinho
void imprimeBST(BST *prim)
{
    if(prim==NULL)
    {
        return;
    }
    if(prim->esq != NULL)
    {
        imprimeBST(prim->esq);
    }
    if(prim != NULL)
    {
        printf(" %d ", prim->elemento);
    }
    if(prim->dir != NULL)
    {
        imprimeBST(prim->dir);
    }
}

void liberaBST(BST *prim) // em padroes diferentes, apenas "if(a)" em vez de 
//                           "if( a!= NULL)"
{
    if(!prim)
    {
        return;
    }
    if(prim->esq)
    {
        liberaBST(prim->esq);
    }
    if(prim->dir)
    {
        liberaBST(prim->dir);
    }
    free(prim);
    prim = NULL;
}

int obtemAlturaBST(BST *prim)
{
    if(!prim)
    {
        return -1;
    }
    static int tamAlt = 0;

    static int tamEsq = 0;
    static int tamDir = 0;


    if(prim->esq)
    {
        obtemAlturaBST(prim->esq);
        tamEsq++;
    }
    if(prim->dir)
    {
        obtemAlturaBST(prim->dir);
        tamDir++;
    }


    tamAlt = (tamEsq>=tamDir) ? tamEsq : tamDir;
    




    return tamAlt;
}