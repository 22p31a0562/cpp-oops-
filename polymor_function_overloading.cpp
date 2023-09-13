#include<iostream>
using namespace std;
class A{
	public:
		void add(int x, int y)
		{
			cout<<x+y<<endl;
		}
		void add(int x ,int y, int z)
		{
			cout<<x+y+z;
		}
};
int main()
{
	A a;
	a.add(1,2);
	a.add(1,2,3);
}
