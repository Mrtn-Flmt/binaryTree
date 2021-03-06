#include <stdio.h>
#include <stdlib.h>
#include "../include/list.h"

int main()
{
    int Key;
    node *Arbre = NULL;
    int **adjacence;

    ajouterNode(&Arbre, 30);
    ajouterNode(&Arbre, 20);
    ajouterNode(&Arbre, 50);
    ajouterNode(&Arbre, 45);
    // can add more

    printf("------------tree-------------\n");
    afficherTree(Arbre);
    printf("--------tree inversé---------\n");
    afficherTreeInverse(Arbre);
    printf("-------------------------------\n");
    
    Key = 30;
    if (chercherNode(Arbre, Key)) { // Si la clée est présente dans un des nodes
        printf("La cle %d existe.\n", Key);
    } else { 
        printf("La cle %d n'existe pas.\n", Key);
    }
    
    printf("-------------------------------\n");
    viderTree(&Arbre);
    return 0;
}