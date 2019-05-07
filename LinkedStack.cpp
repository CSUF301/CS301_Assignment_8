// Adapted from version by Frank Carrano and Timothy Henry
#include "LinkedStack.h"

template<class Type>
LinkedStack<Type>::LinkedStack() : head(nullptr)
{
} // end default constructor

template<class Type>
LinkedStack<Type>::LinkedStack(const LinkedStack<Type> & aStack)
{
		// TODO: Implement pseudocode
		Node<Type> * originalPointer = nullptr;
		// Point to nodes in original chain

		if(originalPointer == nullptr)
		{

		}
		else
		{
				// Copy first node

				// Point to first node in new chain

				// Copy remaining nodes
				while(originalPointer != nullptr)
				{
						// Advance original-chain pointer
						// Get next item from original chain
						// Create a new node containing the next item
						// Link new node to end of new chain
						// Advance pointer to new last node
				} // end while
				// Set the end of new chain
		} // end if
} // end copy constructor

template<class Type>
LinkedStack<Type>::~LinkedStack()
{
	Node<Type> *delNode = head;
	while(head != nullptr)
	{
		head = head->next;
		delete delNode;
	}
		// TODO: pop until empty
} // end destructor

template<class Type>
bool LinkedStack<Type>::isEmpty()
{
		// TODO: stub function provided for demo, implement logic
		if(head == nullptr)
		{
			return true;
		}
		else
		{
			return false;
		}
} // end isEmpty

template<class Type>
bool LinkedStack<Type>::push(Type & newElement)
{
		// TODO: implement function
		Node<Type> *newNode = new Node<Type>;
		if(head == nullptr)
		{
			newNode->data = newElement;
			head = newNode;
			return true;
		}
		else
		{
			newNode->data = newElement;
			newNode->next = head;
			head = newNode;
			return true;
		}
		return false;
} // end push

template<class Type>
bool LinkedStack<Type>::pop()
{
		// TODO: implement function
		Node<Type> *delNode = head;
		if(head != nullptr)
		{
			head = head->next;
			delete delNode;
			return true;
		}
		else
		{
			return false;
		}
} // end pop

template<class Type>
Type LinkedStack<Type>::peek()
{
		// TODO: implement function - handle empty case first
		if(head == nullptr)
		{
			return 'n';
		}
		Type topOfList = head->data;
		return topOfList;
} // end peek