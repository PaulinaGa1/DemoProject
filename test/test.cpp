#include "../src/code.hpp"
#include <iostream>
#include <cassert>

// Funkcja dodająca dwie liczby całkowite
int dodaj(int a, int b) {
   return a + b;
}

// Test
void testDodawania() {
   // Test 1: Dodawanie dwóch dodatnich liczb
   assert(dodaj(5, 10) == 15);

   // Test 2: Dodawanie dwóch ujemnych liczb
   assert(dodaj(-5, -10) == -15);

   // Test 3: Dodawanie dodatniej i ujemnej liczby
   assert(dodaj(5, -10) == -5);

   // Test 4: Dodawanie ujemnej i dodatniej liczby
   assert(dodaj(-5, 10) == 5);

   // Test 5: Dodawanie dwóch zer
   assert(dodaj(0, 0) == 0);

   std::cout << "Testy zakończone pomyślnie!" << std::endl;
}

int main() {
   testDodawania();

   return 0;
}
