

// Fonction pour chercher une valeur dans un arbre binaire
struct node* rechercher(struct node* root, int elementARechercher) 
{ 
    // Base Cases: root is null or key is present at root 
    if (root == NULL || root->data == elementARechercher) 
       return root; 
     
    // elementARecherche est supérieur à la valeur de root
    if (root->key < elementARechercher) 
       return rechercher(root->right, elementARechercher); 
  
    // elementARecherche est inférieur à la valeur de root
    return rechercher(root->left, elementARechercher); 
} 
