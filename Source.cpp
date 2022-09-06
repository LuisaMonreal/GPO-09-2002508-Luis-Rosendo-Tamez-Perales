
#include<iostream>
#include<conio.h>
#include<string.h>
#include<string>
using namespace std;
int main() {

	int opcion, numarticulo,preciounitario,iva,preciototal;
	string nombrevideojuego, clasificacion, caracteres, genero, consola, añolanzamiento;

		cout<<"\t !!!! BIENVENIDO A VIDEOLINE !!!!\n" << endl;


		cout << " -Favor de escribir el numero deseado entre las siguientes 6 opciones, dependiendo de lo que desea realizar: \n\n\n 1-Agregar Articulo--- \n\n\n 2-Modificar Articulo--- \n\n\n 3-Eliminar Articulo--- \n\n\n 4-Lista De Los Articulos Vigentes--- \n\n\n 5-Limpar La Pantalla--- \n\n\n 6-SALIR--- \n\n\n " << endl; cin>>opcion;

		switch (opcion) {
		
		case 1: //AGREGA UN ARTICULO


			cout << "Inserte un numero para su articulo: \n" << endl; cin >> numarticulo;
			cout << "Inserte nombre del videojuego: \n" << endl; cin >>nombrevideojuego ;
			cout << "Inserte su año de lanzamiento: \n" << endl; cin >>añolanzamiento ;
			cout << "Inserte su clasificacion: \n" << endl; cin >>clasificacion ;
			cout << "Inserte sus caracteristicas: \n" << endl; cin >>caracteres ;
			cout << "Inserte un genero: \n" << endl; cin >>genero ;
			cout << "Inserte una consola: \n" << endl; cin >>consola ;
			cout << "Inserte su precio unitario(El IVA se le subira automaticamente): \n" << endl; cin >>preciounitario ;

		iva=preciounitario * .16;
		preciototal= preciounitario + iva;


		cout << "\t ###Su articulo se ve asi: ###\n" << endl;

		cout << "Numero de articulo: \n" <<numarticulo<< endl; 
		cout << "Nombre del videojuego: \n" <<nombrevideojuego  << endl;
		cout << "Año de lanzamiento: \n" <<añolanzamiento  << endl;
		cout << "Clasificacion: \n" <<clasificacion  << endl;
		cout << "Caracteristicas: \n" <<caracteres  << endl;
		cout << "Genero: \n" <<genero  << endl;
		cout << "Consola: \n" << consola << endl;
		cout << "Precio(Con el iva ya incluido): \n\n\n" <<preciototal  << endl;
			return main();

			break;
		case 2:// MODIFICARA UN ARTICULO
			break;
		case 3://ELIMINARA UN ARTICULO
			break;
		case 4://MOSTRAR ARTICULO DESEADO
			break;
		case 5:// LIMPIARA LA PANTALLA

			system("cls");

			return main();
			break;
		case 6:// SALDRA DEL PROGRAMA
			break;
		default: 
			cout << "\t {{{{{{EL NUMERO ESCRITO NO ESTA EN MIS OPCIONES :( , FAVOR DE ELEGUIR UNO DE LOS 6 NUMEROS EN PANTALLA}}}}}}\n\n\n" << endl;
		
		
			return main(); break;


		}




		
}
