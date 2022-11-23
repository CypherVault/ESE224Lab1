#include "Stack.h"
#include <iostream>
#include <queue>



void Stack::pop1()
{

	//if no elements are there in q1
	if (q1.empty())
		return;
	q1.pop();

}

int Stack::top1()
{

	if (q1.empty()) {
		return -1;
	}
	else {
		return q1.front();
	}

}


bool Stack::empty1()
{

	
	 if(!q1.empty()) {
		std::cout << "currently has elements inside!\n";
		return 0;
	}
	 else if (q1.empty()) {

		std::cout << "currently empty.\n";
		return 0;
	}
}

void Stack::push1(int x)
{
	q2.push(x);

	while (!q1.empty()) {
		temp = (q1.front());
		q2.push(temp);
		q1.pop();
	}
	std::queue<int> temp = q1;
	q1 = q2;
	q2 = temp;

}