#include<iostream>
using namespace std;
int a;
int work(int c,int b){
	for(a=min(c,b)/2;a>=2;a--){
	if(c%a==0&&b%a==0)
	cout<<a;	
	}
	return a;
}
int main(){
	int a,b,c;
 	cin>>c>>b;
 	a=work(c,b);
}
