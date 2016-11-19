#include <iostream>
#include <fstream> // ifstream
#include <cstring>
using namespace std;


struct VecDin {
   int *datos;
   int usados;
	int reservados;
};


void ReSize(VecDin& v,int nuevo)
{
	if(nuevo > v.reservados)	
	{
		int min = nuevo;
	
		if(nuevo > v.usados)
			min = v.usados;
	
		int *aux = new int[nuevo];
		v.reservados = nuevo;
		for(int i = 0 ; i < min ; ++i)
			aux[i] = v.datos[i];

		delete[] v.datos;
		v.usados = nuevo;
		v.datos = aux;	
	}
	else
		v.usados = nuevo;
}

VecDin LeerVecDin(istream& flujo)
{
	VecDin v = {0,0,0};
	int dato;

	while(flujo >> dato)
	{
		ReSize(v, v.usados+1);
		v.datos[v.usados-1] = dato;
	}
	return v;
}

void Mostrar(const VecDin& v, ostream& flujo)
{
	for(int i = 0 ; i < v.usados ; ++i)
		flujo << v.datos[i] << " ";

	flujo << endl;	
}

void Liberar(VecDin& v)
{
	delete[] v.datos;
}

void Add(VecDin& v,int dato)
{
	if(v.usados < v.reservados)
	{
		ReSize(v, v.usados+1);
	}
	else 
	{
		ReSize(v, v.usados*2);
		ReSize(v, v.usados/2+1);
   }
	v.datos[v.usados-1] = dato;
}

void SeleccionRecursivo(int *v, int n)
{
	if(n > 1)
	{	
		int min  = 0;
		for(int i = 1 ; i < n ; ++i)
			if (v[min] > v[i])
				min = i;

		int aux = v[0];
		v[0] = v[min];
		v[min] = aux;
		
		n--;
		SeleccionRecursivo(v+1, n);
	}
}

void Ordenar(VecDin& v)
{
	SeleccionRecursivo(v.datos, v.usados);
}


int main(int argc, char *argv[])
{
   VecDin v= {0,0};
   
   if (argc==1)
      v= LeerVecDin(cin);
	else if((argc == 2) && ((strcmp(argv[1], "-s")) == 0))
	{
		v= LeerVecDin(cin); 
		Ordenar(v);
	}
	else if((argc == 3) && ((strcmp(argv[1], "-s")) == 0))
	{
		ifstream f(argv[2]);
      if (!f) {
         cerr << "Error: Fichero " << argv[2] << " no válido." << endl;
         return 1;
      }
      v= LeerVecDin(f);
		Ordenar(v);
	}
	else {
      ifstream f(argv[1]);
      if (!f) {
         cerr << "Error: Fichero " << argv[1] << " no válido." << endl;
         return 1;
      }
      v= LeerVecDin(f);
   }

   Mostrar(v,cout);
   Liberar(v); // Libera la memoria reservada
}  
