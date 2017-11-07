#include <iostream>
using namespace std;

int main(){
	int x;
	
	cout <<"Masukkan Nilai : ";cin >>x;
	
	if (x>0){
		cout <<"Nilai positif";
	}else if (x<0){
		cout <<"Nilai negatif";
	}else {
		cout <<"Nilai nol !!";
	}
}
