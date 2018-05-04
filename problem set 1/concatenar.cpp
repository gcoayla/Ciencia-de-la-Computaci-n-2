#include <iostream>
using namespace std;
int punteros(char matriz[]){
    int cont=0;
    while(*(matriz+cont)!=NULL){
        cont++;
    }
    return cont;
}
void concatenar(char s[],char t[]){
    int t1=punteros(s);
    int t2=punteros(t);
    for(int i=t1;i<(t2+t1);i++){
        s[i]=t[i-t1];
    }
    s[t2+t1]=NULL;
}
int main(){
    char s[]="hola ";
    char t[]="como estas";
    concatenar(s,t);
    cout<<s;
}

