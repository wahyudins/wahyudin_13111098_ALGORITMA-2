#include<iostream> //import iostream untuk type data,cin,cout dan sbb

using namespace std;  //pembungkus struktur coding/namespace


int main(){  //mulai menjalankan
	char a[10];  //membuat variable a dengan char
	int b=0;  //membuat variable b dengan tipe intger
	int c=0;  //membuat variable c dengan tipe intger
	
	cout<<"masukan karakter : "<<endl;  //menampilkan output berupa string
	
	for (int w=0; w<10;w++){  //membuat perulangan for
		cin>>a[w];  //memaasukan inputan keyboard dengan array w agar di ulang 
		c=c+1; //jika sudah disi maka variable c akan nambah +1 (berulang)
		
		if(a[w]=='A'){  //membuat condisional if supaya nilai char berupa "A" bisa d hitung
			b=b+1;  //jika benar maka nilai b akan menambah +1 dan strusnya (berulang)
		}
	}
	cout<<"jumlah karakter A   : "<<b<<endl;  //menampilkan output string dan isi nilai variable b
	cout<<"jumlah karakter nya : "<<c<<endl;	//menampilkan output string dan isi nilai variable c
}


//
// created by wahyudin in sttBandung organitation
