#include "lewy.h"
#include <iostream>

Lewy::Lewy(int xa)
{
    a = xa;
}

Lewy& Lewy::operator=(const Lewy& prawy)
{
    if(&prawy != this)
    {
        a = prawy.a;
    }
    return *this;
}

Lewy Lewy::operator+(Lewy xa)
{
    a = a + xa.a;
}

void Lewy::wyswietl()
{
    std::cout << a << std::endl;
}
