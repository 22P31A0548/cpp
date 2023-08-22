#include<iostream>
using namespace std;
class Square{
	private:
		int side;
	public:	
		Square(int s){
			this->side=s;
		}
		int GetArea(){
			return side*side;
		}
		void setside(int val){
			side=val;
		}
};
int main(){
	Square s1(15);
	Square s2(9);
	cout<<s1.GetArea()<<endl;
    s1.setside(10);
	cout<<s1.GetArea()<<endl;
	return 0;
}
