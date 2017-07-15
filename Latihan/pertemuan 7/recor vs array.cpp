#include<iostream>

using namespace std;

typedef struct{
	string nim;
	string nama;
	string ipk;
} mahasiswa;

int main(){
	
	int N;
	cin>>N;
	
	mahasiswa mhs[N];
	for(int i=0; i<N; i++){
		cin>>mhs[i].nim;
		cin>>mhs[i].nama;
		cin>>mhs[i].ipk;
	}
	for(int i=0; i<N; i++){
	cout<<mhs[i].nim<<mhs[i].nama<<mhs[i].ipk<<endl;
	}
	
	return 0;
}
