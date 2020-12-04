/*
Name: esam eldin mohamed ahmed.
Grade: 2nd.
Department: Computer Eng.
*/
#include <iostream>  //Ø§Ø³ØªØ¯Ø¹Ø§Ø¡ Ù„Ù…ÙƒØªØ¨Ø© Ø§Ù„Ø§Ø¯Ø®Ø§Ù„ Ùˆ Ø§Ù„Ø§Ø®Ø±Ø§Ø¬
#include<bits/stdc++.h>
using namespace std; //ØªØ¹Ø±ÙŠÙ Ø§Ù„Ù…ÙƒØªØ¨Ø© Ø§Ù„ØªÙŠ ØªØ­ØªÙˆÙŠ Ø¹Ù„Ù‰ Ø§ÙˆØ§Ù…Ø± Ø§Ù„Ø·Ø¨Ø§Ø¹Ø© Ùˆ Ø§Ù„Ø§Ø®Ø±Ø§Ø¬

class Score{

    public:
    int stuDegree;
    Score *next;
};

void push(Score** head_ref, int new_stuDegree)  //Ø¥Ø¯Ø±Ø§Ø¬ Ø¹Ù‚Ø¯Ø© Ø¬Ø¯ÙŠØ¯Ø© ÙÙŠ Ù…Ù‚Ø¯Ù‘Ù…Ø© Ø§Ù„Ù‚Ø§Ø¦Ù…Ø©
{ 
	Score* new_score = new Score();  /* 1. Ø­Ø¬Ø² Ù…ÙˆÙ‚Ø¹ Ø§Ù„Ø¹Ù‚Ø¯Ø© ÙÙŠ Ø§Ù„Ø°Ø§ÙƒØ±Ø© */

	new_score->stuDegree = new_stuDegree;  /* 2. Ø¥Ø¶Ø§ÙØ© Ø§Ù„Ø¨ÙŠØ§Ù†Ø§Øª */

	new_score->next = (*head_ref);  /* 3. Ø¬Ø¹Ù„ Ø±Ø£Ø³ Ø§Ù„Ù‚Ø§Ø¦Ù…Ø© Ù‡Ùˆ Ø§Ù„Ø¹Ù‚Ø¯Ø© Ø§Ù„ØªØ§Ù„ÙŠØ© Ù„Ù„Ø¹Ù‚Ø¯Ø© Ø§Ù„Ø¬Ø¯ÙŠØ¯Ø© */
	
	(*head_ref) = new_score;  /* 4. ØªØ­Ø±ÙŠÙƒ Ø±Ø£Ø³ Ø§Ù„Ù‚Ø§Ø¦Ù…Ø© Ù„ÙŠØ´ÙŠØ± Ø¥Ù„Ù‰ Ø§Ù„Ø¹Ù‚Ø¯Ø© Ø§Ù„Ø¬Ø¯ÙŠØ¯Ø© */
};

void insertAfter(Score* prev_score, int new_stuDegree)  /* Ø¥Ø¯Ø±Ø§Ø¬ Ø¹Ù‚Ø¯Ø© Ø¨Ø¹Ø¯ Ø§Ù„Ø¹Ù‚Ø¯Ø© Ø§Ù„Ø³Ø§Ø¨Ù‚Ø© Ø§Ù„Ù…Ø¹Ø·Ø§Ø© */
{ 
	if (prev_score == NULL)  /* Null Ø§Ù„ØªØ­Ù‚Ù‚ Ù…Ù† Ø£Ù†Ù‘ Ø§Ù„Ø¹Ù‚Ø¯Ø© Ø§Ù„Ø³Ø§Ø¨Ù‚Ø© Ø§Ù„Ù…Ø¹Ø·Ø§Ø© ØªØ­Ù…Ù„ Ø§Ù„Ù‚ÙŠÙ…Ø© */
	{ 
		cout<<"the given previous Score cannot be NULL"; 
		return; 
	} 
	Score* new_score = new Score();  /*  Ø­Ø¬Ø² Ù…ÙˆÙ‚Ø¹ Ø§Ù„Ø¹Ù‚Ø¯Ø© Ø§Ù„Ø¬Ø¯ÙŠØ¯Ø© ÙÙŠ Ø§Ù„Ø°Ø§ÙƒØ±Ø© */

	new_score->stuDegree = new_stuDegree;  /*  Ø¥Ø¶Ø§ÙØ© Ø§Ù„Ø¨ÙŠØ§Ù†Ø§Øª */

	new_score->next = prev_score->next;  /*  Ø¬Ø¹Ù„ Ø§Ù„Ø¹Ù‚Ø¯Ø© Ø§Ù„Ù„Ø§Ø­Ù‚Ø© Ù„Ù„Ø¹Ù‚Ø¯Ø© Ø§Ù„Ø¬Ø¯ÙŠØ¯Ø© Ù‡ÙŠ Ø§Ù„Ø¹Ù‚Ø¯Ø© Ø§Ù„Ù„Ø§Ø­Ù‚Ø© Ù„Ù„Ø¹Ù‚Ø¯Ø© Ø§Ù„Ø³Ø§Ø¨Ù‚Ø© */

	prev_score->next = new_score;  /*  ØªØ­Ø±ÙŠÙƒ Ø§Ù„Ø¹Ù‚Ø¯Ø© Ø§Ù„ØªØ§Ù„ÙŠØ© Ù„Ù„Ø¹Ù‚Ø¯Ø© Ø§Ù„Ø³Ø§Ø¨Ù‚Ø© Ù„ØªØµØ¨Ø­ Ø§Ù„Ø¹Ù‚Ø¯Ø© Ø§Ù„Ø¬Ø¯ÙŠØ¯Ø© */
};

