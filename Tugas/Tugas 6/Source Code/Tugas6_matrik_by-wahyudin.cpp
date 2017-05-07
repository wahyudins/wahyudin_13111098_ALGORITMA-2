#include<iostream>

using namespace std;

int main(){
	int M[2][2];
	int M1[2][2];
	int M2[2][2];	
	
	 cout<<" welcome to my codee !!"<<endl;
	 cout<<" silahkan masukan data matrik nya !!"<<endl;
	 cout<<"\n"<<endl;
	 cout<<"\n"<<endl;
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout<<"masukan data pertama baris "<<i<<" kolom  "<<j <<"  =  ";
			cin>> M1[i][j];
			cout<<"masukan data  kedua baris  "<<i<<" kolom  " <<j<<"  =  ";
			cin>> M2[i][j]; 
			M[i][j]=M1[i][j]+M2[i][j];
		}
	}
	cout<<endl;
	cout<<endl;
	cout<<"\n"<<endl;
	cout<<"hasil data anda !!  "<<endl;
    cout<<" .................. "<<endl;
	cout<<" | K/B |  0  |  1 | "<<endl;
	cout<<" '''''''''''''''''' "<<endl;
	for(int a=0; a<2; a++){
		cout<<" |  "<<a<<"  |  ";
		for(int b=0; b<2; b++){
			cout<<a<< M[a][b] << " | ";
		}
		cout<<"\n";
	}
	cout<<" '''''''''''''''''' ";
	cout<<" thanks"<<endl;
	cout<<" \n"<<endl;
	cout<<"======= created by wahyudin ========";
	cout<<" \n"<<endl;
	return 0;;
}
