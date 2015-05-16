#include<iostream>
using namespace std;
struct Queue{
	int front,rear;
	int size;
	int*array;
};
struct Queue* createqueue(int size){
	struct Queue*queue=new Queue[size];
	queue->front=queue->rear=-1;
	queue->size=size;
    queue->array= new int [queue->size];
	return queue;
}
bool isFull(struct Queue*queue){
	return (queue->rear+1)%queue->size== queue->front ? true : false;
}
bool isEmpty(struct Queue*queue){
	return (queue->rear==-1&&queue->front==-1);
}
void Enqueue(struct Queue*queue ,int x){
	
	 if (isFull(queue))
        return;
       if(isEmpty(queue)){
		queue->rear=queue->front=0;
	}
	else{ queue->rear=(queue->rear+1)%queue->size;
		
	}
	queue->array[queue->rear]=x;
}
int Dequeue(struct Queue*queue){
	int item;
	if(isEmpty(queue))
	return 0;
	if (queue->rear==queue->front){
		
		queue->rear=queue->front=-1;
	}
	else{
	queue->front=(queue->front+1)%queue->size;}
	item=queue->array[queue->front];
	return item;
}
int front(struct Queue*queue){
	if(queue->front==-1)
	return 0;
	return queue->array[queue->front];
}
int main(){
	
	struct Queue*queue=createqueue(10);
	for(int i=0;i<10;i++){
	
	Enqueue(queue,i);}
	cout<<"First element "<<Dequeue(queue)<<endl;
	cout<<"front element"<<front(queue)<<endl;
return 0;
	
}
