#include <iostream>
using namespace std;
void iterativa(int *resultado,int cantidad,int *numero){
    for(int i=0;i<cantidad;i++){
        *resultado=*resultado+(*numero+i);
    }
}
void recursiva(int *resultado,int cantidad,int *numero,int i){
    if(i<cantidad){
        *resultado=*resultado+(*numero+i);
        i++;
        recursiva(resultado,cantidad,numero,i);
    }
}
int main(){
    int cantidad=12;
    int arreglo1[cantidad]={1,2,3,4,5,6,7,8,9,10,11,12};
    int resultado = 0;
    iterativa(&resultado,cantidad,arreglo1);
    cout<<resultado<<endl;
    int resultado2 = 0;
    recursiva(&resultado2,cantidad,arreglo1,0);
    cout<<resultado2<<endl;
}
