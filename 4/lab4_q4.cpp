#include<iostream>
using namespace std;
class student{
	protected:
		int rno;
		string name;
	public:
		void getdetails()
		{
			int r;
			string s;
			cout<<"Enter student roll number: ";
			cin>>r;
			cout<<"Enter student name: ";
			cin>>s;
			rno=r;
			name=s;
		}
		void dispdetails()
		{
			cout<<"Roll No.: "<<rno<<endl<<"Name: "<<name;
		}	
};
class marks : public student{
	protected:
		int sub1,sub2;
	public:
		void getmarks()
		{
			int x,y;
			cout<<"Enter marks in subject 1: ";
			cin>>x;
			cout<<"Enter marks in subject 2: ";
			cin>>y;
			sub1=x;
			sub2=y;
		}
		void dispmarks()
		{
			cout<<"Marks in subject 1: "<<sub1<<endl<<"Marks in subject 2: "<<sub2;
			
		}
};
class result : public marks{
	int total;
	string pf;
	public:
		void calcres()
		{
			total=sub1+sub2; //33% has been taken as the passing criteria
			if(total<66)
			{
				pf="PASSED";
			}
			else
			{
				pf="FAILED";
			}
		}
		void dispres()
		{
			cout<<rno<<"\t\t"<<name<<"\t\t"<<sub1<<"\t\t"<<sub2<<"\t\t"<<total<<"\t\t"<<pf<<endl;
		}
		result()
		{
			
		}
		
};
int main()
{
	int n;
	cout<<"Enter number of students: ";
	cin>>n;
	result obj[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter details of "<<i+1<<" th student:\n";
		obj[i].getdetails();
		obj[i].getmarks();
		obj[i].calcres();
		cout<<endl;
	}
	cout<<"Roll No.\tName\t\tSubject 1\tSubject 2\tTotal Marks\tResult"<<endl<<"-----------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	for(int i=0;i<n;i++)
	{
		obj[i].dispres();
	}
	
	cout<<"-----------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	return 0;
	
}
