#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string frase;
    std::getline(std::cin, frase);
    int contador = 0;
    for (char c : frase) {
        char m = tolower(c);
        if (m == 'a' || m == 'e' || m == 'i' || m == 'o' || m == 'u') {
            contador++;
        }
    }
    std::cout << contador << std::endl;
    return 0;
}
