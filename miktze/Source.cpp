#include <iostream>

#include "AllocationManager.h"


AllocationManager g_allocationManager;


void* operator new(size_t size) {
	void* ptr = malloc(size + sizeof(Node));
	Node* node_ptr = static_cast<Node*>(ptr);
	node_ptr->size = size;
	g_allocationManager.addAllocation(node_ptr);
	void* return_ptr = static_cast<char*>(ptr) + sizeof(Node);
	return return_ptr;
}

void operator delete(void* ptr) {
	char* ptr_to_node = static_cast<char*>(ptr) - sizeof(Node);
	Node* node_ptr = reinterpret_cast<Node*>(ptr_to_node);
	g_allocationManager.removeAllocation(node_ptr);
	free(node_ptr);
}

int main() {
	int* ptr = new int[100];
	std::cout << g_allocationManager.getAllocationSize() << std::endl;
	delete[] ptr;
	std::cout << g_allocationManager.getAllocationSize() << std::endl;
	ptr = new int[2];
	int* alpha = new int[20];
	char* p = new char[10];
	std::cout << g_allocationManager.getAllocationSize() << std::endl;
	delete[] ptr;
	std::cout << g_allocationManager.getAllocationSize() << std::endl;
	delete[] alpha;
	delete[] p;
	std::cout << g_allocationManager.getAllocationSize() << std::endl;

	return 0;
}