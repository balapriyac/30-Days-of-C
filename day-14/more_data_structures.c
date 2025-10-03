#include <stdio.h>
#include <stdlib.h>

#define MAX 100

// Stack using array
typedef struct {
    int items[MAX];
    int top;
} Stack;

void initStack(Stack* s) {
    s->top = -1;
}

int isEmpty(Stack* s) {
    return s->top == -1;
}

int isFull(Stack* s) {
    return s->top == MAX - 1;
}

void push(Stack* s, int value) {
    if (isFull(s)) {
        printf("Stack Overflow\n");
        return;
    }
    s->items[++s->top] = value;
}

int pop(Stack* s) {
    if (isEmpty(s)) {
        printf("Stack Underflow\n");
        return -1;
    }
    return s->items[s->top--];
}

// Queue using linked list
typedef struct QNode {
    int data;
    struct QNode* next;
} QNode;

typedef struct Queue {
    QNode *front, *rear;
} Queue;

QNode* newQNode(int data) {
    QNode* temp = (QNode*)malloc(sizeof(QNode));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

void enqueue(Queue* q, int data) {
    QNode* temp = newQNode(data);
    if (q->rear == NULL) {
        q->front = q->rear = temp;
        return;
    }
    q->rear->next = temp;
    q->rear = temp;
}

int dequeue(Queue* q) {
    if (q->front == NULL) {
        printf("Queue Underflow\n");
        return -1;
    }
    QNode* temp = q->front;
    int val = temp->data;
    q->front = q->front->next;
    if (q->front == NULL) q->rear = NULL;
    free(temp);
    return val;
}

int main() {
    Stack s;
    initStack(&s);
    push(&s, 10);
    push(&s, 20);
    printf("Popped from stack: %d\n", pop(&s));

    Queue q = {NULL, NULL};
    enqueue(&q, 100);
    enqueue(&q, 200);
    printf("Dequeued from queue: %d\n", dequeue(&q));

    return 0;
}

