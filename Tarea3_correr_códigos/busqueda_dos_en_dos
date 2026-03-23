#include <iostream>
// Búsqueda saltando de dos en dos
#include <vector>

int main() {
    int n, objetivo;
    if (!(std::cin >> n)) return 0;
    std::vector<int> lista(n);
    for (int i = 0; i < n; ++i) std::cin >> lista[i];
    std::cin >> objetivo;

    int i = 0;
    while (i < n && lista[i] < objetivo) {
        i += 2;
    }

    int resultado = -1;
    // Retroceder 1 y revisar actual
    if (i - 1 >= 0 && i - 1 < n && lista[i - 1] == objetivo) resultado = i - 1;
    else if (i < n && lista[i] == objetivo) resultado = i;

    std::cout << resultado << std::endl;
    return 0;
}
// Usa el código con precaución.
