// C++ code to demonstrate working of
// push_front(), emplace_front() and pop_front()
#include <forward_list>
#include <iostream>

// Driver Code
int main() {
	// Initializing forward list
	std::forward_list<int> flist = { 10, 20, 30, 40, 50 };
	flist.push_front(60);

	// Displaying the forward list
	std::cout
		<< "The forward list after push_front operation : ";
	for (int& c : flist)
		std::cout << c << " ";
	std::cout << std::endl;

	// Inserting value using emplace_front()
	// Inserts 70 at front
	flist.emplace_front(70);

	// Displaying the forward list
	std::cout << "The forward list after emplace_front "
		"operation : ";
	for (int& c : flist)
		std::cout << c << " ";
	std::cout << std::endl;

	// Deleting first value using pop_front()
	// Pops 70
	flist.pop_front();

	// Displaying the forward list
	std::cout << "The forward list after pop_front operation : ";
	for (int& c : flist)
		std::cout << c << " ";
	std::cout << std::endl;

	return 0;
}

/*
Output:
The forward list after push_front operation : 60 10 20 30 40 50
The forward list after emplace_front operation : 70 60 10 20 30 40 50
The forward list after pop_front operation : 60 10 20 30 40 50
*/
/*