void append(Score** head_ref, int new_stuDegree)  //Ø¥Ù„Ø­Ø§Ù‚ Ø¹Ù‚Ø¯Ø© Ø¬Ø¯ÙŠØ¯Ø© ÙÙŠ Ù†Ù‡Ø§ÙŠØ© Ø§Ù„Ù‚Ø§Ø¦Ù…Ø©
{ 
	Score* new_score = new Score();  /*  Ø­Ø¬Ø² Ù…ÙˆÙ‚Ø¹ Ø§Ù„Ø¹Ù‚Ø¯Ø© Ø§Ù„Ø¬Ø¯ÙŠØ¯Ø© ÙÙŠ Ø§Ù„Ø°Ø§ÙƒØ±Ø© */

	Score *last = *head_ref;  /* ÙŠØ³ØªØ®Ø¯Ù… ÙÙŠ Ø§Ù„Ø®Ø·ÙˆØ© */

	new_score->stuDegree = new_stuDegree;  /*  Ø¥Ø¯Ø±Ø§Ø¬ Ø§Ù„Ø¨ÙŠØ§Ù†Ø§Øª */

	new_score->next = NULL;  /*  Ø³ØªÙƒÙˆÙ† Ø§Ù„Ø¹Ù‚Ø¯Ø© Ø§Ù„Ø¬Ø¯ÙŠØ¯Ø© Ù‡ÙŠ Ø§Ù„Ø¹Ù‚Ø¯Ø© Ø§Ù„Ø£Ø®ÙŠØ± ÙÙŠ Ø§Ù„Ù‚Ø§Ø¦Ù…Ø©
	Ù„Ø°Ø§ Ø³Ù†Ø¬Ø¹Ù„ Ø§Ù„Ø¹Ù‚Ø¯Ø© Ø§Ù„Ù„Ø§Ø­Ù‚Ø© Ù„Ù‡Ø§ Ù‡ÙŠ
	NULL*/
	if (*head_ref == NULL)  /*  Ø¥Ù† ÙƒØ§Ù†Øª Ø§Ù„Ù‚Ø§Ø¦Ù…Ø© ÙØ§Ø±ØºØ©Ù‹
	Ø³ØªÙƒÙˆÙ† Ø§Ù„Ø¹Ù‚Ø¯Ø© Ø§Ù„Ø¬Ø¯ÙŠØ¯Ø© ÙÙŠ Ø±Ø£Ø³ Ø§Ù„Ù‚Ø§Ø¦Ù…Ø©*/
	{ 
		*head_ref = new_score; 
		return; 
	} 
	while (last->next != NULL)  /*  ÙˆØ¥Ù† Ù„Ù… ØªÙƒÙ† Ø§Ù„Ù‚Ø§Ø¦Ù…Ø© ÙØ§Ø±ØºØ© Ù†Ù†Ù‚Ù„ Ø§Ù„Ø¹Ù‚Ø¯Ø© Ø§Ù„Ø¬Ø¯ÙŠØ¯Ø© Ø¥Ù„Ù‰ Ù†Ù‡Ø§ÙŠØ© Ø§Ù„Ù‚Ø§Ø¦Ù…Ø© */
		last = last->next; 
	last->next = new_score; /* Ù†ØºÙŠØ± Ø§Ù„Ø¹Ù‚Ø¯Ø© Ø§Ù„Ù„Ø§Ø­Ù‚Ø© Ù„Ù„Ø¹Ù‚Ø¯Ø© Ø§Ù„Ø£Ø®ÙŠØ±Ø©. */
	return; 
}; 

