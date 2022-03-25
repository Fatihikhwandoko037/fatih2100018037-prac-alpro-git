#include <iostream>
#include <conio.h>
using namespace std;
class Hitung{
	friend ostream& operator<<(ostream&, const Hitung&);
	friend istream& operator>>(istream&, Hitung&);
	
	public:
		Hitung();
		void hitung_jumlahnya(){jumlah = (X+Y+Z);}
	private:
		int X,Y,Z;
		int jumlah;
};

Hitung::Hitung(){
	cout<<"Program menghitung jumlah 3 integer\n";
	cout<<"Selamat berkarya\n";
}

istream& operator>>(istream& in, Hitung& masukkan){
	cout<<"Masukkan nilai X: ";
	in>>masukkan.X;
	cout<<"Masukkan nilai Y: ";
	in>>masukkan.Y;
	cout<<"Masukkan nilai Z: ";
	in>>masukkan.Z;
	return in;
}

ostream& operator<<(ostream& out, const Hitung& keluaran){
	out<<"Nilai X : "<<keluaran.X<<endl;
	out<<"Nilai Y : "<<keluaran.Y<<endl;
	out<<"Nilai Z : "<<keluaran.Z<<endl;
	out<<"Jumlah 3 integer diatas : "<<keluaran.jumlah<<endl;
	return out;
}

main(){
	
	Hitung X;
	cin>>X;
	X.hitung_jumlahnya();
	cout<<X;
	getch();
	return 0;
}
