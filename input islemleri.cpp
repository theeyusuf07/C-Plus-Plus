#include <iostream>
#include <string>
using namespace std;

int main(){
	
//INPUT ÝSLEMLERÝ	
/*	
	string isim;
	string soyisim;
	
	cout<<"isminizi giriniz: ";
	cin>>isim;
	
	cout<<"soyadinizi giriniz: ";
	cin>>soyisim;
	
	cout<<"Girilen Isim: "<<isim<<endl;
	cout<<"Girilen Soyisim: "<<soyisim;
	*/
	
//ÝNPUT SAYÝSAL ÝSLEMLER 
	
	int ilksayi,ikincisayi,topla,cikar,carp,bol,islem;
	cout<<"ilk sayiyi giriniz: ";
	cin>>ilksayi;
	cout<<"ikinci sayiyi giriniz: ";
	cin>>ikincisayi;
	
	topla=ilksayi+ikincisayi;
	cikar=ilksayi-ikincisayi;
	carp=ilksayi*ikincisayi;
	bol=ilksayi/ikincisayi;
	
	cout<<"toplami: "<<topla<<endl;
	cout<<"cikarma: "<<cikar<<endl;
	cout<<"carpma: "<<carp<<endl;
	cout<<"bol: "<<bol;

}
