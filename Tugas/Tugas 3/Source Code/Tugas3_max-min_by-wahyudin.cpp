#include <iostream>  //import class iostream buat cin,cout,type data dan sbb

using namespace std;  //gunakan namesace std sbg pembungkus codingan



int main(){  //mulai menjalankan
	int max,n,i,min;  //
	int A[100]; //buat variable A dengan array berjumpalh 100 elemen bertype integer
	
	cout<<"masukan nilai : ";  //tampilkan string  
	cin>>n;  //buat input pada keyboard dengan variabe n
	
	for (i=0;i<n;i++){  //buat perulangan agar mengulang jumlah inputan
		cout<<"masukan nilai ke "<<i+1<<endl; //tampikan secara berulang string ini dan variable i+1 agar urutan
		cin>>A[i];  //masukan inputan variable A dengan mengisi array yang jumplahnya ditentukan i dari perulangan
	}  
	
	max=A[0];	//membuat insialisasi variable max sama dengan isi array index 0
	for(i=1;i<n;i++){  //buat perulangan untuk mengeluarkan isi array
		if(max<A[i]){  //jika array mulai dari index 0 adalah awal  nilai input
			max=A[i]; //isi variable max dengan inputan pertama atau index array 0
		} //secara berulang maka nilai max akan berubah sesuai besar kecilnya nilai
		if(min>A[i]){   //jika array mulai dari index 0 adalah awal  nilai input
			min=A[i];  //varaible min diisi nilai inputan pertama atau index array 0
		} //secara berulang maka nilai max akan berubah sesuai besar kecilnya nilai
	}
	cout<<"nilai max : "<<max<<endl;	//tampilkan string dan variable max
	cout<<"nilai min : "<<min<<endl;  //tampilkan string dan variable min
	
}


//created by wahyudin in sttbandung organitation
