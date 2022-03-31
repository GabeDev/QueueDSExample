#include <iostream>
#include <queue>

using namespace std;
void printQ(queue<int> inputQ)
{
	while (!inputQ.empty())
	{
		cout << inputQ.front();
		inputQ.pop();
	}
	cout << endl;
}
int main()
{
	//fifo first in first out
	//aka first come first serve
	//when we need things to happen in exact order they were called
	//ex: online ordrer recipt etc..
	//push=append to front,popremove first,size,front=first element,back=last element
	//task: make a daily schedule need a ueue type string and ask user what is current task 
	// if current task is = touser input then pop otherwise remind them what they need to complete
	queue <int> myQ;
	myQ.push(1);
	myQ.push(2);
	myQ.push(3);
	myQ.pop();

	cout << "size is" << myQ.size()<<endl;
	cout << "first is" << myQ.front()<<endl;
	cout << "last is" << myQ.back()<<endl;

	printQ(myQ);

}
