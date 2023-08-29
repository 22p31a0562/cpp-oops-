#include<iostream>
using namespace std;
class Person{
	private:
		string name;
		int age;
	public:
		Person(string word,int val)
		{
			name=word;
			age=val;
		}
	friend void display(Person p);
};
void display(Person p)
{
	cout<<p.name<<endl;
	cout<<p.age<<endl;
}
int main()
{
	Person p("ramya",18);
	display(p);
	
}
