#include<iostream>
using namespace std;
void c(){
	static int c=0;
	c++;
	cout<<c<<endl;
}
int main()
{
	c();
	c();
	return 0;
}
