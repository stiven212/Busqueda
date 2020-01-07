#include <iostream>

using namespace std;

#include<fstream>


void agregar(int a[], int n);
void buscar(int a[], int n, int dato);
void imprimir(int a[], int n);


int main()
{


    setlocale(LC_CTYPE,"Spanish");
    int n, dato;
    cout << "Ingrese el tamaño del arreglo:";
    cin >> n;
    int a[n];
    agregar(a,n);
    cout << "Ingrese el elemento a buscar:";
    cin >> dato;
    buscar(a,n,dato);
    cout<< endl;
    imprimir(a,n);





    return 0;
}

void agregar(int a[],int n){

    for(int i=0;i<n;i++){
        cout << "Ingrese elemento "<< i+1<<":"<< endl;
        cin >> a[i];

    }
}

void buscar(int a[], int n, int dato){

        bool c;
        c=false;
        ofstream archivo;
        archivo.open("Elementos.txt",ios::out);
        archivo<< "Elementos\n ";
        int y=0;
        while(y<n){
            archivo << a[y]<< " ";
            y++;
        }
        archivo << endl;
    for(int i=0;i<n;i++){





        if(a[i]==dato)
        {
            cout << "Elemento encontrado\n";
            cout << "Posicion "<< i+1;
            archivo << "Elemento encontrado\n";
            archivo << "Posicion "<< i+1;
            c=true;

        }

        }
        if(c==false)
        {
            cout << "Elemento no encontrado";
            archivo << "Elemento no encontrado";

        }
           archivo.close();
    }



void imprimir(int a[], int n)
{
    for(int i=0;i<n;i++){


        cout << "|"<< a[i]<< "|";
    }
}


