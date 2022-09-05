#include <iostream>

using namespace std;

using uint = unsigned int;

// Pre: 0 <= mes < 12
uint dias_en_mes(uint mes) {
    uint dias[] = {
        // ene, feb, mar, abr, may, jun
        31, 28, 31, 30, 31, 30,
        // jul, ago, sep, oct, nov, dic
        31, 31, 30, 31, 30, 31
    };
    return dias[mes - 1];
}

// Ejercicio 7, 8, 9 y 10

// Clase Fecha
class Fecha {
  public:
    // Completar declaraciones funciones
    Fecha(int mes,int dia);
    int mes();
    int dia();
    void incrementar_dia();



    #if EJ >= 9 // Para ejercicio 9
    bool operator==(Fecha o);
    #endif

  private:
    //Completar miembros internos
    int _mes;
    int _dia;

};


Fecha::Fecha(int mes, int dia) {
    _mes = mes;
    _dia = dia;
}

int Fecha::dia(){
    return _dia;
};

int Fecha::mes(){
    return _mes;
}

// permitir que la fecha se pueda escirbir usando el metodo <<

ostream& operator<<(ostream& os, Fecha f) {
    os <<  f.dia() << "/" << f.mes();
    return os;
}


#if EJ >= 9
bool Fecha::operator==(Fecha o) {
    bool igual_dia = this->dia() == o.dia();
    bool igual_mes = this->mes() == o.mes();
    // Completar iguadad (ej 9)
    return igual_dia&&igual_mes;
}
#endif

void Fecha::incrementar_dia(){
    if (_dia == dias_en_mes(_mes)) {
        if (_mes < 11) {
            _mes++;
            _dia = 1;
        } else if (_mes == 11) {
            _mes = 0;
            _dia = 1;
        }
    }
    else{
        _dia++;
    }
}


// Ejercicio 11, 12

// Clase Horario
class Horario{
public:
    Horario(uint Hora,uint min);
    uint hora();
    uint min();
private:
    uint _hora;
    uint _min;
};

Horario::Horario(uint Hora, uint min) {
    _hora = Hora;
    _min = min;
}

uint Horario::hora(){
    return _hora;
}

uint Horario::min(){
    return _min;
}

ostream& operator<<(ostream& os, Horario h) {
os <<  h.hora() << ":" << h.min();
return os;
}





// Ejercicio 13

// Clase Recordatorio


// Ejercicio 14

// Clase Agenda
