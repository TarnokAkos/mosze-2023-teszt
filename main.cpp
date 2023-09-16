#include <iostream> 

constexpr int N_ELEMENTS = 100; // const expr

int main()
{
    int *b = new int[NELEMENTS]; // alsó vonás hiányzik rossz a hivatkozás
    std::cout << '1-100 ertekek duplazasa' // "" ; És kell egy sortörés
    for (int i = 0;) // hiányos a léptetés és a feltétel
    {
        b[i] = i * 2; // b egy pointer 
    }
    for (int i = 0; i; i++) // hiányzik a fetétel
    {
        std::cout << "Ertek:" // a sor lezáratlan nincs ; és kell egy std sortörésnek
    }   // a két for ciklust lehet egybe kéne rakni 
    std::cout << "Atlag szamitasa: " << std::endl; 
    int atlag; // kezdõ érték hiányos double vagy float kell típusnak
    for (int i = 0; i < N_ELEMENTS, i++) // vesszõ helyett ; kell a ciklusban
    {
        atlag += b[i] // nincs lezárva  a sor
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
