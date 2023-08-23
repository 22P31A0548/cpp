//22p31a0548
#include<iostream>
using namespace std;
void fun(int i){
    if(i>10) return ;
	cout<<i<<" "; 
    fun(i+1);
}
int main(){
	int i;
	fun(i);
	return 0;
}
