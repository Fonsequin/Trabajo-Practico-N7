#include <iostream> // Solicitar biblioteca
#include <string.h> // Solicitar biblioteca

using namespace std;

int main()
{
	string nombre; // Variable de la palabra
	int cantidad;
	cout << "Este programa lee una palabra o frase dada vuelta" << endl;
	cout << "Ingrese la palabra o frase: ";
	getline(cin,nombre);
	cout << endl;
	cantidad = nombre.length();
	for(int i = 0; i < cantidad; i++) // Sentencia de ciclo
	{
		cout << "-" << nombre.at(i); // Mostrar en pantalla la palabra dada vuelta
	}
	return 0;
}

