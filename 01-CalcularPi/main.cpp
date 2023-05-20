#include<iostream>
#include<iomanip>
using namespace std;

double pi=1;
double n=1;
int ciclos=0;

double calcularPi(double pi){
//  3,141592/4 = 0.7853980
    while(pi<=(0.7853980) || pi>=(0.7853982)){
        if (n>0){
            n+=2;
            n*=-1;
        } else{
            n*=-1;
            n+=2;    
        }
        pi+=(1/n);
        ciclos ++;
    }
        pi*=4;

    return pi;
}


int main(){
    //Puede ser que tarde un rato.
    cout<<setprecision(7)<<calcularPi(pi);
    cout<<"\nEn "<<ciclos<<" ciclos";

    return 0;
}
