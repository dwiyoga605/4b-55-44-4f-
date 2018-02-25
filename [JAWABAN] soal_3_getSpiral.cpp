#include <iostream>
//size makro untuk row
#define B 5
//size makro untuk column
#define K 5
using namespace std;

void getSpiral(int inputArray[B][K]){
	//i : start row; j : start col; m : end row; n : end col;
	int i = 0, j = 0, m = B, n = K;
	//konsepnya adalah menggeser indeks batas ketika angka sudah dicetak
	while((i<m)&&(j<n)){
		//atas (ke kanan)
		for(int k=j; k<n; k++){
			//cetak row ke-i kolom ke-k
			cout<<inputArray[i][k]<<" ";
		}
		//geser indeks start row 1 level ke bawah (karena nilai di row ini [row paling atas saat ini] sudah dicetak)
		i++;
		//kanan (turun)
		for(int k=i; k<m; k++){
			//cetak row ke-k, col ke-n-1 
			//dikurang 1 karena nilai inisialisasi n adalah inisialisasi dari length kolom array 
			//perhitungan length kolom array dimulai dari dari 1, sedangkan indeks array dimulai dari 0
			cout<<inputArray[k][n-1]<<" ";
		}
		//geser indeks end col 1 level ke kiri (karena nilai di kolom ini [kolom paling kanan saat ini] sudah dicetak)
		n--;
		//bawah (ke kiri)
		if(i<m){
			//nilai k = n-1 dikarenakan nilai n adalah inisialisasi dari nilai length col array
			//perhitungan length col array dimulai dari dari 1, sedangkan indeks array dimulai dari 0
			for(int k=n-1; k>=j; k--){
				//cetak row ke-m-1
				//dikurang 1 karena nilai inisialisasi m adalah inisialisasi dari length baris array
				//perhitungan length baris array dimulai dari dari 1, sedangkan indeks array dimulai dari 0
				cout<<inputArray[m-1][k]<<" ";
			}
			//naikan indeks end row 1 level ke atas (karena nilai di level ini [baris paling bawah saat ini] sudah dicetak
			m--;
		}
		//kiri (naik)
		if(j<n){
			//m dikurang 1 karena nilai inisialisasi m adalah inisialisasi dari length baris array
			for(int k=m-1; k>=i; k--){
				cout<<inputArray[k][j]<<" ";
			}
			//geser indeks start col 1 level ke kanan (karena nilai pada kolom paling kiri saat ini sudah dicetak)
			j++;
		}		
	}
	
}

int main(){
	int arr[B][K] = {
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15},
		{16,17,18,19,20},
		{21,22,23,24,25}
	};
	getSpiral(arr);
}
