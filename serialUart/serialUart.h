#include <stdint.h>
#include "../incFiles/stm32f103x6.h"

void inicializarUart(void);
void enviarCaracter(uint8_t caracter);
void nuevaLinea(void);
void enviarPalabra(uint8_t cadena[]);
uint8_t existeCaracter(void); // prototipo de la funcion existeCaracter

/*
Desarrollar el prototipo de las funciones: 
existeCaracter()
leerCaracter()
*/