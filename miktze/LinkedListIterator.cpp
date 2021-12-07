#include "LinkedListIterator.h"

LinkedListIterator::LinkedListIterator(Node* node)
	:m_node_ptr(node)
{}

// Prefix
const LinkedListIterator& LinkedListIterator::operator++() {
	m_node_ptr = m_node_ptr->next;
	return *this;
}

//Postfix
LinkedListIterator LinkedListIterator::operator++(int) {

	LinkedListIterator temp(*this);
	m_node_ptr = m_node_ptr->next;
	return temp;
}

Node* LinkedListIterator::operator*() {
	return m_node_ptr;
}

Node* LinkedListIterator::operator->() {
	return m_node_ptr;
}

