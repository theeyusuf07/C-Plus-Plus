#include <iostream>
#include <string>
using namespace std;

int main(){
	//DÖNGÜ VE DÝZÝLERÝN KULLANIMI
/*	
	string isimler[]={"Ali","Samet","Kemal","Cemil"};
	for(int i=0;i<4;i++){
		cout<<isimler[i]<<endl;
		
		
	}
	
	*/
	//kullanýcýdan sayý isteyip giricegi sayýyý sayý degiskenine atmak istesek 
	//ve kullanýcýdan girmek istedigi miktarý istesek ve biz bu sayýlarýn toplamýný yazdýrsak çýkan sonucu da ekrana yazdýrýyoruz
	
	
	int sayi;
	int toplam=0;
	cout<<"Girmek istediginiz sayi miktarini belirtiniz: ";
	cin>>sayi;
	int sayilar[sayi];
	for(int i=0;i<sayi;i++){
		cout<<i+1<<" .Sayisini Giriniz: ";
		cin>>sayilar[i];
		cout<<endl;
		
	}
	cout<<"Girdiginiz sayilar: \n";
	for(int i=0;i<sayi;i++){
		cout<<sayilar[i]<<endl;
		toplam+=sayilar[i]; //toplam=toplam+sayilar[i]
		
	}
	cout<<endl<<"Girdiginiz Sayilarin toplami: "<<toplam;
	
	
	
}
