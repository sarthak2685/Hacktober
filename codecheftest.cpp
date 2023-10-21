#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{	string s;
	    cin>>s;
	    int n=s.length();
	    int num_a=0;
	    int num_b=0;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='a')
	        {
	            num_a++;
	            
	        }
	        else if(s[i]=='b')
	        {
	            num_b++;
	        }
	    }
	        cout<<"a:"<<num_a<<endl;
	        cout<<"b:"<<num_b<<endl;
	        if(num_a>num_b)
	        {
	            cout<<num_b<<endl;
	        }
	        else
	        {
	            cout<<num_a<<endl;
	        }
	        continue;
	    }
	return 0;
	}


