// Adapted from version by Frank Carrano and Timothy Henry
#include "LinkedStack.h"

template<class Type>
LinkedStack<Type>::LinkedStack() : head(nullptr) {
	
} // end default constructor

template<class Type>
LinkedStack<Type>::LinkedStack(const LinkedStack<Type> & aStack) {
	// TODO: Implement pseudocode
	Node<Type> * originalPointer = nullptr;
	// Point to nodes in original chain
	
	if(originalPointer == nullptr) {
	
	}
	else {
		// Copy first node
		
		// Point to first node in new chain 
		
		// Copy remaining nodes
		while(originalPointer != nullptr) {
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
LinkedStack<Type>::~LinkedStack() {
	// TODO: pop until empty
} // end destructor

template<class Type>
bool LinkedStack<Type>::isEmpty() {
	// TODO: stub function provided for demo, implement logic
	return true;
} // end isEmpty

template<class Type>
bool LinkedStack<Type>::push(Type & newElement) {
	// TODO: implement function
} // end push

template<class Type>
bool LinkedStack<Type>::pop() {
	// TODO: implement function
} // end pop

template<class Type>
Type LinkedStack<Type>::peek() {
	// TODO: implement function - handle empty case first
} // end peek