#include <iostream>

using namespace std;

typedef struct {
	string hari;
	string bulan;
	int tahun;
} tanggal;

typedef struct {
	int jam;
	int menit;
	int detik;
} jam;

typedef struct {
	int noKA;
	string kotaAsalKA;
	jam jamBerangkat;
	tanggal tanggalBerangkat;
	string kotaTujuanKA;
	jam jamTiba;
	tanggal tanggalTiba;
}jadwalKA;

int main(){
	jadwalKA jadwalKeretaApi;
	
	// inisial jadwal
	jadwalKeretaApi.noKA=04;
	jadwalKeretaApi.kotaAsalKA="bandung";	
	//inisial berangkat
	jadwalKeretaApi.jamBerangkat.jam=10;
	jadwalKeretaApi.jamBerangkat.menit=30;
	jadwalKeretaApi.jamBerangkat.detik=50;
	//inisial tiba
	jadwalKeretaApi.tanggalTiba.hari="senin";
	jadwalKeretaApi.tanggalTiba.bulan="april";
	jadwalKeretaApi.tanggalTiba.tahun=2017;
	
	//menampilkan isi var dari record 
	cout<<"terimakasih inilah jadwal KA anda :: "<<endl;
	cout<<endl;
	cout<<"Nomor KA     : "<<jadwalKeretaApi.noKA<<endl;
	cout<<"Kota Asal KA : "<<jadwalKeretaApi.kotaAsalKA<<endl;
	
	//menampilkan isi var dari record 
	cout<<endl;
	cout<<"keberangkatan !!"<<endl;
	cout<<"jam   : "<<jadwalKeretaApi.jamBerangkat.jam<<":"
       <<jadwalKeretaApi.jamBerangkat.menit<<":"
		 <<jadwalKeretaApi.jamBerangkat.detik<<endl;
	
	//menampilkan isi var dari record 
	cout<<endl;
	cout<<"Tiba  !!"<<endl;
	cout<<"hari  : "<<jadwalKeretaApi.tanggalTiba.hari<<endl; 
	cout<<"bulan : "<<jadwalKeretaApi.tanggalTiba.bulan<<endl;
	cout<<"tahun : "<<jadwalKeretaApi.tanggalTiba.tahun<<endl;
	
	return 0;
}
