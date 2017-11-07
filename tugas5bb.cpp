#include <iostream>

using namespace std;

int main(){
	double tinggi, berat;
	
	cout <<"Perhitungan berat badan\n";
	cout <<"Masukkan berat badan : ";cin >>berat;
	cout <<"Masukkan tinggi badan : ";cin >>tinggi;
	
	cout <<"Hasil \n";
	cout <<"Berat badan : "<<berat<<endl;
	cout <<"tinggi badan : "<<tinggi<<endl;
	
	if (berat<tinggi/2.5){
		cout <<"Underweight";
	}else if (tinggi/2.3<berat){
		cout <<"Overweight";
	}else if (tinggi/2.5 <=berat <=tinggi/2.3){
		cout <<"Normal!!";
	}
}
