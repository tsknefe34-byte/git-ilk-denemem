#include <iostream>
#include <cmath>
using namespace std;
int main() {

int number,i, result,control,a;
cout<<"bir sayi girin";
cin>>number;


for(i=2; i<=number; i++){
    control=1;
    for (a=2; a<=sqrt(i); a++){
        
        if (i%a==0){
            control=2;
            break;
        }
    }
        if (control==1){
            cout<<i<<" ";
        }
    
        
        
    
        
    }
         
    return 0;
}











