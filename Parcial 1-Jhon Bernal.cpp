1) ¿Cuál declara y define una variable entera con valor 10?
Respuesta:  B) int x = 10;

2) ¿Qué imprime?   std::cout << 7/2 << " " << 7/2.0;
Respuesta: C) 3.5 3.5 

3) Con bool a=true, b=false; ¿Qué imprime?   std::cout << (a&&b) << " " << (a||b) << " " << (!b); 
Respuesta: B) 0 1 1

4) Dado int x=3; if (x=0) { ... } else { ... } ¿qué ocurre? 
Respuesta:  C) Entra al else porque el valor es 0 tras la asignación. 

5) do-while respecto a while:
Respuesta: B) Ejecuta al menos una vez. 

6) ¿Cuál lee dos enteros separados por espacio? 

Respuesta: C) cin >> a >> b; 

7) ¿Qué imprime? 
int a=5, b=2; 
std::cout << a + b*3 << '\n'; 

Respuesta:  A) 11 
8) ¿Cuál firma pasa un entero por referencia?
R/  B) void f(int& n);

9) ¿Qué hace continue en un for? 
 R//  B) Salta a la siguiente iteración.

10) ¿Cuál condición es verdadera? 
R//  A) (3 == 3) && !(2 > 5)

Seccion B:
1) 
int a=5, b=2; 
std::cout << a + b*3 << std::endl; 
Respuesta: 11
2) 
int n=0; 
while (n<3) { 
std::cout << n << " "; 
n++; 
} 
Respuesta: 0 1 2
3) 
int x=10; 
if (x%2==0) std::cout << "par"; 
else        
std::cout << "impar";

Respuesta: par
 
4) 
int i=3; 
do { 
std::cout << i--; 
} while (i>0); 

R// 321

5) 
int a=1; 
int b = (a++ > 1) ? 100 : 200; 
std::cout << a << " " << b; 

R// 2 200

Secion C :
#include <iostream>
#include <string>

//C1) Firma: int max3(int a, int b, int c);
int max3(int a, int b, int c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= c)
        return b;
    else
        return c;
}

//C2) Firma: int sumaRango(int a, int b);
int sumaRango(int a, int b) {
    int suma = 0;
    for (int i = a; i <= b; i++) {
        suma += i;
    }
    return suma;
}

// C3) Firma: bool contieneDigito(int n, int d);
bool contieneDigito(int n, int d) {
    do {
        if (n % 10 == d)
            return true;
        n /= 10;
    } while (n > 0);
    return false;
}

// C4) Firma: void tablaMultiplicar(int n); 
void tablaMultiplicar(int n) {
    for (int i = 1; i <= 10; i++) {
        std::cout << n << " x " << i << " = " << (n * i) << std::endl;
    }
}


int main() {
    std::cout << "C1 - max3(4, 9, 2): " << max3(4, 9, 2) << std::endl;

    std::cout << "C2 - sumaRango(1, 5): " << sumaRango(1, 5) << std::endl;

    std::cout << "C3 - contieneDigito(12345, 3): ";
    std::cout << (contieneDigito(12345, 3) ? "true" : "false") << std::endl;

    std::cout << "C3 - contieneDigito(789, 2): ";
    std::cout << (contieneDigito(789, 2) ? "true" : "false") << std::endl;

    std::cout << "C4 - tablaMultiplicar(3):" << std::endl;
    tablaMultiplicar(3);

    return 0;
}



