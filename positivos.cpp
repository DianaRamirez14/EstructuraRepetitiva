// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	int can;
	int i;
	int may;
	int men;
	int suma1;
	int suma2;
	int t;
	may = 0;
	men = 0;
	i = 1;
	suma1 = 0;
	suma2 = 0;
	cout << "Ingrese la cantidad de numeros" << endl;
	cin >> can;
	while ((i<=can)) {
		cout << "Ingrese el numero: " << i << endl;
		cin >> t;
		if ((i==1)) {
			may = t;
			men = t;
		} else {
			if ((t>may)) {
				may = t;
				suma1 = may+suma1;
			}
			if ((t<men)) {
				men = t;
				suma2 = men+suma2;
			}
		}
		i = i+1;
	}
	cout << "La suma de los numeros menores es: " << suma2 << endl;
	cout << "La suma de los numeros mayores es: " << suma1 << endl;
	return 0;
}

