#include<iostream>

using namespace std;

int main(){
	int M[2][2];
	int M1[2][2];
	int M2[2][2];	
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout<<"masukan data pertama baris "<<i<<" kolom  "<<j <<"  =  ";
			cin>> M1[i][j];
			cout<<"masukan data  kedua baris  "<<i<<" kolom  " <<j<<"  =  ";
			cin>> M2[i][j]; 
			M[i][j]=M1[i][j]+M2[i][j];
		}
	}
	
	
	for(int a=0; a<2; a++){
		for(int b=0; b<2; b++){
			cout<<"hasil baris "<<a<<" kolom "<<b<<" = "<< M[a][b] << "\n";
		}
	}
	
	return 0;;
}
