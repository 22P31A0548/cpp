#include<iostream>
using namespace std;
class Square{
	public:
		int side;
		Square(int s){
			this->side=s;
		}
		int GetArea(){
			return side*side;
		}
};
int main(){
	Square s1(12);
	Square s2(8);
	cout<<s1.GetArea()<<endl;
    s1.side=4;
	cout<<s.GetArea()<<endl;
	return 0;
}
