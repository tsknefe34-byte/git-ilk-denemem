#include <iostream>
#include <cmath>
using namespace std;
int main() {

int number,i, result;

cout <<"bir sayi girin"<<endl;
cin >> number ;

if (number<=1){
    cout<<"1den buyuk sayi girin lutfen"<<endl;
    return 0;
}

result=sqrt(number);
for (i=2; i<=result; i++){
   
    if(number%result==0){
        cout<<"bu bir asal sayi"<<endl;
    }
    else 
        cout<<"bu bir asal sayi degil"<<endl;
}


    return 0;
}











