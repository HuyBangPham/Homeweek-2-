#include<iostream>
using namespace std;


	class Node {
		public:  
		int data ;
		Node* next; 
		Node ( int data)  {
			this->data = data;
			this->next = NULL;
		}
 	}; 
	
	class Queue {
		public:
		Node* head;
		Node* rear;
		
		Queue () {
			this->head = NULL;
			this->rear = NULL; 
		}
		void enqueue (int x) {
			Node* newNode = new Node (x) ;
			
			if ( rear == NULL) {
				head = rear = newNode;
				return; 
			}
			rear -> next = newNode; 
			rear = newNode;
		}
		
		void dequeue () {
			if (head == NULL) {
				return; 
			}
			head = head -> next;
		}
		
		void print () {
			Node* node = head; 
				while ( node != NULL) {
				cout << node -> data << " " ;
				node = node -> next; 
			}
				cout << endl ;  
			}
	};



	
int main () {
	int n ;
	cin >> n ;
	Queue q; 
	while ( n--) {
		string method;
		int x; 
		if (method == "enqueue") {
			 cin >> x ;
			 q.enqueue(x);
		} else if ( method == "dequeue") {
			q.dequeue();
		} 
	} 
	q.print();
	return 0 ;
 }

