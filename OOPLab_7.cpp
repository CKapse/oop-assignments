/*
#include <iostream>
#include <stack>
using namespace std;
int main()
{
	stack<int> s;
	int ch,elem;
	cout<<"Push "<<"pop";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"Enter element"<<endl;
			cin>>elem;
			s.push(elem);
			break;
		case 2:
			cout<<"Popped ";	
			cout<<s.top();
			cout<<endl;
			s.pop();
			break;
		default:
			cout<<"Pisss off"<<endl;
	}
	return 0;
}
*/

#include <iostream>
#include <algorithm>
using namespace std;

int arr[] = { 11, 22, 33, 44, 55, 66, 77, 88 };

int main()
{
    int* ptr;
    ptr = find(arr, arr+8, 33);
    cout << "First object with value 33 found at offset " << (ptr-arr) << endl;
    return 0;
}