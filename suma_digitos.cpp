#include <iostream>

int main() {
    long long n;
    int suma = 0;
    if (!(std::cin >> n)) return 0;
    if (n < 0) n = -n; // Por si es negativo
    while (n > 0) {
        suma += n % 10;
        n /= 10;
    }
    std::cout << suma << std::endl;
    return 0;
}