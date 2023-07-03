#include <iostream>
using namespace std;
bool NumeroPerfecto(int x);
int main(){
	int n ;
	cout<<"ingrese numero"<<endl;
	cin>>n;
	
if(NumeroPerfecto(n)==false){
	cout<<"No es perfecto";
}	
	else{
	cout<<"Es perfecto";
}	
	
	
	return 0;
}
bool NumeroPerfecto(int x){
int s;
bool flag=true;

	for(int i=1;i<x;i++){
 		if(x%i==0){
 			s+=i;
		 }
	 }
	 if(s==x){
	 	flag=false;
	 }
	return flag;
}