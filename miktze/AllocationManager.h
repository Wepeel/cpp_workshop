#pragma once

#include "LinkedList.h"

class AllocationManager {

public:

	AllocationManager() = default;

	void addAllocation(Node* node);

	void removeAllocation(Node* node);

	size_t getAllocationSize() const;

private:

	LinkedList m_allocation_list;
};
