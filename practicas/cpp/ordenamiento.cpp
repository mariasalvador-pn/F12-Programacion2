#include <iostream>
#include <vector>
#include <string>

// --- PARTE A: BURBUJA ---
void burbuja(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        bool intercambiado = false;
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                intercambiado = true;
            }
        }
        if (!intercambiado) break;
    }
}

// --- PARTE B: SELECCION ---
void seleccion(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }
}

// --- PARTE C: MERGE SORT ---
// Cambiamos 'int' por 'size_t' para evitar los warnings de comparacion
std::vector<int> mezclar(const std::vector<int>& izq, const std::vector<int>& der) {
    std::vector<int> resultado;
    size_t i = 0, j = 0; 
    
    while (i < izq.size() && j < der.size()) {
        if (izq[i] <= der[j]) {
            resultado.push_back(izq[i++]);
        } else {
            resultado.push_back(der[j++]);
        }
    }
    while (i < izq.size()) resultado.push_back(izq[i++]);
    while (j < der.size()) resultado.push_back(der[j++]);
    return resultado;
}

std::vector<int> mergesort(const std::vector<int>& arr) {
    if (arr.size() <= 1) return arr;
    
    int medio = arr.size() / 2;
    std::vector<int> izq_part(arr.begin(), arr.begin() + medio);
    std::vector<int> der_part(arr.begin() + medio, arr.end());
    
    return mezclar(mergesort(izq_part), mergesort(der_part));
}

int main() {
    std::string algoritmo;
    int n;
    
    if (!(std::cin >> algoritmo >> n)) return 0;
    
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    
    if (algoritmo == "burbuja") {
        burbuja(arr);
    } else if (algoritmo == "seleccion") {
        seleccion(arr);
    } else if (algoritmo == "mergesort") {
        arr = mergesort(arr);
    }
    
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << (i == n - 1 ? "" : " ");
    }
    std::cout << std::endl;
    
    return 0;
}