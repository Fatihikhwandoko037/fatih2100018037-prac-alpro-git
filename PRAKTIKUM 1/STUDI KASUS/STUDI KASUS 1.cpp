#include <iostream>
using namespace std;

int main(){
	int pilih;
	float bonus, gaji, bulan, fl=22, fr=28;
	cout<<"Daftar Tim yang dibutuhkan"<<endl;
	cout<<"1. Fitur Login\n2. Fitur Responsif"<<endl;
	cout<<"Silakan pilih : ";
	cin>>pilih;

	switch(pilih){
		case 1:
			cout<<"Masukkan target bulan selesai : ";
			cin>>bulan;
			if(bulan<5){
				bonus=fl*0.06;
				gaji=fl+bonus;
				cout<<"Gajimu : "<<gaji<<" juta"<<endl;
			}else{
				cout<<"Gajimu : "<<fl<<" juta"<<endl;
			}
		break;
		case 2:
			cout<<"Masukkan target bulan selesai : ";
			cin>>bulan;
			if(bulan<5){
				bonus=fr*0.06;
				gaji=fr+bonus;
				cout<<"Gajimu : "<<gaji<<" juta"<<endl;
			}else{
				cout<<"Gajimu : "<<fr<<" juta"<<endl;
			}
		break;
		default:
		cout<<"Tim tidak tersedia"<<endl;
	}

	return 0;
}
