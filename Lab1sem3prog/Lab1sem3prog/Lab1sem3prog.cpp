#include <iostream>
#include"ListNode.h"



int main()
{
	ListNode a;
	a.create(5);
	a.add(1, 1);
	a.add(2, 2);
	a.add(4, 3);
	a.add(3, 3);
	a.print();

	std::cout <<"Lenth: " << a.lenth() << std::endl;
}
