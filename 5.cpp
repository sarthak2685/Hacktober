#include<iostream>
using namespace std;
class test_start{
	static int t_id;
	int hour,mins,secs;
	public:
		test_start()
		{t_id++;
		hour=0;
		mins=0;
		secs=0;
		cout<<"Initialised 1"<<endl;
		}
		test_start(int h,int m,int s)
		{
			t_id++;
			hour=h;
			mins=m;
			secs=s;
			cout<<"Initialised 2"<<endl;
		}
		test_start(test_start &t);
		static void display_id();
};
int test_start::t_id;
void test_start::display_id()
{
	cout<<"ID is: "<<test_start::t_id;
}
test_start::test_start(test_start &t)
{       t_id++;
		cout<<"Initialised 3";
		}
int main()
{
	test_start t1,t2(1,2,3);
	test_start t3(t2);
	test_start::display_id();
	return 0;
}
