#include <iostream>
#include <cstdlib> // rand, atoi
#include <ctime> // time
#include <iomanip> // setw

using namespace std;

// Genera un valor del intervalo [minimo,maximo]
int Uniforme(int minimo, int maximo)
{
   double u01= std::rand() / (RAND_MAX+1.0); // Uniforme01
   return minimo + (maximo-minimo+1) * u01;
}

void Generar(int *v, int n, int max)
{
   for (int i=0;i<n;++i) {
      v[i]=i%max+1;
   }
   int pos1,pos2;
   for (int i=0; i<10*n; ++i) {
      pos1= Uniforme(0,n-1);
      pos2= Uniforme(0,n-1);
      int aux= v[pos1];
      v[pos1]= v[pos2];
      v[pos2]= aux;
   }
}

// FIXME 5: Parametrizar el método de ordenación. Generar el último listado con otro orden.
void OrdenarBurbuja (int vec[], int n)
{
   bool ordenado = false, modificado = false;
   int i;

   for (i=n-1; i>0 && !ordenado; --i) 
      for (int j=0; j<i; ++j)
         if (vec[j] > vec[j+1]) {
            int aux = vec[j];
            vec[j]  = vec[j+1];
            vec[j+1]= aux;
            modificado = true;
         }
      for (int k=i; k>0; --k)
         if(vec[k] < vec[k-1]) {
            int aux = vec[k];
            vec[k] = vec[k-1];
            vec[k-1] = aux;
            modificado = true;
         }
      if(!modificado)
         ordenado = true;
}
// FIXME 5: Añadir posibles formas de ordenación para parámetro de OrdenarBurbuja

void OrdenaPunteros (const int* v, int **p, int n)
{
   for (int i=0; i< n; ++i) {
      int minimo = i;
      for (int j=i+1; j<n; ++j)
         if(*p[minimo] > *p[j])
            minimo = j;
      int* aux = p[i];
      p[i] = p[minimo];
      p[minimo] = aux;
 }

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
      int max= atoi(argv[2]);
      if (max<5) {
         cerr << "Debería especificar un max de al menos 5" << endl;
         return 3;
      }
      int *v= new int[n];
      int **p = new int*[n];

      for(int i=0; i<n; ++i)
         p[i] = &v[i];
      
      Generar(v,n,max);
      
      OrdenaPunteros(v,p,n);
     
      cout << "Ordenados: ";
      for (int i=0; i<n; ++i)
         cout <<  setw(3) << *p[i] << " "; 
      cout << endl;

      
      cout << "Generados: ";
      for (int i=0; i<n; ++i)
         cout <<  setw(3) << v[i] << " "; 
      cout << endl;
      
      // FIXME 5: Cambiar la llamada para usar el parámetro
      OrdenarBurbuja(v,n);
      
      cout << "Ordenados: ";
      for (int i=0; i<n; ++i)
         cout <<  setw(3) << v[i] << " "; 
      cout << endl;

      cout << "Salto:     ";
      for (int i=0; i<n; ++i)
         cout <<  setw(3) << &v[i]-p[i] << " "; 
      cout << endl;


      
      //FIXME 4: Imprimir el salto en posiciones de cada elemento
      
      delete[] v;
      
   }
}
  
  