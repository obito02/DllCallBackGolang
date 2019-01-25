#include "libi.h"
intFunc dinamico;
 int asignar(intFunc f)
 {
		dinamico =f;
 }

int hola(){
return dinamico();
}