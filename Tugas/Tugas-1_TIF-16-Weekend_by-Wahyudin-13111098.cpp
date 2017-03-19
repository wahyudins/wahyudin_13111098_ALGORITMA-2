#include <iostream>


using namespace std;


int main(){
	
	int jmlmhs=0, mhsl=0, mhstl;
	float IP, Total=0, rata;

	cout <<"masukan nilai IP : ";
	cin>>IP;			
	
	while ( IP >-999 ){
		if( IP>=0 && IP<=4 ){
			jmlmhs++;
			Total = Total+IP;
				if( IP>=2.75 ){
					mhsl++;
				}
		else{
				mhstl++;
			}
		}
		cout<<"masukan nilai IP : ";
		cin>>IP;
	}
		
cout<<endl;
cout<<"jumlah mahasiswa = "<<jmlmhs<<endl;
cout<<"jumlah mahasiswa LULUS = "<<mhsl<<endl;
cout<<"jumlah mahasiswa td LULUS = "<<mhstl<<endl;	
	rata=Total/jmlmhs;
cout<<"rata-rata IP = "<<rata;
return 0;

}
