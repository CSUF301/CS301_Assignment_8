#ifndef _LINKED_STACK
#define _LINKED_STACK

template<class Type>
class Node
{
	public:
		Type data;
		Node<Type> * next = nullptr;
};

template<class Type>
class LinkedStack
{

private:
	Node<Type> * head; // Points to first node of list

public:
	// Constructors and destructors
	LinkedStack();    // Default constructor
	LinkedStack(const LinkedStack<Type> & aStack);  // Copy constructor
	~LinkedStack();   // Destructor

	// Stack operations
	bool isEmpty(); // Returns true if the stack is empty, false otherwise.
	bool push(Type & newElement); // Adds an element to the stack.
	bool pop(); // Removes an element at the top of the stack.
	Type peek(); // Returns the value stored at the top of the stack.
}; // end LinkedStack

#include "LinkedStack.cpp"
#endif
