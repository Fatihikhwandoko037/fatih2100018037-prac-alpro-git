//#ifndef _jarak_h
//#define _jarak_h
#include<iostream>

using namespace std;

class Hitung{
	friend ostream& operator<<(ostream&,const Hitung&);
	friend istream& operator>>(istream&,Hitung&);
	public :
		Hitung();
		void hitung_jumlahnya(){jumlah=(a+b+c);}
	private :
		int a,b,c;
		int jumlah;
};
//#endif
