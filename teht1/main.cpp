#include <iostream>
#include <cstdlib>
#include <ctime>

int game(int maxnum) {
    std::srand(static_cast<unsigned int>(std::time(0))); // Alustetaan satunnaislukugeneraattori

    int etsittavaLuku = std::rand() % maxnum + 1; // Arvotaan satunnainen luku valilta 1-maxnum
    int pelaajanArvaus;
    int arvauskerrat = 0;

    std::cout << "Arvaa luku valilla 1-" << maxnum << ": ";

    do {
        std::cin >> pelaajanArvaus;
        arvauskerrat++;

        if (pelaajanArvaus < etsittavaLuku) {
            std::cout << "Luku on suurempi. Arvaa uudelleen: ";
        } else if (pelaajanArvaus > etsittavaLuku) {
            std::cout << "Luku on pienempi. Arvaa uudelleen: ";
        } else {
            std::cout << "Oikea vastaus! Onneksi olkoon!" << std::endl;
        }
    } while (pelaajanArvaus != etsittavaLuku);

    return arvauskerrat;
}

int main() {
    int maxnum;
    std::cout << "Anna korkein etsittava luku: ";
    std::cin >> maxnum;

    int arvauskerrat = game(maxnum);

    std::cout << "Arvauskertoja meni yhteensa: " << arvauskerrat << std::endl;

    return 0;
}
