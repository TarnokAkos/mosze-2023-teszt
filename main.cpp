#include <iostream> 

constexpr int N_ELEMENTS = 100; // const expr

int main()
{
    int *b = new int[NELEMENTS]; // als� von�s hi�nyzik rossz a hivatkoz�s
    std::cout << '1-100 ertekek duplazasa' // "" ; �s kell egy sort�r�s
    for (int i = 0;) // hi�nyos a l�ptet�s �s a felt�tel
    {
        b[i] = i * 2; // b egy pointer 
    }
    for (int i = 0; i; i++) // hi�nyzik a fet�tel
    {
        std::cout << "Ertek:" // a sor lez�ratlan nincs ; �s kell egy std sort�r�snek
    }   // a k�t for ciklust lehet egybe k�ne rakni 
    std::cout << "Atlag szamitasa: " << std::endl; 
    int atlag; // kezd� �rt�k hi�nyos double vagy float kell t�pusnak
    for (int i = 0; i < N_ELEMENTS, i++) // vessz� helyett ; kell a ciklusban
    {
        atlag += b[i] // nincs lez�rva  a sor
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
