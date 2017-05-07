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
	
	for(int a=0; a<3; a++){
		for(int b=0; b<3; a++){
			cout<<"hasil baris "<<a<<"kolom "<<b<<" ="<< M[a][b] << "\n";
		}
	}
	
	cout<<"creted by wahyudin";
	return 0;
}
