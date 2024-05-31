#include<iostream>
using namespace std;
#define m 7

class stack
{
public:
	int top = -1;
	int a[m];

	void push(int x)
	{
		if (top == m - 1)
		{
			cout << "stack is full" << endl;
		}
		else
		{
			top++;
			a[top] = x;
		}
	}

	void pop()
	{
		if (top == -1)
		{
			cout << "stack is empty" << endl;
		}
		else
		{
			top--;
		}
	}

	int peak()
	{
		if (top == -1)
		{
			cout << "stack is empty" << endl;
		}
		else
		{
			return a[top];
		}
	}

	void display()
	{
		for (int i = 0; i <= top; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
};

void main()
{
	stack st;
	st.push(19);
	st.push(4);
	st.push(0);
	st.push(22);
	st.push(15);

	cout << "stack elements before pushing: ";
	st.display();

	st.push(25);
	st.push(18);

	cout << "stack elements after pushing/traversing: ";
	st.display();

}