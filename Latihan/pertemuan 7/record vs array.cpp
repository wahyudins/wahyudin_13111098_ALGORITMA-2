#include<iostream>

using namespace std;

typedef struct{
	string nim;
	string nama;
	string ipk;
} mahasiswa;

int main(){
	int a=1;
	int N;
	cin>>N;
	
	mahasiswa mhs[N];
	for(int i; i<N; i++){
		cout<<"data ke : "<<i+1<<endl;
		cin>>mhs[i].nim;
		cin>>mhs[i].nama;
		cin>>mhs[i].ipk;
	}
	
	cout<<"=========================="<<endl;
	cout<<"| NIM   |  NAMA  |  IPK  |"<<endl;
	cout<<"=========================="<<endl;
	
	
	for(int i=0; i<N; i++){
	cout<<"| "+mhs[i].nim<<" |"+mhs[i].nama<<" |"+mhs[i].ipk<<"  |"<<endl;
	}
	
	return 0;
}
