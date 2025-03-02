#include<iostream> 
#include<string>

using namespace std;

class link {
	public:
	int data;
	link* next = NULL;
	link* prev = NULL;
	link(int data) { 
		this->data = data;
	}

};
void show(link* head) { 
	link* temp = head;
	while(temp != NULL) { 
		cout<<temp->data<<endl;
		temp = temp->next;
	}
}
void AddatHead(link* &head,int data) { 
	link* temp = new link(data);
	temp->next = head;
	head->prev = temp;
	head = temp;
}


int main() {
       link* head = new link(1);	
       AddatHead(head,99);
       show(head);
	return 0;
}
