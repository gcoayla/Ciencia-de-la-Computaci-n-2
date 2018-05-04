#include <iostream>
using namespace std;
int normal(char matriz[]){
    int cont=0;
    while(matriz[cont]!=NULL){
        cout<<matriz[cont]<<endl;
        cont++;
    }
    return cont;
}
int punteros(char matriz[]){
    int cont=0;
    while(*(matriz+cont)!=NULL){
        cout<<*(matriz+cont)<<endl;
        cont++;
    }
    return cont;
}
int main(){
    char arregloo[]="Hola como estas";
    int nres=normal(arregloo);
    cout<<nres<<endl;
    int nres2=punteros(arregloo);
    cout<<nres2<<endl;
}
