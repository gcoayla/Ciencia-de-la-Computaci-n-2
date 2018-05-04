#include <iostream>
using namespace std;
int punteros(char matriz[]){
    int cont=0;
    while(*(matriz+cont)!=NULL){
        cont++;
    }
    return cont;
}
void pasarnormal(char t[],char s[], int tamano){
    for(int i=0;i<tamano;i++){
        s[i]=t[i];
    }
}
void pasarpunteros(char *t,char *s,int tamano){
    for(int i=0;i<tamano;i++){
        *(s+i)=*(t+i);
    }
}
int main(){
    char t[]="hola";
    int tamano=punteros(t);
    char s[tamano];
    pasarpunteros(t,s,tamano);
    cout<<s<<endl;
}
