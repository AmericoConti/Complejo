// archivo complejo.h
// declaración de la clase complejo
#ifndef __COMPLEJO_H__
#define __COMPLEJO_H__
#include <iostream.h>
class complejo {
  private:
    double real;
    double imag;
  public:
    // Constructores
    complejo(void);
    complejo(double, double im=0.0);
    complejo(const complejo&);
    //  para dar valores (SetThings)
    void SetData(void);
    void SetReal(double);
    void SetImag(double);
    // para obtener valores (GetThings)
    double GetReal(void){return real;}
    double GetImag(void){return imag;}
    // Sobrecarga de operadores aritméticos
    complejo operator+ (const complejo&);
    complejo operator- (const complejo&);
    complejo operator* (const complejo&);
    complejo operator/ (const complejo&);
    // Sobrecarga del operador de asignación
    complejo& operator= (const complejo&);
    // Sobrecarga de operadores de comparación
    friend int operator== (const complejo&, const complejo&);
    friend int operator!= (const complejo&, const complejo&);
    // Sobrecarga del operador de inserción en el flujo de salida
    friend ostream& operator<< (ostream&, const complejo&);
};
#endif
