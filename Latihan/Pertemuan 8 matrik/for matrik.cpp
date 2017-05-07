#include<iostream>

using namespace std;

int main(){
	int M[3][3];
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"masukan baris "<<i<<" kolom "<<j<<"\n";
			cout<<"==> ";
			cin>> M[i][j]; 
		}
	}
	
	cout<< "hasil dari baris 0 kolom 0 : " <<M[0][0]<<"\n";
	cout<< "hasil dari baris 0 kolom 1 : " <<M[0][1]<<"\n";
	cout<< "hasil dari baris 0 kolom 2 : " <<M[0][2]<<"\n";
	cout<< "hasil dari baris 1 kolom 0 : " <<M[1][0]<<"\n";
	cout<< "hasil dari baris 1 kolom 1 : " <<M[1][1]<<"\n";
	cout<< "hasil dari baris 1 kolom 2 : " <<M[1][2]<<"\n";
	cout<< "hasil dari baris 2 kolom 0 : " <<M[2][0]<<"\n";
	cout<< "hasil dari baris 2 kolom 1 : " <<M[2][1]<<"\n";
	cout<< "hasil dari baris 2 kolom 2 : " <<M[2][2]<<"\n";
	return 0;
}
