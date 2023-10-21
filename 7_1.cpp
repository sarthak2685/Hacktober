#include<iostream>
using namespace std;
class time{
	int h,m,s;
	public:
		time(){}
		time(int a,int b,int c)
		{
			h=a;
			m=b;
			s=c;
		}
		void show()
		{
			cout <<h<<":"<<m<<":"<<s<<endl;
		}
		time operator+(time ob);
};
time time::operator+(time ob)
{
	time temp;
	temp.h=ob.h+h;
	temp.m=ob.m+m;
	temp.s=ob.s+s;
	return temp;
}
int main()
{
    time t1(5,15,34);
	time t2(9,53,58);
	time t3;
    t3 = t1+t2;  
	t3.show();  
}

