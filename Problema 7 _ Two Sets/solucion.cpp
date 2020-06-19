#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() {
  long int n, sumaC;
  int largoConjunto1,largoConjunto2, sumaCjto1, sumaEsperada;
  cin>>n;
 
  sumaC = n*(n+1)/2;
 
  if(sumaC%2 == 0){
 
    sumaEsperada = sumaC/2;
 
    cout<<"YES"<<endl;
 
    largoConjunto1 = (-1 + sqrt(1-(4*-sumaC)))/2;
 
    largoConjunto2 = n-largoConjunto1;
 
    sumaCjto1 = largoConjunto1*(largoConjunto1+1)/2;
 
    cout<<largoConjunto1<<endl;
 
    if(sumaCjto1 == sumaEsperada){
      
      for (int i=1;i<=largoConjunto1;i++){
        cout<<i<<" ";
      }
      cout<<endl;
 
      cout<<largoConjunto2<<endl;
      for (int i=largoConjunto1+1;i<=largoConjunto2+largoConjunto1;i++){
        cout<<i<<" ";
      }
      cout<<endl;
    }else{
 
      int j = 0;
 
      while(1){
        if(j == 0){
          j = largoConjunto1;
        }else{
          j--;
        }
        if(sumaEsperada-(sumaCjto1-j) == n){
          break;
        }
      }
 
      for(int i=1;i<j;i++){
        cout<<i<<" ";
      }
      for(int i=j+1; i<= largoConjunto1;i++){
        cout<<i<<" ";
      }
      cout<<n<<endl;
 
      cout<<largoConjunto2<<endl;
 
      cout<<j<<" ";
      for (int i=largoConjunto1+1;i<n;i++){
        cout<<i<<" ";
      }
      cout<<endl;
    }
 
 
  }else{
    cout<<"NO"<<endl;
  }
}