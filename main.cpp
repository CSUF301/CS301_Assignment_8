#include <iostream>
#include <fstream>
#include "LinkedStack.h"

using namespace std;

int main()
{
	char data;
	bool pushData, popData, empty;
	LinkedStack<char> myStack;
	ifstream readFile;
	readFile.open("input.txt");

	while(!readFile.eof())
	{
		readFile.get(data);
		if(data == '(' || data == '{' || data == '[')
		{
			pushData = myStack.push(data);
		}
		if(data == ')' || data == '}' || data == ']')
		{
			if(myStack.peek() == '(' && data == ')')
			{
				cout << myStack.peek() << " ";
				popData = myStack.pop();
				cout << myStack.peek() << endl;
			}
			else if(myStack.peek() == '{' && data == '}')
			{
				cout << myStack.peek() << " ";
				popData = myStack.pop();
				cout << myStack.peek() << endl;
			}
			else if(myStack.peek() == '[' && data == ']')
			{
				cout << myStack.peek() << " ";
				popData = myStack.pop();
				cout << myStack.peek() << endl;
			}
		}
		if(data == '\n')
		{
			empty = myStack.isEmpty();
			if(empty)
			{
				cout << "Expression is valid\n";
			}
			else if(!empty)
			{
				cout << "Expression is invalid\n";
				myStack.~LinkedStack();
				if(myStack.peek() == 'n')
				{
					cout << "success\n";
				}
			}
		}
	}
	readFile.close();
	return 0;
}