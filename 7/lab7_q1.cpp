#include<iostream>
using namespace std;
class time{
	int h,m,s;
	public:
	time(){};
	time(int hours, int mins, int sec)
	{
		h=hours;
		m=mins;
		s=sec;
	}
	void show()
	{
		cout <<h<<":"<<m<<":"<<s<<endl;
	}
	time operator+(time op2);
};

time time::operator+(time op2)
{
	time temp;
	temp.h = op2.h + h; 
	temp.m = op2.m + m;
	temp.s = op2.s + s;
	return temp;
}
int main()
{
    time t1(5,15,34);
	time t2(9,53,58);
	time t3;
    t3 = t1 + t2;  
	t3.show();  
}

