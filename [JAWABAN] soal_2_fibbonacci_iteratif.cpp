#include <iostream>
using namespace std;

void getFibbonacciNumber(int value){
	//inisialisasi
	int now = 1, prev = 0, tmp;

	//looping sejumlah nilai fibbonacci yang diinginkan
	for(int i=0; i<=value; i++){
		//cetak nilai fibbonacci ke-i
		cout<<prev;
		//generate nilai fibbonacci selanjutnya
		tmp = now + prev;
		//geser 'prev' satu nilai kedepan
		prev = now;
		//geser 'now' ke nilai fibbonacci yang telah digenerate
		now = tmp;
		
		//cetak koma pada setiap iterasi, kecuali pada nilai fibbonacci terakhir
		if(i != value){
			cout<<",";
		}
	}
}

int main(){
	getFibbonacciNumber(20);
}
