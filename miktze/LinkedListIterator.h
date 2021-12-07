#pragma once

#include "Node.h"

class LinkedListIterator {
public:

	explicit LinkedListIterator(Node* node);

	// Prefix
	const LinkedListIterator& operator++();

	//Postfix
	LinkedListIterator operator++(int);

	Node* operator*();

	Node* operator->();

private:
	Node* m_node_ptr;
};
