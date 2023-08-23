#include<iostream>
using namespace std;
void reverse(int i){
    if(i<1) return ;
	cout<<i<<" "; 
    reverse(i-1);
}
int main(){
	int i=10;
	reverse(i);
	return 0;
}
