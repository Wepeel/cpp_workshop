#include "AllocationManager.h"

void AllocationManager::addAllocation(Node* node) {
	m_allocation_list.append(node);
}

void AllocationManager::removeAllocation(Node* node) {
	m_allocation_list.remove(node);
}

size_t AllocationManager::getAllocationSize() const {
	size_t sum_of_sizes = 0;

	for (auto iterator = m_allocation_list.getIterator(); *iterator; ++iterator) {
		sum_of_sizes += iterator->size;
	}

	return sum_of_sizes;
}
