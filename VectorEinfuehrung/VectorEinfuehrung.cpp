#include <iostream>
#include <vector>

int main()
{
    std::cout << "Hello World!\n";
	std::vector<int> meineZahlen = { 9,15,8,-5,87,1 };

    meineZahlen.pop_back();
    meineZahlen.push_back(-200);
    meineZahlen.push_back(-500);
    
    // Folgendes nicht machen: !!!
    // Wir lernen später andere Datenstrukturen um das zu machen
    meineZahlen.insert(meineZahlen.begin() + 2 ,13);
    
    // Element am Index 0 ausgeben
    std::cout << meineZahlen[0] << std::endl;    
    std::cout << meineZahlen[5] << std::endl;    
    
    // std::cout << meineZahlen[6] << std::endl;    
    int minimum = meineZahlen[0]; // Setze minimum auf erstes Element
    for (int i = 0; i < meineZahlen.size(); i++)
    {
        std::cout << "Index: " << i << " Wert: " << meineZahlen[i] << std::endl;
        // Falls Element am Index kleiner --> neues Minimum gefunden
        if (meineZahlen[i] < minimum) 
        {
            minimum = meineZahlen[i];
        }
    }
    std::cout << "Das Minimum ist: " << minimum << std::endl;

    std::vector<int> zufallszahlen;
    for (int i = 0; i < 20; i++)
    {
        zufallszahlen.push_back(rand()% 100 + 200);
    }

    int summe = 0;
    for (int i = 0; i < zufallszahlen.size(); i++) 
    {
        summe = summe + zufallszahlen[i];
    }
    
    std::cout << "Summe : " << summe << std::endl;
    std::cout << "Durchschnitt : " << ((double)summe) / zufallszahlen.size() << std::endl;
}   
