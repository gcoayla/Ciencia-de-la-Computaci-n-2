#include <iostream>
using namespace std;
int normal(char matriz[]){
    int cont=0;
    while(matriz[cont]!=NULL){
        cout<<matriz[cont]<<endl;
        cont++;
    }
    return cont+1;
}
int punteros(char matriz[]){
    int cont=0;
    while(*(matriz+cont)!=NULL){
        cout<<*(matriz+cont)<<endl;
        cont++;
    }
    return cont+1;
}
int main(){
    char arreglo[8]={'a','a','a','a','a','a','a',NULL};
    string hola="hola";
    int nres=normal(arreglo);
    cout<<nres<<endl;
    int nres2=punteros(arreglo);
    cout<<nres2<<endl;
}
