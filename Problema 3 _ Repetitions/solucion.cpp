#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <stdlib.h>
 
using namespace std;
 
//int largoCadena(cadena);
 
 
int main(){
    
    char cadena[10000000];
    cin.getline(cadena,10000000,'\n');
    char lRep = cadena[0];
    int max=1,cantR=1;
    for(int i=1;i<=10000000;i++){
        if(cadena[i] == lRep){
            cantR++;
            if(cantR > max)
                max = cantR;
        }else if(cadena[i] == '\00'){
            break;
        }else{
            cantR = 1;
            lRep = cadena[i];
        }
    }
    cout<<max<<endl;
    
}