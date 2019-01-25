#include <stdio.h>
#include "interface.h"

int prueba(){
 return 895;
}

int main()
{
intFunc afunc = prueba;
asignar(afunc);
 exportar();
   return 0;
}

//WHEN YOUR CREATE DLL, methods epxportd is asingar(callbackinterface), exportar and many other methods you add.
