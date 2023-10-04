#include <iostream>

bool istSchaltjahr(int jahr)
{
    bool result;
    if (jahr % 4 == 0) 
    {
        if (jahr % 100 == 0)
        {
            if (jahr % 400 == 0)
            {
                result = true;
            }
            else
            {
                result = false;
            }
            
        }
        else
        {
            result = true;
        }

    }
    else
    {
        result = false;
    }

    return result;
}

int main()
{
    std::cout << "Willkommen zum Schaltjahrberechner!\n";
    int jahr = 0;
    std::cin >> jahr;
    bool jahrIstSchaltJahr = istSchaltjahr(jahr);
    if (jahrIstSchaltJahr)
    {
        std::cout << "Ja, das Jahr ist ein Schaltjahr!" << std::endl;
    }
    else 
    {
        std::cout << "Nein, das Jahr ist kein Schaltjahr!" << std::endl;
    }
}


/* Andere Variante:
#include <iostream>

int main()
{
	std::cout << "Willkommen zum Schaltjahrberechner!\n";
	int jahr = 0;
	std::cin >> jahr;

	if (jahr % 4 == 0)
	{
		if (jahr % 100 == 0)
		{
			if (jahr % 400 == 0)
			{
				std::cout << "Ist Schaltjahr" << std::endl;
			}
			else
			{
				std::cout << "Kein Schaltjahr" << std::endl;
			}

		}
		else
		{
			std::cout << "Ist Schaltjahr" << std::endl;
		}

	}
	else
	{
		std::cout << "Kein Schaltjahr" << std::endl;
	}
}
*/