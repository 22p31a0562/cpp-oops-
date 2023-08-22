#include<iostream>
using namespace std;
class Person{
	private:
		string name;
		string gender;
		int age;
	public:
		Person(string n,string g,int a)
		{
		this->name=n;
		this->gender=g;
		this->age=a;
		}
		void modify()
		{
			name="karun";
			gender="male";
		}
		void display(){
			cout<<name<<" "<<gender<<" "<<age;
		}
};
int main()
{
	Person p1("ramya","female",18);
	p1.modify();
	p1.display();
	return 0;
}
