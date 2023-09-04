#include<iostream>
using namespace std;
class Person{
	protected:
		string name;
		int age;
	public:
		void Getname(string n)
		{
			name=n;
		}
		void Getage(int a)
		{
			age=a;
		}
	};
class Student : protected Person{
	public:
		Person :: Getname;
		Person :: Getage;
		int id;
		string college;
		void Getid(int i)
		{
			id=i;
		}
		void Getcollege(string clg)
		{
			college=clg;
		}
		void display()
		{
			cout<<"myself"<<" "<<name<<" "<<" with an age"<<" "<<age<<" "<<"studying in"<<" "<<college;
		}
};

int main()
{
	Student p;
	p.Getname("ramya");
	p.Getage(18);
	p.Getcollege("aditya");
	p.display();
}
