#include <iostream>
#include "lewy.h"

void wyswietlObiekty(Lewy& a, Lewy& b)
{
    std::cout << "obiekt a:  ";
    a.wyswietl();
    std::cout << "obiekt b:  ";
    b.wyswietl();
}

void testPlus(Lewy& a, Lewy& b)
{
    std::cout << "operator+ : " ;
    a + b;
    a.wyswietl();
}

void testRowna(Lewy& a, Lewy& b)
{
    b = a;
    std::cout << "operator=: \n" ;
}


int main(void)
{
    Lewy a(2);
    Lewy b(3);
    wyswietlObiekty(a, b);
    testPlus(a, b);
    testRowna(a, b);
    wyswietlObiekty(a, b);

    return 0;
}
