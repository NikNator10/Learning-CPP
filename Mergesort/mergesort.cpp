#include <iostream>
#include <vector>

typedef std::vector<int> intVec;

void merge(intVec& zahlen, int s, int e)
{
	int akt_1 = s;
	int akt_2 = (s + e) / 2 + 1;
	intVec zwischen((e - s) + 1, 0);
	int i = 0;
	while (akt_1 < ((s + e) / 2 + 1) && akt_2 < (e + 1))
	{
		if (zahlen[akt_1] < zahlen[akt_2])
		{
			zwischen[i] = zahlen[akt_1];
			akt_1++;
		}
		else
		{
			zwischen[i] = zahlen[akt_2];
			akt_2++;
		}
		i++;
	}
	// Aufräumen: Beide "rote Pointer" bis zum Ende
	// durchlaufen lassen
	while (akt_1 < ((s + e) / 2 + 1))
	{
		zwischen[i] = zahlen[akt_1];
		akt_1++;
		i++;
	}
	while (akt_2 < (e + 1))
	{
		zwischen[i] = zahlen[akt_2];
		akt_2++;
		i++;
	}

	// Züruckkopieren des Zwischenspeichers
	for (size_t i = 0; i < zwischen.size(); i++)
	{
		zahlen[s + i] = zwischen[i];
	}
}

void mergeSort(intVec& zahlen, int s, int e)
{
	if (s >= e)
		return;
	int mid = (s + e) / 2;
	mergeSort(zahlen, s, mid);
	mergeSort(zahlen, mid + 1, e);
	merge(zahlen, s, e);
}

int main()
{
	std::cout << "Hello World!\n";
	intVec zahlen = { 7,21,4,18,-9,-69,420,-603 };
	mergeSort(zahlen, 0, zahlen.size() - 1);
	for (size_t i = 0; i < zahlen.size(); i++)
	{
		std::cout << zahlen[i] << ", ";
	}
}
