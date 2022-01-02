#include <iostream>
#include <string>
using namespace std;

void selamVer(){
	cout<<"Kullanici sisteme girdi"<<endl;
	
}
void anasayfayagotur(){
	cout<<"Kullanici anasayfaya goturuluyor"<<endl;
}
void anasayfa(){
	cout<<"Kullanici anasayfadadir"<<endl;
}

int main(){
	//Fonksiyonlara Giris
	//Fonksiyonlar birden fallza islemi tekrar tekrar yazmamýzý engelliyor
	//Fonksiyonlar int main in ustunde tanýmlanýr ve parntez isareti onun fonk oldugunu belirtir
	
	anasayfa();
	selamVer();
	anasayfayagotur();
	
	
	
}

