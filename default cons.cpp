#include<iostream>
using namespace std;
class Person{
private:
	string name;
	int age;
public:
	Person()
	{
		name="ramya";
		age=18;
	}
	void display()
	{
		cout<<name<<" "<<age<<endl;
	}
};
int main()
{
	Person p;
	p.display();
}
