#include <iostream> // Einbinden von Zusatzfunktionalität

int main() // Hauptfunktion, Wird bei Start aufgerufen
{
	// std ist ein Namespace, Abgegrenzter Namensbereich
	// cout << Ausgabe über Konsole (eng. Console)
	std::cout << "Hello World!\n" << 123.456 << std::endl << "Hallo\n";
	int alter = 0;
	std::cout << "Bitte Alter in Jahren eingeben: ";
	std::cin >> alter;

	int alter_sekunden = alter * 365 * 24 * 60 * 60;
	std::cout << "Sie sind " << alter_sekunden << " Sekunden alt" << "\n";

	unsigned int zahl = 169;
	// logisches (bitweises) And: & 
	// logisches (bitweises) Or:  | 
	// logisches (bitweises) Not: ~
	unsigned int zahl2 = 7;

	unsigned zahl_and_zahl2 = zahl & zahl2;
	unsigned zahl_or_zahl2 = zahl | zahl2;

	std::cout << zahl_and_zahl2 << "\n";
	std::cout << zahl_or_zahl2 << "\n";

	char zahl3 = 169; // char ist integer mit 8 Bit
	char not_zahl3 = ~zahl3;
	std::cout << (int)not_zahl3 << "\n";
}
