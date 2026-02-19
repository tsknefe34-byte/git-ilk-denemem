#include <iostream>
#include <cmath>
using namespace std;
int main() {

int number,i, result,control ;

cout << "bir sayi girin\t";
cin >> number ;

if (number<=1){
    cout<<"1den buyuk sayi girin lutfen"<<endl;
    return 0;
}

result=sqrt(number);
for (i=2; i<=result; i++){

    if(number%i==0){
        control=2;
    }
    else{
        control=1;
    }
}

if (control==2)
    cout<<"bu bir asal sayi degil"<<endl;
else
    cout<<"bu bir asal sayi"<<endl;

    return 0;
}











