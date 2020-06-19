#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
 
int main(){
    
    int n,aux;
    cin>>n;
    vector<int> v;
    for(int i=0;i<=n-2;i++){
        cin>>aux;
        v.push_back(aux);
    }
    
    sort(v.begin(),v.end());
    
    if(v[0]==1){
    for(int i=0;i<=n-2;i++){
        if(v[i]+1 != v[i+1]) { cout<<v[i]+1; break;}
        
    }
    }else{
        cout<<"1";
    }
    
}