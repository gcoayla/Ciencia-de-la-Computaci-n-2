#include <iostream>
using namespace std;
void sumamatriz(int tamano,int *matriz1,int *matriz2,int *resultado){
    for(int i=0;i<tamano;i++){
        for(int j=0;j<tamano;j++){
            int cont=0;
            for(int z=0;z<tamano;z++){
                cont=cont+((*matriz1+((i*tamano)+z))*(*matriz2+((z*tamano)+j)));
            }
            *(resultado+((i*tamano)+j))=cont;
        }
    }
}
void imprimir(int tamano,int *numero){
    for(int i=0;i<tamano;i++){
        for(int j=0;j<tamano;j++){
            cout<<*(numero+((i*tamano)+j))<<"-";
        }
        cout<<endl;
    }
}
int  main(){
    int tamano=3;
    int matr1[tamano][tamano]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int matr2[tamano][tamano]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int resmatr[tamano][tamano]={
        {0,0,0},
        {0,0,0},
        {0,0,0}
    };
    sumamatriz(tamano,*matr1,*matr2,*resmatr);
    imprimir(tamano,*resmatr);
}
