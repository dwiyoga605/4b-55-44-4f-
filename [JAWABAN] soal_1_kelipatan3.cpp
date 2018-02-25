#include <iostream>
using namespace std;

//Asumsi fungsi ini adalah ketika nilai parameter 'value' yang dipassing ke fungsi 'deretBilangan' selalu di dalam rentang signed integer
void deretBilangan(int value){
	//inisialisasi
	int iterator = 3;
	//variabel value merupakan jumlah iterasi (banyaknya angka kelipatan 3 yang diminta)
	while(value--){
		//jika iterator modulo 5 sama dengan 0 dan iterator modulo 6 == 0
		if((iterator % 5 == 0)&&(iterator % 6 == 0)){
			cout<<"\"KUDO\"";
		//jika iterator modulo 5 sama dengan 0
		} else if(iterator % 5 == 0){
			cout<<"\"KU\"";
		//jika iterator modulo mod 6 sama dengan 0
		} else if(iterator % 6 == 0){
			cout<<"\"DO\"";
		//jika iterator tidak termasuk dari ketiga kondisi sebelumnya maka cetak angka kelipatan 3 saat ini
		} else{
			cout<<iterator;
		}
		
		//cetak koma pada setiap iterasi kelipatan 3 dan jangan cetak saat sampai di iterasi terakhir
		if(value != 0){
			cout<<",";			
		}
		
		//bergerak ke nilai kelipatan 3 selanjutnya
		iterator += 3;
	}
}

int main(){
	deretBilangan(20);
}
