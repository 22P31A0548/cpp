#include<iostream>
using namespace std;
int countdigits(int num){
	if(num==0)return 0;
	return 1+countdigits(num/10);
}
int main()
{
	int num=2456;
	cout<<countdigits(num);
	return 0;
}
