#include<iostream>
using namespace std;
class qwerty{
		public:
			int x;
			int y;
			void print(int a,int z);
			void init(int b);
	};
//void qwerty::print(int a,int b){
//	
//}
//void qwerty::init(int b){
//	x=b;

qwerty test(qwerty a,qwerty b){
	qwerty sum;
	sum.x=a.x+b.x;
	sum.y=a.y+b.y;
//	cout<<"Value of x is: "<<sum.x<<" and y is: "<< sum.y;
}
int main()
{
	qwerty v1,v2;
	v1.x=3;
	v1.y=6;
	v2.x=9;
	v2.y=10;
	test(v1,v2);
	cout<<test.x<<" and "<<test.y;
	
	
	return 0;

}
