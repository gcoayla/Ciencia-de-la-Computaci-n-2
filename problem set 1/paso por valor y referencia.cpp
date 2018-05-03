#include <iostream>
using namespace std;
void imprir(int *numero){
    cout<<*numero<<endl;
}
void impri(int numero){
    cout<<numero<<endl;
}
int main(){
    int numero=5;
    impri(numero);
    imprir(&numero);
}
