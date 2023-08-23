#include<iostream>
using namespace std;
int fact(int i){
    if(i==1) return 1;
    return i*fact(i-1);
    cout<<i*fact(i-1);
    fact(i+1);
}
int main(){
	int i;
	cin>>i;
	cout<<fact(i);
	return 0;
}
