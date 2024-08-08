#include "sort.h"

/**
 * Je vais commenter en français c'est mieux
 * selection_sort - Trie un tableau d'entiers en ordre croissant
 * en utilisant l'algorithme de tri par sélection.
 * 
 * @array: Tableau contenant les nombres à trier.
 * @size: Taille du tableau.
 * 
 * Cette fonction trie le tableau donné en utilisant l'algorithme de tri
 * par sélection, qui fonctionne comme suit :
 * 
 * 1. On parcourt le tableau en cherchant l'élément le plus petit dans la
 *    partie non triée du tableau.
 * 2. On échange cet élément avec le premier élément de la partie non triée.
 * 3. On répète ces étapes pour la partie restante du tableau jusqu'à ce que
 *    tout le tableau soit trié.
 */
void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	size_t swap;

	/* Vérifie si le tableau est NULL ou si sa taille est inférieure à 2.
	 * Dans ces cas, le tableau est considéré comme déjà trié ou invalide.
	 */
	if (array == NULL || size < 2)
	{
		return;
	}

	/* Boucle externe : parcourt chaque élément du tableau sauf le dernier */
	for (i = 0; i < size - 1; i++)
	{
		/* Assume que l'élément courant est le plus petit */
		size_t index = i;

		/* Boucle interne : recherche l'élément le plus petit dans la partie non triée */
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[index])
			{
				/* Met à jour l'index si un élément plus petit est trouvé */
				index = j;
			}
		}
		/* Échange l'élément trouvé avec l'élément à la position courante (i) */
		if (index != i)
		{
			swap = array[i];
			array[i] = array[index];
			array[index] = swap;

			/* Affiche l'état du tableau après chaque échange */
			print_array(array, size);
		}
	}
}

