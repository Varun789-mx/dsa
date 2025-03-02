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

void AddatTail(link* &tail,int data) { 
	link* temp = new link(data);
	if(tail->prev == NULL) { 
		AddatHead(tail,data);
		return;
	}
	temp->prev = tail;
	tail->next = temp;
	tail = temp;
}
void Addatpst(link* &head,int data,int pst) { 
	if(pst <=1) { 
		AddatHead(head,data);
		return;
	}
	int count = 1;
	link* temp = head;
	while(count < pst - 1) { 
	temp = temp->next;
	}
	link* node = new link(data);
	node->next = temp->next;
	node->prev = temp;
	temp->next = node;
}

int main() {
       link* head = new link(1);	
       link* tail = head;
       AddatHead(head,99);
       AddatHead(head,98);
       AddatHead(head,98);
       AddatHead(head,98);
       show(head);
       printf("Before insert\n");
       AddatTail(tail,0);
       show(head);
	return 0;
}
