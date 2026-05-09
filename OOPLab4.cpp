#include<iostream>

using namespace std;

class student{
        public:
            unsigned int prn,cgpa;
            string name;
            student()
            {
                prn = 1262242034;
                cgpa = 1;
                name = "Chonny";
            }
            void display_B()
            {
                cout<<"Name\tCGPA\tPRN\n";
                cout<<name<<"\t"<<cgpa<<"\t"<<prn<<"\n";
            }

};

class person : public student{
        public:
            string name,occupation;
            unsigned int salary;
            person()
            {
                name = "Chonny1";
                salary = 1;
                occupation = "Unknown";
            }
            void display_A()
            {
                cout<<"Name\tSalary\tOccupation\n";
                cout<<name<<"\t"<<salary<<"\t"<<occupation<<"\n";
            }
};

int main(){
    person Chonny3;
    Chonny3.display_A();
    Chonny3.display_B();

    return 0;
}




        

#include <iostream>
using namespace std;
int add(int,int);
float add(float,float);
double add(double,double);
class point
{
	private:
		int x,y;
	public:
		point(int a,int b)
		{
			x=a;
			y=b;
		}
		void add()
		{
			cout<<x+y<<endl;
		}
};
int main()
{
	int a,b;
	float c,d;
	double e,f;
	cout<<"Enter 2 integers"<<endl;
	cin>>a>>b;
	cout<<"Enter 2 floats"<<endl;
	cin>>c>>d;
	cout<<"Enter 2 doubles"<<endl;
	cin>>e>>f;
	cout<<add(a,b)<<endl;
	cout<<add(c,d)<<endl;
	cout<<add(e,f)<<endl;
	point p(1,2);
	p.add();
	return 0;
}
int add(int a,int b)
{
	return(a+b);
}
float add(float a,float b)
{
	return(a+b);
}
double add(double a,double b)
{
	return(a+b);
}
