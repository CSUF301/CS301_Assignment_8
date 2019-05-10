#include <iostream>
#include <fstream>
#include <string>
#include "LinkedStack.h"

using namespace std;

int main()
{
  string data;
  bool pushData, popData, empty;
  LinkedStack<char> myStack;
  ifstream readFile;
  readFile.open("input.txt");

  while(!readFile.eof())
  {
    getline(readFile, data);
    for(int i = 0; i < data.length(); i++)
    {
      if(data[i] == '(' || data[i] == '{' || data[i] == '[')
      {
        pushData = myStack.push(data[i]);
      }
      if(data[i] == ')' || data[i] == '}' || data[i] == ']')
      {
        if(myStack.peek() == '(' && data[i] == ')')
        {
          popData = myStack.pop();
        }
        else if(myStack.peek() == '{' && data[i] == '}')
        {
          popData = myStack.pop();
        }
        else if(myStack.peek() == '[' && data[i] == ']')
        {
          popData = myStack.pop();
        }
        else if(myStack.peek() != data[i])
        {
          break;
        }
      }
    }
      empty = myStack.isEmpty();
      if(empty)
      {
        cout << "Expression is valid\n\n";
      }
      else if(!empty)
      {
        cout << "Expression is invalid\n\n";
        myStack.~LinkedStack();
      }
  }
  readFile.close();
    
    return 0;
}
