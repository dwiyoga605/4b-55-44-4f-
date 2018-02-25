#include <iostream>
using namespace std;

void getFibbonacciNumber(int value, int now, int prev){
	//sentinel, keluar dari loop recursive jika value == -1;
	if(value == -1){
		return;
	}
	//cetak nilai fibbonacci
	cout<<prev;
	//generate nilai fibbonacci selanjutnya
	int tmp = prev + now;
	//geser 'prev' satu nilai kedepan
	prev = now;
	//geser 'now' ke nilai fibbonacci yang telah digenerate
	now = tmp;
	//kurangi nilai 'value'; fungsi varabel 'value' adalah sebagai counter;
	value--;
	//cetak koma pada setiap iterasi kecuali pada nilai terakhir fibbonacci
	if(value != -1){
		cout<<",";
	}
	//callstack
	getFibbonacciNumber(value, now, prev);
}

int main(){
	getFibbonacciNumber(20, 1, 0);
}
