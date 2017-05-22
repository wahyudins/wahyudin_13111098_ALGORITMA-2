#include<iostream>

using namespace std;

int main(){
	int a,b=0,c,d=0,e,i=0,f;
	cout<<"masukan jumlah array: "<<endl;
	cin>>a;
	int arr[a];
	int g[a];
		cout<<"masukan data : "<<endl;
	for(i;i<a;i++){
		cin>>arr[i];
		
	}
	
	cout<<"cari data anda: "<<endl;
	cin>>f;
	for(i=0;i<a;i++){
		if(arr[i]==f){
			b=b+1;
			c=f;
		}
		else{
			d=d+1;
			g[i]=arr[i];
		}
	}
	
	cout<<"============================="<<endl;
	cout<<"jumlah yang ditemukan   : "<<b<<endl;
	cout<<"data anda yang ditemukan: "<<c<<endl;
	cout<<"\n"<<endl;
	cout<<"jumlah yang beda    : "<<d<<endl;
	for(int j=0;j)
	cout<<"data anda yang beda : "<<g[]<<endl;
	cout<<"============================="<<endl;
	
}
