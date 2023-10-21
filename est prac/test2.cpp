#include<iostream>
#include<cstdlib>
using namespace std;
class test{
	int sum;
	public:
		test(int x):sum(x){}
		void disp()
		{
			cout<<sum<<endl;
		}
		void *operator new(size_t size);
		void operator delete(void *p);
};
void *test::operator new(size_t size)
{
	void *p;
	p=malloc(size);
	return p;
}
void test::operator delete(void *p)
{
	free(p);
}
//int test::operator+(int y)
//{
//	int t=sum+y;
//	return t;
//}
int main()
{
	test *a,*b;
	a=new test(5);
	b=new test(8);
	a->disp();
	b->disp();
	return 0;
	
}
