#include <iostream>
using namespace std;

int main(){
	int w,x,y;
	
	cout <<"Perhitungan Selisih Nilai Absolute"<<endl;
	cout <<"Masukkan Nilai X	: ";cin>>x;
	cout <<"Masukkan Nilai Y	: ";cin>>y;
	
	if (x>y){
		w=x-y;
	}else if (y>x){
		w=y-x;
	}
	cout <<"Hasil : "<<w;
}
