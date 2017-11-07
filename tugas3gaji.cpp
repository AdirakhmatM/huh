#include <iostream>
using namespace std;

int main(){
	int gpkk,jk;
	int lbr,gt,pjk,gk;
	
	cout <<"Perhitungan Gaji Karyawan "<<endl;
	cout <<"Masukkan Gaji Pokok : Rp. ";cin >>gpkk;
	cout <<"Masukkan Jam Kerja : ";cin >>jk;
	lbr=jk-40;
	gt=(lbr*1.5+40)*gpkk;
	pjk=gt*0.15;
	gk=gt-pjk;
	
	cout <<"Hasil Perhitungan Gaji"<<endl;
	cout <<"Gaji Pokok	: Rp. "<<gpkk<<endl;
	cout <<"Jam Kerja 	: "<<jk<<endl;
	cout <<"Jam Lembur	: "<<lbr<<endl;
	cout <<"Gaji sebelum dipotong pajak : Rp. "<<gt<<endl;
	cout <<"Total Gaji 	: Rp. "<<gk;
}
