#include<iostream>
using namespace std;
class Hesapla{
	public:
		int genislik;
		int yukseklik;
		int alan;
	void giris(){
		cout<<"Genislik degerini giriniz";
		cin>>genislik;
		cout<<"Yukseklik degerini giriniz";
		cin>>yukseklik;
	}
	void hesapla(){
		alan=yukseklik*genislik;
		cout<<alan;
	}
};

int main(){
	Hesapla hesap;
	hesap.giris();
	hesap.hesapla();
	return 0;
}
