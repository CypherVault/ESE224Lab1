#pragma once
#include <queue>


class Stack{

private:
	std::queue<int> q1, q2;
	int temp;
public:
	void push1(int x); 
	void pop1(); 
	int top1(); 
	bool empty1(); 
};