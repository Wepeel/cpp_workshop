#pragma once

#include "LinkedListIterator.h"


class LinkedList {
public:

	LinkedList() = default;

	LinkedList(Node* node);

	void append(Node* node);

	void remove(Node* node);

	LinkedListIterator getIterator() const;

	Node* head() const;


private:
	Node* m_head = nullptr;
};
