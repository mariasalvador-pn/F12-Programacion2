#include <iostream>
#include <cmath>

int main() {
    int n;
    if (!(std::cin >> n)) return 0;
    
    if (n < 2) { 
        std::cout << "no primo" << std::endl; 
        return 0; 
    }
    
    bool es_primo = true;
    for (int i = 2; i * i <= n; i++) {  // Avoid sqrt() call
        if (n % i == 0) {
            es_primo = false;
            break;
        }
    }
    
    std::cout << (es_primo ? "primo" : "no primo") << std::endl;
    return 0;
}