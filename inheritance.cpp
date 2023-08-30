#include<iostream>
using namespace std;
class Human{
	protected:
		string name;
		int age;
	protected:
		void access_name(string n)
		{
		 name=n;	
		}
		void access_age(int a)
		{
			age=a;
		}
};
class Student: protected Human{
public:
	int rollno;
	void access_rollno(int rl)
	{
		rollno=rl;
	}
	void display()
	{
		cout<<name<<endl<<age<<endl<<rollno;
	}
};
int main()
{
	Student s;
	s.rollno=562;
	s.access_name("ramya");
	s.access_age(18);
	s.display();
}
