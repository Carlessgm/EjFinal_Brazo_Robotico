#include <iostream>
#include "BrazoRobotico.h"

using namespace std;

int main(){
	BrazoRobotico b(0, 0, 0, 0);
	cout << "Posicion: (" << b.obtenerX() << ", " << b.obtenerY() << ", " <<
	       	b.obtenerZ() << ")\n";
	if(b.obtenerObjsuj() == 0)
		cout << "Objeto no cogido\n";
	else
		cout << "Objeto cogido\n";

	b.mover(1, 3, 2);

	cout << "Posicion: (" << b.obtenerX() << ", " << b.obtenerY() << ", " <<
                b.obtenerZ() << ")\n";

	b.coger();

	if(b.obtenerObjsuj() == 0)
                cout << "Objeto no cogido\n";
        else
                cout << "Objeto cogido\n";

	return 0;
}
