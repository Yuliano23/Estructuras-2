#include <iostream>
#include <cstring>
#include <conio.h>
using namespace std;

int seleccion, opcion, a, limite, suma, x, limite_2, suma_2, suma_3, y,suma_4, z,limite_3, limite_4, opcion_2, i, num, res, j;

int main(int argc, char** argv) {

cout<< "MENU PRINCIPAL\n\n";
cout<< "presione 1 para acceder  las opciones del while\n";
cout<< "presione 2 para acceder a las opciones del ciclo for\n";
cout<< "presione 3 para acceder a las opciones del array\n";
cout<< "presione 4 para acceder a las opciones del switch\n";
cout<< "presione 5 para acceder ala modulo de matrices\n";
cout<< "presione 6 para acceder al modulo de estructuras\n\n";
cout<< "SELECCIONE LA OPCION O EL MODULO DESEADO\n";
cin>> seleccion;
system("cls");

switch (seleccion)
{
	case 1:
	cout<< " MENU CICLO WHILE\n\n";
	cout<< "opcion 1: imprimir los numeros del 1 al 10\n";
	cout<< "opcion 2: sumar los numeros del 1 al 100\n";
	cout<< "opcion 3: sumar los numeros pares del 1 al 50\n";
	cout<< "opcion 4: sumar los numeros impares del 1 al 50\n\n";
	cout<< "ELIJA UNA OPCION\n";
	cin>> opcion;
	system("CLS");
	
	     case 2:
	     	cout<< "MENU CICLO FOR\n\n";
	     	cout<< "opcion 1: imprimir los numeros el 1 al 100\n";
	     	cout<< "opcion 2 imprimir las tablas de multiplicar de 1 al 20\n";
	     	cout<< "solucionar el factorial de un numero\n";
	     	cout<< "solucionar el numero de fibonacci\n";
	     	cout<< "ingrese 5 numeros para ser almacenados y mostrados en un array\n\n";
	     	cout<< "ELIJA UNA OPCION\n";
	     	cin>> opcion_2;
	     	system("cls");
	     	
	     	// OPCIONES DEL CICLO FOR
	     	switch (opcion_2)
	     	{
	     		case 1:
	     			cout<<"la lista de numeros es:\n";
	     			for (i=1;i<101;i++)
	     			{
	     				cout<<i<<endl;
					}
					break;
					
					case 2:
						num=0;
						res=0;
						cout<< "digite el numero del cual quiere mostrar la tabla\n",
						cin>> num;
						for (j=1;j<=20;j++)
						{
						res=num*j;
						cout<< num <<" x "<<j<<" = "<<res<<endl;
						}
						break;
			 }
	     	
	// OPCIONES DEL CICLO WHILE
	switch (opcion)
	{
		case 1:
			a=1;
			limite=11;
			cout<< "la lista de numeros es:\n\n";
	    	while (a<limite)
	    	{
	    	suma=suma+1;
	 		cout<<suma<<endl;
	 		a++;
	    	}
	    	break;
		
		    case 2:
		    	x=1;
		    	limite_2=11;
		    	while (x<limite_2)
		    	{
				suma_2=suma_2+x;
				x++;
		    	}
		    	cout<< "la suma de los numeros es "<<suma_2<<endl;
		     	break;
			
		    	case 3:
		    		y=2;
		    		limite_3=51;
		 		    while (y<limite_3)
		 		    {
		 		    	suma_3=suma_3+y;
		 		    	y=y+2;
					}
					cout<< "la suma de los numeros es "<<suma_3<<endl;
					break;
					
					case 4:
		 		        z=1;
		 		        limite_4=50;
		 		        while (z<limite_4)
		 		        {
		 		    	suma_4=suma_4+z;
		 		    	z=z+2;
				     	}
					    cout<< "la suma de los numeros es "<<suma_4<<endl;
					    break;
					    
					    default:
					    	cout<< "opcion no valida";
					    	break;
		
	}
	default:
		cout<< "opcion no valida\n";
		break;
}
system ("pause");
	
	
	


	return 0;
}
