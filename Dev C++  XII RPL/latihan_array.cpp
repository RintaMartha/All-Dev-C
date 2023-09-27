#include <iostream>
//#include <array>
using namespace std;
int main (){
	int arrayNilai[5] = {1,2,3,4,5};

	for(int &nilai: arrayNilai): {
		cout<<"adrress"<< &nilai<<"nilainya"<<nilai<<endl;
		nilai=1;
	}
	cout<<endl;
	
	for(int &nilaiRef:arrayNilai){
			nilaiRef *=2
			
	cout<<endl;
	for(int &nilaiRef : arrayNilai){
		cout<<"adrress: "<<&nilaiRef<<"nilai: " nilaiRef << endl;
	}	
	cin.get()
	return 0;
}
