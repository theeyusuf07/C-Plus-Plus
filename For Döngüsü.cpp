#include <iostream>
#include <string>
using namespace std;

int main(){
	//FOR DÖNGÜSÜ
/*	

	// i 0 dan baþlasýn 10 a kadar tekrar etsin bu sürece boyunca bir bir artsýn
	for(int i=0;i<10;i=i+1){
		if (i%2==0){
			cout<<i<<"bir cift sayidir"<<endl;
		}else{
			cout<<i<<"bir tek sayidir"<<endl;
		}
	}
	
	*/
	
	//kullanýcý bir sayý girsin faktöriyelini alalým
	
	int sayi;
	int toplam=1;
	cout<<"Faktoriyelini almak istediginiz sayiyi giriniz: ";
	cin>>sayi;
	for(int i=1;i<=sayi;i++){
		toplam=toplam*i;
		
		
	}
	cout<<endl<<"Giridiginiz sayinin faktoriyeli: "<<toplam;
}
