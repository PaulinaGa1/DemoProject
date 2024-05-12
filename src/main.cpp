#include <iostream>

#include "code.hpp"

int main() {
   int liczba1, liczba2, suma;

   // Pytanie o pierwszą liczbę
   std::cout << "Podaj pierwsza liczbe calkowita: ";
   std::cin >> liczba1;

   // Pytanie o drugą liczbę
   std::cout << "Podaj druga liczbe calkowita: ";
   std::cin >> liczba2;

   // Dodawanie liczb
   suma = liczba1 + liczba2;

   // Wyświetlenie wyniku
   std::cout << "Suma liczb " << liczba1 << " i " << liczba2 << " wynosi: " << suma << std::endl;

   return 0;
}
