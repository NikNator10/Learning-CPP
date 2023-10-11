#include <iostream>

bool istPrimzahl(int zahl)
{
    for (int i = 2; i < zahl; i++)
    {
        if (zahl % i == 0)
        {
            return false;
        }
    }
    return true;
}



int main()
{

    // double seite_a = -1;
    // std::cout << "bitte seite a eingeben!\n";
    // std::cin >> seite_a;

    // int i = 1;
    // while (i < seite_a)
    // {
    //     std::cout << "seite: " << i << " fläche: " << i*i << std::endl;
        
    //     // i = i + 1;
    //     // i += 1;
    //     i++;
    // }

    // int zahl = 24;
    // for (int j = 1; j < zahl/2; j++)
    // {
    //     if (zahl % j == 0)
    //     {
    //         std::cout << j << " ist Teiler von " << zahl << std::endl;
    //     }
    //  }
    
    std::cout << istPrimzahl(71) << std::endl;

    for (int i = 2; i < 1000000; i++)
    {
        if (istPrimzahl(i))
        {
            std::cout << "Primzahl: " << i << std::endl;
        }
    }
    

}
