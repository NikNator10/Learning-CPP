#include <iostream>
#include <vector>

int main()
{
	int vergleiche_Insertionsort = 0;
	int vergleiche_Bubblesort = 0;


	std::vector<int> zahlen = { 13,8,-7,5,3,19,7, };
	// Insertion Sort
	for (size_t j = 0; j < zahlen.size(); j++)
	{
		int aktuelles_min = zahlen[0];
		int aktuelles_min_index = 0;
		for (size_t i = j+1; i < zahlen.size(); i++)
		{
			vergleiche_Insertionsort++;
			if (zahlen[i] < aktuelles_min)
			{
				aktuelles_min = zahlen[i];
				aktuelles_min_index = i;
			}
		}
		int temp = zahlen[j];
		zahlen[j] = aktuelles_min;
		zahlen[aktuelles_min_index] = temp;
	}

	zahlen =  { 13,8,-7,5,3,19,7, };
	// Bubble Sort Algorithmus
	bool fehlstellung_gefunden = true;
	int anzahlSortiert = 0;
	while (fehlstellung_gefunden)
	{
		anzahlSortiert++;
		fehlstellung_gefunden = false;
		for (size_t i = 0; i < zahlen.size() - anzahlSortiert; i++)
		{
			int zahl1 = zahlen[i];
			int zahl2 = zahlen[i + 1];

			vergleiche_Bubblesort++;
			if (zahl1 > zahl2)  // Fehlstellung
			{
				fehlstellung_gefunden = true;
				zahlen[i + 1] = zahl1;
				zahlen[i] = zahl2;
			}
		}

	}

	for (size_t i = 0; i < zahlen.size(); i++)
	{
		std::cout << zahlen[i] << ", ";
	}

	std::cout << std::endl;
	std::cout << "Insertionsort: " << vergleiche_Insertionsort << std::endl;
	std::cout << "Bubblesort: " << vergleiche_Bubblesort << std::endl;

}