/* 17.	Se citeşte câte un caracter până la întâlnirea caracterului @.
Să se afişeze numărul literelor mari, numarul literelor mici şi
numărul cifrelor citite; care este cea mai
mare (lexicografic) literă mare, literă mică şi cifră introdusă.*/
#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;
bool citire = true;
int main(){
    char x;
    int litmici=0, litmari=0, nrcifre=0;
    char mare='A', mica='a';
    char ciframax='0';
    cout<<"Introduceti caractere: "<<endl;
    while(citire){
        cin>>x;
        if(x=='@')
            citire=false;
        if('0'<=x && x<='9'){
            nrcifre++;
            if(ciframax<x)
                ciframax=x;
        }
        if('a'<=x && 'z'>=x){
            litmici++;
            if(x>mica)
                mica=x;
        }
        if('A'<=x && 'Z'>=x){
            litmari++;
            if(x>mare)
                mare=x;
    }}
    cout<<"Numarul de cifre introduse a fost "<<nrcifre<<", numarul de litere mici "<<litmici<<", iar de litere mari "<<litmari<<"."<<endl;
    cout<<"Cea mai mare cifra a fost "<<ciframax<<", cea mai mare litera mica a fost "<<mica<<", iar cea mai mare litera mare "<<mare<<"."<<endl;
    return 0;
}
