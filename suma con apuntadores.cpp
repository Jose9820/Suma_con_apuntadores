#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

const int N=10;
int *ap_Arreglo;
double *ap_Suma;
double *ap_Promedio;

int main(){
 	int arreglo[N];
	double suma=0;
 	double promedio;
 	ap_Suma=&suma;
 	ap_Promedio=&promedio;
 	cout << "\nEste programa suma los elementos de un arreglo a traves de apuntadores\n\nArreglo: ";
 	srand(time(0));	
 	for (int i=0; i< N; i++){
  		arreglo[i]=1 + (rand()%100);
  		ap_Arreglo=&arreglo[i];
  		cout << *ap_Arreglo;
  		if (i < N-1){
  			cout << ", ";
		  }
	 	//aqui se suman los elementos
 		*ap_Suma+=*ap_Arreglo;
	 }
 	*ap_Promedio=*ap_Suma/N;
 	cout << "\n\nLa suma de los elementos es:  " << *ap_Suma << "\n";
 	cout << "\nEl promedio de la suma de los elementos es:  " << *ap_Promedio << "\n\n";
 	system("pause");
 	return 0;
}
