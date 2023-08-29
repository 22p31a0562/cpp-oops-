#include<iostream>
using namespace std;
class Person{
private:
	string name;
	int age;
public:
	void setdata(string word,int val)
	{
	age=val;
	name=word;
    }
    void getdata()
    {
    	cout<<"This is"<<" "<<name<<" "<<"with age"<<" "<<age<<endl;
	}
    
};
int main()
{
	Person p;
	p.setdata("Ramya",19);
	p.getdata();
}