void deleteScore(Score *head, Score *n)  // ØªØ­Ø°Ù Ø§Ù„Ø¯Ø§Ù„Ø© Ø£ÙˆÙ„ Ø¸Ù‡ÙˆØ± Ù„Ù„Ù…ÙØªØ§Ø­ Ø§Ù„Ù…Ø¹Ø·Ù‰ ÙÙŠ Ø§Ù„Ù‚Ø§Ø¦Ù…Ø© Ø§Ù„Ù…ØªØ±Ø§Ø¨Ø·Ø©
{ 
	if (head == n)     
	{ 
		if (head->next == NULL)
        {
            cout<<"There is only one node."<<"The list can't be made empty";
            return ;
        }
        head->stuDegree = head->next->stuDegree;  
        n = head->next;  
        head->next = head->next->next;  
        return;  
    }  
    Score *prev = head;  
    while(prev->next != NULL && prev->next != n)  
        prev = prev->next;  
    if(prev->next == NULL)  
    {  
        cout << "\nGiven node is not present in Linked List";  
        return;  
    }  
    prev->next = prev->next->next;  
    
    return;  
};  

bool search(Score* head, int x) 
{ 
	Score* current = head; // ØªÙ‡ÙŠØ¦Ø© Ø§Ù„Ø¹Ù‚Ø¯Ø© Ø§Ù„Ø­Ø§Ù„ÙŠØ©
	while (current != NULL) 
	{ 
		if (current->stuDegree == x) 
			return true; 
		current = current->next; 
	} 
	return false; 
;} 


void printList(Score *d) 
{ 
	while (d != NULL) 
	{ 
		cout << d->stuDegree << " "; 
		d = d->next; 
	} 
}; 



class Stack 
{ 
    int top; 
public: 
    int a[1000];    //ØªØ¹ÙŠÙŠÙ† Ø§Ù„Ø­Ø¯ Ø§Ù„Ø£Ø¹Ù„Ù‰ Ù„Ù„ÙƒØ¯Ø³ 
  
    Stack()  { top = -1; } 
    bool push(int x); 
    int pop(); 
    bool isEmpty(); 
}; 
  
bool Stack::push(int x) 
{ 
    if (top >= (1000-1)) 
    { 
        cout << "Stack Overflow"; 
        return false; 
    } 
    else
    { 
        a[++top] = x; 
        cout<<x <<" pushed into stack\n"; 
        return true; 
    } 
} 
  
int Stack::pop() 
{ 
    if (top < 0) 
    { 
        cout << "Stack Underflow"; 
        return 0; 
    } 
    else
    { 
        int x = a[top--]; 
        return x; 
    } 
} 
  
bool Stack::isEmpty() 
{ 
    return (top < 0); 
};



class Queue 
{ 
	public: 
	int front, rear, size; 
	unsigned capacity; 
	int* array; 
}; 

// ØªÙ†Ø´Ø¦ Ù‡Ø°Ù‡ Ø§Ù„Ø¯Ø§Ù„Ø© Ø±ØªÙ„Ù‹Ø§ Ø¨Ø³Ø¹Ø© Ù…Ø¹ÙŠÙ†Ø©
// ÙˆØªÙ‡ÙŠØ¦ Ø§Ù„Ø±ØªÙ„ Ù„ÙŠÙƒÙˆÙ† Ø¨Ø§Ù„Ø­Ø¬Ù… 0
Queue* createQueue(unsigned capacity) 
{ 
	Queue* queue = new Queue(); 
	queue->capacity = capacity; 
	queue->front = queue->size = 0; 
	queue->rear = capacity - 1; // enqueue Ù‡Ø°Ù‡ Ø§Ù„Ø®Ø·ÙˆØ© Ù…Ù‡Ù…Ø© Ø±Ø§Ø¬Ø¹ Ø§Ù„Ø¯Ø§Ù„Ø©
	queue->array = new int[(queue->capacity * sizeof(int))]; 
	return queue; 
} 

// ÙŠØµØ¨Ø­ Ø§Ù„Ø±ØªÙ„ Ù…Ù…ØªÙ„Ø¦Ù‹Ø§ Ø¹Ù†Ø¯Ù…Ø§
// Ø¹Ù†Ø¯Ù…Ø§ ÙŠØµØ¨Ø­ Ø­Ø¬Ù… Ø§Ù„Ø±ØªÙ„ Ù…Ø³Ø§ÙˆÙŠÙ‹Ø§ Ù„Ø³Ø¹ØªÙ‡

int isFull(Queue* queue) 
{ return (queue->size == queue->capacity); } 

