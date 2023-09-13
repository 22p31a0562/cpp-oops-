#include<iostream>
using namespace std;
class Complex{
	private:
		int x,y;
	public:
		Complex(int i=0,int j=0)
		{
			x=i;
			y=j;
		}
		void display()
		{
			cout<<x<<"+"<<y<<"i"<<endl;
	    }
	    Complex operator+(Complex &c1)
	    {
	    	Complex temp;
	    	temp.x=c1.x+x;
	    	temp.y=c1.y+y;
	    	return temp;
		}
};
int main()
{
	Complex c1(10,20);
	Complex c2(30,40);
	c1.display();
	c2.display();
	Complex c3;
	c3=c1+c2;
	c3.display();
}
