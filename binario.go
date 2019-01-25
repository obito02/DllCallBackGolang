package main
// #include "libi.h"
import "C"
import (
	"fmt"

)
//export exportar
func  exportar()  {
	fmt.Println(int(C.hola()))
}

func main() {
	//f := C.intFunc(C.fortytwo)

	// Output: 42
}