# Autograder — Programacion 1, ECFM

Herramienta para evaluar tareas de C++ contra casos de prueba automaticamente.
Compatible con **Windows, Linux y macOS** — solo requiere tener `g++` instalado.

---

## Estructura de directorios

```
autograder/
├── autograder.bat       # Windows
├── autograder.sh        # Linux / macOS
├── tests/
│   └── <nombre_tarea>/
│       ├── caso1.in     # Entrada del caso de prueba
│       ├── caso1.out    # Salida esperada
│       ├── caso2.in
│       └── caso2.out
└── tareas/
    └── <nombre_tarea>/
        └── enunciado.md
```

---

## Uso

### Windows

```bat
autograder.bat <nombre_tarea> <archivo.cpp>
```

### Linux / macOS

```bash
chmod +x autograder.sh          # solo la primera vez
./autograder.sh <nombre_tarea> <archivo.cpp>
```

---

## Ejemplo: "Contar hasta 10"

### 1. Lee el enunciado

```
tareas/contar_hasta_10/enunciado.md
```

### 2. Escribe tu solucion en C++

Guarda el archivo como `solucion.cpp`:

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << i << "\n";
    }
    return 0;
}
```

### 3. Ejecuta el autograder

```bat
:: Windows
autograder.bat contar_hasta_10 solucion.cpp
```

```bash
# Linux / macOS
./autograder.sh contar_hasta_10 solucion.cpp
```

### 4. Lee el resultado

```
  .:#@@@@+.  _____ ____ _____ __  __
 :%@@@@@@%: | ____/ ___|  ___|  \/  |
 *@@@@@@@@* |  _|| |   | |_  | |\/| |
 :%@@@@@@%: | |__| |___|  _| | |  | |
  '-#@@@@-' |_____\____|_|   |_|  |_|
   Autograder — Programacion 1 F12

════════════════════════════════════════
 Tarea  : contar_hasta_10
 Archivo: solucion.cpp
════════════════════════════════════════
  [INFO] Compilacion exitosa
  [PASS] caso1

 Resultado: 1 / 1 casos pasados
════════════════════════════════════════
```

---

## Como agregar una nueva tarea

1. Crea la carpeta `tests/<nombre_tarea>/`
2. Por cada caso agrega:
   - `casoN.in` — texto de entrada (puede estar vacio)
   - `casoN.out` — salida esperada exacta
3. Opcionalmente crea `tareas/<nombre_tarea>/enunciado.md`

---

## Requisitos

| Sistema | Instalacion de g++ |
|---------|--------------------|
| Linux   | `sudo apt install build-essential` |
| macOS   | `xcode-select --install` |
| Windows | [MinGW-w64](https://www.mingw-w64.org/) — asegurarse de agregar `bin/` al PATH |
