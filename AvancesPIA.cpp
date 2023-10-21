// AvancesPIA	Diego Gerardo Castro Garcia		Matricula 1860127 

#include <iostream>
#include<string>

using namespace std;
struct Clientes
{
	string Nombre, Fecha;
	int Ticket;
};



int main()
{
	Clientes Restauran[3];
    int op;
	do
	{
		cout << "MENU" << endl;
		cout << "1. Alta de Orden \n2. Modificar Orden \n3. Eliminar o Cancelar Orden \n4. Lista de Orden  \n5. Limpiar Pantalla \n6. Salir" << endl;
		cin >> op;
		switch (op)
			{
			case 1: 
				for (int i = 0; i < 3; i++)
				{
					printf("Nombre del Vendedor \n");
					cin.ignore();
					getline(cin, Restauran[i].Nombre);
					
					printf("Ticket \n");
					scanf_s("%d", &Restauran[i].Ticket);

					printf("Fecha \n");
					cin.ignore();
					getline(cin, Restauran[i].Fecha);
				}
				break;
			case 2:
				printf("Modificar Orden,	En proceso...\n\n");
				break;
			case 3:
				printf("Eliminar o Cancelar,	En proceso...\n\n");
				break;
			case 4:
				for (int i = 0; i < 3; i++)
				{
					printf("Nombre: %s \n", Restauran[i].Nombre.c_str());
					printf("Ticket: %d \n", Restauran[i].Ticket);
					printf("Fecha: %s \n", Restauran[i].Fecha.c_str());
					printf("__________________\n");
				}
				break;
			case 5:
				system("cls");
				break;
			case 6:
				exit(1);
				break;
			default: 
				op = 7;
				cout << "Opcion invalida, Ingrese otro valor" << endl;
				break;
			}
	} while (op>=1 || op<=6);
	
}