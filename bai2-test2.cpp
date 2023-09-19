#include<iostream>
using namespace std;


	class Node {
			
		public: 
		int data ;
		Node* next; 
		
		Node ( int data) {
			this -> data = data;
			this->next = NULL;
		}
	
	};

	class Linkedlist {
		
		
		public:
			Node* head; 
				int n;
		
		Linkedlist() {
			n = 0;
			head = NULL;
		}			
		
		void insertNode (int pos, int data) {
			Node* newNode = new Node(data);
			if ( pos == 0 ) { // vi tri dau
				newNode-> next = head;
				head = newNode;
			}
			else if ( pos == n) { // vtri cuoi
				Node*prevNode = head;
				while (prevNode -> next != NULL) {
					prevNode = prevNode -> next; 
				}
				prevNode -> next = newNode; 
			} else {
				Node* prevNode = head;
				for ( int i = 0; i < pos; i++) {
					prevNode = prevNode->next; 
				}
				Node* nextNode = prevNode -> next;
				
				newNode -> next = nextNode; 
				prevNode->next = newNode; 
			}
		}
		
		void deleteNode (int pos) {
			if (pos == 0) {
				head = head -> next;
				
			} else if (pos == n) {
				Node*prevNode = head;
				while (prevNode->next != NULL) {
					prevNode = prevNode -> next; 
				}
				prevNode -> next = NULL; 
			} else {
				Node* prevNode = head; 
				for ( int i = 0; i < pos; i++) {
					prevNode = prevNode -> next;
				}
				prevNode -> next = prevNode->next->next;
			}
			n--;
		}
		void print() {
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
		Linkedlist l ;
		while ( n--) {
			string method ;
			  int p, x;
			cin >> method;
			if ( method == "insert") {
				cin >> p >> x ;
				l.insertNode(p,x);
			}
			else if ( method == "delete") {
				cin >> p ;
				l.deleteNode(p);
			}
		}
		l.print();
	 return 0 ;
 }

