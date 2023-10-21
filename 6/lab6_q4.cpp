#include<iostream>
using namespace std;
class student{
	public:
		virtual void show()=0;
};
class engineering : public student{
	void show()
	{
		cout<<"Ye engineering wale students itna rote kyu hain, purze hi to jodne hain\n";
	}
};
class medical : public student{
	void show()
	{
		cout<<"Ye medical wale students itna rote kyu hain, body to kaatni hai\n";
	}
};
class science : public student{
	void show()
	{
		cout<<"Ye science wale students itna rote kyu hain, pankhe se hi to latakna hai\n";
	}
};
int main()
{
	student *p[3];
	p[0] = new engineering;
	p[1]=new medical;
	p[2]=new science;
	p[0]->show();
	p[1]->show();
	p[2]->show();
	return 0;
}
