# Listes chaînées en C
## Programme pour construire une liste chaînée de 3 noeuds 

```c
#include <stdio.h> 
#include <stdlib.h> 
  
struct Node { 
    int valeur; 
    struct Node* suivant; 
}; 
  
// Listes chainées simple 
// Avec 3 noeuds
int main() 
{ 
    struct Node* tete = NULL; 
    struct Node* second = NULL; 
    struct Node* troisieme = NULL; 
  
    // Allouer 3 noeuds 
    tete = (struct Node*)malloc(sizeof(struct Node)); 
    second = (struct Node*)malloc(sizeof(struct Node)); 
    troisieme = (struct Node*)malloc(sizeof(struct Node)); 
  
    /* Trois noeuds ont été alloués dynamiquement.
      Nous avons des pointeurs vers ces trois noeuds comme tête,
      second et troisieme     
       tete           second           troisieme 
        |                |               | 
        |                |               | 
    +---+-----+     +----+----+     +----+----+ 
    | #  | #  |     | #  | #  |     |  # |  # | 
    +---+-----+     +----+----+     +----+----+ 
     
   # représente toute valeur aléatoire.
    Les données sont aléatoires, car nous n'avons attribué
    rien encore  */
  
    tete->valeur = 1; // affecter une donnee à la tete
    tete->suivant = second; // Lier le premier noeud au second
  
    /* des données ont été affectées à la partie données du premier
      noeud (noeud pointé par la tête). Et ensuite
      le pointeur du premier noeud pointe vers le second.
      Ils sont donc tous les deux liés. 
  
       tete          second         troisieme 
        |              |              | 
        |              |              | 
    +---+---+     +----+----+     +-----+----+ 
    | 1  | o----->| #  | #  |     |  #  | #  | 
    +---+---+     +----+----+     +-----+----+     
  */
  
    // affecter une donnée au second
    second->valeur = 2; 
  
    // Lier le second au troisieme
    second->suivant = troisieme; 
  
    /* des données ont été affectées à la partie données du deuxième
      noeud (noeud pointé par le second). Et ensuite
      le pointeur du deuxième noeud pointe vers le troisième
      noeud. Les trois noeuds sont donc liés. 
    
       tete         second         troisieme 
        |             |             | 
        |             |             | 
    +---+---+     +---+---+     +----+----+ 
    | 1  | o----->| 2 | o-----> |  # |  # | 
    +---+---+     +---+---+     +----+----+      */
  
    troisieme->valeur = 3; // affecter une donnée au troisieme
    troisieme->suivant = NULL; 
  
    /* les données ont été affectées à la partie données de troisieme
     noeud. Et le prochain pointeur
     du troisième noeud est affecté à nul pour indiquer
     que la liste chaînée se termine ici.
  
     Toute la liste a été construite
           tete     
             | 
             |  
        +---+---+     +---+---+       +----+------+ 
        | 1  | o----->|  2  | o-----> |  3 | NULL | 
        +---+---+     +---+---+       +----+------+        
     
      
   Notez que seul tete est suffisant pour représenter
     toute la liste. Nous pouvons parcourir l'intégralité
     liste en suivant les pointeurs suivants.    */
  
    return 0; 
} 
```
### Link
https://www.geeksforgeeks.org/linked-list-set-1-introduction/
