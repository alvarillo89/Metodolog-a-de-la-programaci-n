#include <iostream>
#include <cstdlib> // rand, atoi
#include <ctime> // time

using namespace std;

// Genera un valor del intervalo [minimo,maximo]
int Uniforme(int minimo, int maximo)
{
   double u01= std::rand()/(RAND_MAX+1.0); // Uniforme01
   return minimo+(maximo-minimo+1)*u01;
}


void Generar(int *& v, int n, int max)
{
	int j, k, aux;
	
	for(int i = 0 ; i < n ; ++i)
		v[i] = Uniforme(1, max);
	
	for(int i = 0 ; i < n ; ++i) {
		j = Uniforme(0, n-1);
		k = Uniforme(0, n-1);
		aux = v[j];
		v[j] = v[k];
		v[k] = aux;
	}					
}

int Buscar(const int *v, int n, int dato, int pos_inicio)
{
   for (int i=pos_inicio;i<n;++i)
      if (v[i]==dato)
         return i;
   return n;
}

// Pre: el dato está

int* BuscarGarantizada(int *inicial, int dato)
{		
	while(true){
		if(*inicial == dato)
			return inicial;
		else
			inicial += 1;
	}	
}

void OrdenarInsercion(int* v, int n)
{
	int izda, i ;
	int desplazar;
	
	for(izda = 1 ; izda < n ; ++izda){
		desplazar = v[izda];
		for(i = izda ; i > 0 && desplazar < v[i-1] ; --i)
			v[i] = v[i-1];
		v[i] = desplazar; 
	}
}

int BusquedaBinariaRec (const int *vec, int izd, int der, int dato)
{
	int izda = izd, dcha = der;
	
	if(izda <= dcha){
		int centro = (izda+dcha)/2;
		if(vec[centro] < dato)
			BusquedaBinariaRec(vec, centro+1, dcha, dato);
		else if(vec[centro] > dato)
			BusquedaBinariaRec(vec, izda, centro-1, dato);
		else
			return centro;
	}
	else
		return -1;
}				

int BusquedaBinariaInterp (const int *vec, int n, int dato)
{
   int izq= 0, der= n-1;
   
   while (izq<=der) {
   int centro= izq+((dato-vec[izq])/(vec[der]-vec[izq]))*(der-izq);
   if (vec[centro] > dato)
      der= centro-1;
   else if (vec[centro] < dato)
            izq= centro+1;
         else return centro;
   }
   return -1; 
}


int main(int argc, char *argv[])
{
   if (argc!=3) {
      cerr << "Uso: " << argv[0] << " <número de datos> <máximo dato>" <<endl;
      return 1;
   }
   
   srand(time(0)); // Inicializamos generador de números

   int n= atoi(argv[1]);
   if (n<5) {
      cerr << "Debería especificar al menos 5 elementos" << endl;
      return 2;
   }
   else {
      
    	int *v;
		int max = atoi(argv[2]);
		int dato;
      
      v = new int[n+1];
      
      Generar(v,n,max);
      cout << "Generados: ";
      for (int i=0;i<n;++i)
         cout << v[i] << " "; 
      cout << endl;
      
		OrdenarInsercion(v,n);
      cout << "Ordenados: ";
      for (int i=0;i<n;++i)
         cout << v[i] << " "; 
      cout << endl;
      
      cout << "Introduzca un dato a buscar: ";
		cin >> dato;
		
		/* Primer tipo de busqueda:
		
		int pos_inicio = 0;
		int pos = Buscar(v, n, dato, pos_inicio);
		
		if (pos == n)
			cout << " Encontrado en: " << pos << endl;
		else 
			while (pos != n) {
				cout << " Encontrado en: " << pos << endl;
				pos_inicio = pos+1;
				pos= Buscar(v, n, dato, pos_inicio);
			}
		   
		*/
		
		v[n] = dato;
		int* inicio = v;
		int* pos = BuscarGarantizada(inicio,dato);
		
		if(pos == v+n)
			cout << " Encontrado en: " << pos-v << endl;
		else
			while(pos != v+n) {
				cout << " Encontrado en: " << pos-v << endl;
				inicio = pos+1;
				pos = BuscarGarantizada(inicio,dato);
		}
 
		cout << "Introduzca un dato a buscar binario: ";
		cin >> dato;
		// int posicion = BusquedaBinariaRec(v,0,n-1,dato);
		int posicion = BusquedaBinariaInterp(v,n,dato);
		if(posicion != -1)
			cout << " Encontrado en: " << posicion << endl;
		else
			cout << " Elemento no encontrado." << endl;

		delete[] v;      
   }
}
  
  
