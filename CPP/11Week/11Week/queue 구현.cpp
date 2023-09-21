#include<iostream>
using namespace std;

class Queue
{
	int* buf;
	int qsize;
	int front; 
	int rear;

public:
	void InitQueue(int qsize)
	{
		buf = new int[qsize];
		this->qsize = qsize;

		front = rear = -1;
	}

	void Enqueue(int data)
	{
		if (IsFull())
		{
			cout << "큐가 꽉 찼음 \n";
			return;
		}
		else 
		{
			rear++;
			buf[rear] = data;
		}
	}
	
	int Dequeue()
	{
		if (IsEmpty())
		{
			cout << "큐가 비었음\n";
			return -1;
		}
		return buf[++front];
	}

	int IsFull()
	{
		return rear == qsize - 1;
	}

	int IsEmpty()
	{
		return rear == front;
		
	}
};

int main(void)
{
	int i;
	Queue q1;
	q1.InitQueue(10);
	for (i = 1; i <= 11; i++)
	{
		cout << i << " 입력\n";
		q1.Enqueue(i);
	}

	cout << endl;

	while (!q1.IsEmpty())
	{
		cout << q1.Dequeue() << " 출력 \n";
	}

	cout << endl;
}