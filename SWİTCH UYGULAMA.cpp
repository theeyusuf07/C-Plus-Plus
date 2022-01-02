#include <iostream>
#include <string>
using namespace std;

int main(){
	//SWÝTCH UYGULAMA
//Kullanýcý iki sayý girer ve hangi iþlemi yapmak istiyorsanýz 
//deriz 1 e basarsa toplama 2 çýkarma
	
	int sayibir,sayiki,tercih;
	cout<<"Sayi biri giriniz: ";
	cin>>sayibir;
	cout<<"Sayi ikiyi giriniz: ";
	cin>>sayiki;
	cout<<"Hangi islemi yapmak istiyorsunuz: "<<endl;
	cout<<"Toplama islemi icin bire basiniz"<<endl<<"Cikarma islemi icin ikiye basiniz"<<endl;
	cin>>tercih;
	switch(tercih){
		case 1:
			cout<<"Toplama islemi sonucu: "<<sayibir+sayiki;
			break;
		case 2:
			cout<<"Cikarma islemi sonucu: "<<sayibir-sayiki;
			break;
		default:
			cout<<"Hatali Tercih";
		
	}
	
	
}
