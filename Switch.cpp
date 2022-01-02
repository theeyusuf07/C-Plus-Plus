#include <iostream>
#include <string>
using namespace std;

int main(){
	//switch yapýsý 
	int gun;
	cout<<"Lutfen Gunu Sayi Seklinde Giriniz: ";
	cin>>gun;
	
	switch(gun){
		case 1:
			cout<<"Pazartesi";
			break;
		case 2:
			cout<<"Sali";
			break;
		case 3:
			cout<<"Carsamba";
			break;	
		case 4:
			cout<<"Persembe";
			break;
		case 5:
			cout<<"Cuma";
			break;
		case 6:
			cout<<"Cumartesi";
			break;
		case 7:
			cout<<"Pazar";	
			break;
		default:
			cout<<"Hatali islem yapildi";
	}
	cout<<endl<<"Islem Bitti";
	
	
	
	
}
