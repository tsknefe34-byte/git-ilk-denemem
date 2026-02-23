#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;
int main() {

srand(time(0)); 

  int number, gizliSayi = rand() % 20 + 1;

  cout << "Bilgisayar 1-20 arasi bir sayi tuttu." << endl;
  cout << "\nSayiyi tahmin edin: ";

  number=21;

  while(number!=gizliSayi){

      cin >> number;

      if(number<gizliSayi){
          cout << "Daha buyuk bir sayi gir: ";
      }
      else if (number>gizliSayi)
      {
          cout<<"Daha kucuk bir sayi gir: ";
      }
      else {
          cout << "\nTebrikler sayiyi dogru buldun";
      }
  }
         
    return 0;
}