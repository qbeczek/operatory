#ifndef LEWY_H
#define LEWY_H


class Lewy
{
private:
    int a;

public:
    Lewy(int);

    Lewy operator+ (Lewy);
    Lewy& operator=(const Lewy&);
    void wyswietl();
};

#endif // LEWY_H
