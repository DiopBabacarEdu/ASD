//*********************************************************
// Programme en C pour le parcours Infixé d'un arbre binaire
// Les éléments de l'arbre sont parcourus en ordre suivant
// 1.Sous-arbre gauche 
// 2.Sous-arbre droit
// 3.Racine
// Programme adapté depuis -> https://www.geeksforgeeks.org
//*********************************************************

#include <stdio.h> 
#include <stdlib.h> 
  
/* Définition des noeuds de l'Arbre Binaire */
struct node 
{ 
     int data; 
     struct node* left; 
     struct node* right; 
}; 
  
/* Fonction qui alloue un nouveau nœud avec la donnée
et affecte à NULL aux pointeurs gauche et droit. */

struct node* newNode(int dataInput) 
{ 
     struct node* node = (struct node*) 
                                  malloc(sizeof(struct node)); 
     node->data = dataInput; 
     node->left = NULL; 
     node->right = NULL; 
  
     return(node); 
} 
  
/* Étant donné un arbre binaire, afficher ses nœuds en utilisant la
   traversée post-ordre "ascendante". */
void parcoursPostfixe(struct node* node) 
{ 
     if (node == NULL) 
        return; 
  
     // Appel récursif sous-arbre gauche
     parcoursPostfixe(node->left); 
  
     // Appel récursif sous-arbre droit 
     parcoursPostfixe(node->right); 
  
     // Afficher la valeur du noeud
     printf("%d ", node->data); 
} 
  
/* Programme principal*/
int main() 
{ 
     struct node *root  = newNode(1); 
     root->left             = newNode(67); 
     root->right           = newNode(54); 
     root->left->left     = newNode(0); 
     root->left->right   = newNode(5);   
  
     printf("\nParcours en Postfixé: \n"); 
     parcoursPostfixe(root); 
  
     getchar(); 
     return 0; 
} 
