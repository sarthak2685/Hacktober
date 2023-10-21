#include<iostream>
using namespace std;
int yash = 10;
class aashi{
    public:
    static int yash;
    aashi(int z){
        yash = z;
    }

};
int main(){
    aashi meera(23);
    int i=3;
    int sum=0;
    for(i=0;i<3;i++)
    {
    	int yash=3;
    	sum+=yash;
	}
    cout<<meera.yash<<endl<<yash<<endl<<::yash;
}
