#include <iostream>
#include <string>
using namespace std;

int topla(int x,int y){
	int toplam=x+y;
	return toplam;
	
}

int main(){
	
	int sonuc = topla(5,-12);
	if(sonuc>0){
		cout<<"Bu sayi pozitif bir sayidir";
	}
	else if(sonuc==0){
		cout<<"Bu sayi sifira esittir";
	}
	else{
		cout<<"Bu sayi negatif bir sayidir";
	}
}


