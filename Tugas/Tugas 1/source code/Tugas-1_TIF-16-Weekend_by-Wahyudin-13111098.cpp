#include <iostream>  //memasukan library c++ untuk "cout" dll.
#include <iomanip>	//memsukan library c++ untuk "setprecision" dll.


using namespace std; //membungkus strukture code 


int main(){  // mulai membuat main / awal logika
	
	int jmlmhs=0, lulus=0, tlulus;  //set variable type integer
	float IP, Total=0, Rata;  //set variable type float
	cout<<""<<endl;  //menampilkan baris kosong/ null tidak ada

	cout<<"\n";	//menampilkn tau membuat ganti baris
	cout <<"masukan nilai IP : ";  //tampil kalimat
	cin>>IP;			//tampil input 
	
	while ( IP >-999 ){  //mulai logika perulangan
		if( IP >= 0 && IP <= 4 ){  //membuat logika IF kondisi
			jmlmhs++;  //menghitung variable jmlmhs dengn increment
			Total = Total+IP;  //membuat hitung jumlah variable total
				if( IP>=2.75 && IP<=4 ){  //membuat kondisi IF 
			 		 lulus++;	//jika benr ini diproses dengan increment
					}
				if( IP<2.75 && IP==0 ){  // membuat kondisi lagi dengan IF
			 		 tlulus++;  // jika benar maka dproses dengan increment
					}				
			}
			else{  // jika yang IF paling atas salah maka ini d proses
			 	cout<<"maaf nilai yang anda masukan tidak sesuai"<<endl;  // maka tampil ini		 	
		}
			 cout <<"masukan nilai IP : ";   //dengan ini akan tampil berulangkali untuk input
			 cin>>IP;			//dengan ini akan tampil berulangkali untuk input
	}
		
cout<<endl;   //buat ganti baris atau kosong saja
cout<<"\n";		// membuat ganti baris
cout<<"======================================="<<endl;	//tampil
cout<<"           TUGAS 1 by WAHYUDIN         "<<endl;	//tampil
cout<<"======================================="<<endl;	//tampil
cout<<"\n";		//ganti baris
cout<<"\n";		//ganti baris
cout<<"Jumlah mahasiswa             = "<<jmlmhs<<endl;	//tampilkan kalimat dan nilai dari varible jmlmhs dari perulangan While
cout<<"Jumlah mahasiswa LULUS       = "<<lulus<<endl;		//tampilkan kalimat dan nilai dari varible lulus dari perulangan While
   int totallulus=jmlmhs-lulus;		//membuat varible baru untuk meanampung nilai total 
cout<<"Jumlah mahasiswa TIDAK LULUS = "<<totallulus<<endl;	//tampilkan kalimat dan nilai dari varible totalulus dari int totallulus
	Rata=Total/jmlmhs;  //membuat varible baru untuk meanampung nilai rata-rata
cout<<"Rata-rata IP Mahasiswa       = "<<setprecision(2)<<Rata<<endl;  //tampilkan kalimat dan variable dari Rata 

cout<<"\n";		//ganti baris
cout<<"\n";		//ganti baris
cout<<"======================================="<<endl;   //tampil
return main();		//kalau proses diatas sudah selesai maka ini akan kembali ke main();/atau mulai lagi input awal

}  //akhir 



//learn ALGORITMA dan PEMROGRAMAN II ::
