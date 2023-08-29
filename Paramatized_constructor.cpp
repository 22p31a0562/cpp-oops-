#include<iostream>
using namespace std;
class Person{
private:
	string name;
	int age;
public:
	Person(string n,int a)
	{
		this->name=n;
		this->age=a;
	}
	void display()
	{
		cout<<name<<" "<<age<<endl;
	}
	
};
int main()
{
	Person p("ramya",18);
	p.display();
	return 0;
}