// ÙŠØµØ¨Ø­ Ø§Ù„Ø±ØªÙ„ ÙØ§Ø±ØºÙ‹Ø§ Ø¹Ù†Ø¯Ù…Ø§ ÙŠØµØ¨Ø­ Ø­Ø¬Ù…Ù‡ Ù…Ø³Ø§ÙˆÙŠÙ‹Ø§ Ù„Ù„ØµÙØ±

int isEmpty(Queue* queue) 
{ return (queue->size == 0); } 

// ØªØ¶ÙŠÙ Ø§Ù„Ø¯Ø§Ù„Ø© Ø¹Ù†ØµØ±Ù‹Ø§ Ø¥Ù„Ù‰ Ø§Ù„Ø±ØªÙ„
// ÙˆØªØ¹Ø¯Ù„ Ø§Ù„ÙÙ‡Ø±Ø³ Ø§Ù„Ø£Ø®ÙŠØ± ÙˆØ­Ø¬Ù… Ø§Ù„Ø±ØªÙ„
void enqueue(Queue* queue, int item) 
{ 
	if (isFull(queue)) 
		return; 
	queue->rear = (queue->rear + 1) % queue->capacity; 
	queue->array[queue->rear] = item; 
	queue->size = queue->size + 1; 
	cout << item << " enqueued to queue\n"; 
} 

// ØªØ­Ø°Ù Ø§Ù„Ø¯Ø§Ù„Ø© Ø¹Ù†ØµØ±Ù‹Ø§ Ù…Ù† Ø§Ù„Ø±ØªÙ„
// ÙˆØªØ¹Ø¯Ù„ Ø§Ù„ÙÙ‡Ø±Ø³ Ø§Ù„Ø£ÙˆÙ„ ÙˆØ­Ø¬Ù… Ø§Ù„Ø±ØªÙ„
int dequeue(Queue* queue) 
{ 
	if (isEmpty(queue)) 
		return INT_MIN; 
	int item = queue->array[queue->front]; 
	queue->front = (queue->front + 1) % queue->capacity; 
	queue->size = queue->size - 1; 
	return item; 
} 

// ØªØ¬Ù„Ø¨ Ø§Ù„Ø¯Ø§Ù„Ø© Ø§Ù„Ø¹Ù†ØµØ± Ø§Ù„Ø£ÙˆÙ„ ÙÙŠ Ø§Ù„Ø±ØªÙ„
int front(Queue* queue) 
{ 
	if (isEmpty(queue)) 
		return INT_MIN; 
	return queue->array[queue->front]; 
} 

// ØªØ¬Ù„Ø¨ Ø§Ù„Ø¯Ø§Ù„Ø© Ø§Ù„Ø¹Ù†ØµØ± Ø§Ù„Ø£Ø®ÙŠØ± ÙÙŠ Ø§Ù„Ø±ØªÙ„
int rear(Queue* queue) 
{ 
	if (isEmpty(queue)) 
		return INT_MIN; 
	return queue->array[queue->rear]; 
}; 

int main(){
    
    Score* head=NULL; Score* second=NULL; Score* third=NULL; Score* fourth=NULL;
    int x= 33;
    class Stack s;
    Queue* queue = createQueue(1000); 
    string choose, sel;

    cout<<"Select the method you want to try( list, stack, queue):- \n";
    cout<<"--#--#--#--#--#--#--\n";
    cin>>choose;
    if (choose=="list"){
        head = new Score(); second = new Score(); third = new Score(); fourth = new Score();

        head->stuDegree = 67; head->next = second; 
        second->stuDegree = 80; second->next = third; 
        third->stuDegree = 78; third->next = fourth;
        fourth->stuDegree = 59; fourth->next = NULL;  
        printList(head);
        cout<<endl;
        cout<<"Choose what do you want to do:add/sub:- ";
        cin>>sel;
        if (sel=="add"){
            append(&head, 70);
            push(&head, 48);  
            insertAfter(head->next, 89); 
            printList(head);
            cout<<endl;
        }else if (sel=="sub"){
            deleteScore(head, head->next); 
            printList(head);
            cout<<endl;
        }     
        search(head, 48)? cout<<"Found\n" : cout<<"Not found\n";
        printList(head);
        cout<<endl;
    }else if (choose=="stack"){
        s.push(10); 
        s.push(20); 
        s.push(30); 
        cout<<s.pop() << " Popped from stack\n";
        cout<<endl;
    }else if (choose=="queue"){
        enqueue(queue, 10); 
	    enqueue(queue, 20); 
	    enqueue(queue, 30); 
	    enqueue(queue, 40); 

    	cout<<dequeue(queue)<<" dequeued from queue\n"; 

    	cout << "Front item is " << front(queue) << endl; 
    	cout << "Rear item is " << rear(queue) << endl; 
    };

    
    return 0;
}
