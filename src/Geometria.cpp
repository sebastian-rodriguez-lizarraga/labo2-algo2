#include <iostream>

using namespace std;

using uint = unsigned int;

float PI = 3.14;


// Ejercicio 1

class Rectangulo {
    public:
        Rectangulo(uint alto, uint ancho);
        uint alto();
        uint ancho();
        float area();

    private:
        int _alto;
        int _ancho;

};

Rectangulo::Rectangulo(uint alto, uint ancho) /* Completar */ {
     _alto = alto;
     _ancho = ancho;
};

uint Rectangulo::alto() {

    return _alto;
}

// Completar definición: ancho
uint Rectangulo::ancho() {

    return _ancho;
}

// Completar definición: area
float Rectangulo::area() {

    return _alto*_ancho;
}
// Ejercicio 2

class Elipse {
    public:
        Elipse(uint a, uint b);
        uint r_a();
        uint r_b();
        float area();
    private:
      uint  _radioA;
      uint  _radioB;
};


Elipse::Elipse(uint a,uint b){
    _radioA = a;
    _radioB = b;
}


uint Elipse::r_a() {
    return _radioA;
}

uint Elipse::r_b() {
    return _radioB;
}

float Elipse::area(){
    return PI*_radioA*_radioB;
}

// Ejercicio 3

class Cuadrado {
    public:
        Cuadrado(uint lado);
        uint lado();
        float area();

    private:
        Rectangulo _r;
};

Cuadrado::Cuadrado(uint lado): _r(lado, lado) {

}

uint Cuadrado::lado() {

    return _r.alto();
}

float Cuadrado::area() {

    return _r.alto()*_r.ancho();  //casual//por ser un cuadrado tienen misma base que altura
}

// Ejercicio 4

class Circulo {
    public:
        Circulo(uint radio);
        uint radio();
        float area();
    private:
        Elipse _e;
};

Circulo::Circulo(uint radio): _e(radio,radio) {

}

uint Circulo::radio(){
    return _e.r_a();
}

float Circulo::area() {
    return PI*_e.r_a()*_e.r_a();
}



// Ejercicio 5

ostream& operator<<(ostream& os, Rectangulo r) {
    os << "Rect(" << r.alto() << ", " << r.ancho() << ")";
    return os;
}



ostream& operator<<(ostream& os, Elipse e) {
    os << "Elipse(" << e.r_a() << ", " << e.r_b() << ")";
    return os;
}

// Ejercicio 6

ostream& operator<<(ostream& os, Cuadrado cuad) {
    os << "Cuad(" << cuad.lado()  << ")";
    return os;
}

ostream& operator<<(ostream& os, Circulo circ) {
    os << "Circ(" << circ.radio() << ")";
    return os;
}