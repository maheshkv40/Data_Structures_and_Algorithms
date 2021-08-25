#include<bits/stdc++.h>
using namespace std;


class Queue{

public:
    int front, rear, size;
    unsigned capacity;
    int *array;

};

Queue *create_Queue(unsigned capacity){
    Queue *queue = new Queue();
    queue->capacity = capacity;
    queue->front = queue->size =0;
    queue->rear =-1;
    queue->array = new int [(queue->capacity * sizeof(int))];
    return queue;
}

int isfull(Queue* queue)
{
	return (queue->size == queue->capacity);
}


int isempty(Queue* queue)
{
	return (queue->size == 0);
}


void enqueue(Queue *queue, int x){
    if(isfull(queue)){
        return ;
    }
    queue->rear = (queue->rear+1) % (queue->capacity);
    queue->array[queue->rear] = x;
    queue->size = queue->size+1;
    cout << x << " enqueued to queue\n";

}

int dequeue(Queue* queue)
{
	if (isempty(queue)) {
        return INT_MIN;
	}
	int x = queue->array[queue->front];
	queue->front = (queue->front + 1) % queue->capacity;
	queue->size = queue->size - 1;
	return x;
}


int front(Queue* queue)
{
	if (isempty(queue)){
        return INT_MIN;
	}
	return queue->array[queue->front];
}


int rear(Queue* queue)
{
	if (isempty(queue)){
		return INT_MIN;
	}
	return queue->array[queue->rear];
}


int main()
{
	Queue* queue = create_Queue(100);
	enqueue(queue, 1);
	enqueue(queue, 2);
	enqueue(queue, 3);
	enqueue(queue, 4);
	cout << dequeue(queue)<< " dequeued from queue\n";
	cout << "Front item is "<< front(queue) << endl;
	cout << "Rear item is "<< rear(queue) << endl;
	return 0;
}
