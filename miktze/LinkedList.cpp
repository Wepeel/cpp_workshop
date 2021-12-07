#include "LinkedList.h"

LinkedList::LinkedList()
{}

LinkedList::LinkedList(Node* node) {
	m_head = node;
	node->next = nullptr;
}

void LinkedList::append(Node* node) {
	node->next = nullptr;

	if (m_head == nullptr) {
		m_head = node;
		return;
	}

	Node* current = m_head;
	while (current->next != nullptr) {
		current = current->next;
	}

	current->next = node;
}

void LinkedList::remove(Node* node) {
	if (node == m_head) {
		if (m_head)
			m_head = m_head->next;
		return;
	}

	Node* current = m_head;
	while (current->next != node && current) {
		current = current->next;
	}

	if (current == nullptr) {
		return;
	}

	current->next = current->next->next;
}

LinkedListIterator LinkedList::getIterator() const {
	return LinkedListIterator(m_head);
}


Node* LinkedList::head() const {
	return m_head;
}

