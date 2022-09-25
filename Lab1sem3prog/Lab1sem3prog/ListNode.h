#pragma once

#include<iostream>
class ListNode
{
public:

	struct node {
		int data;
		node *next;
	};
	node *head = NULL;

public:

	void create(int data)
	{
		if (head == NULL) {
			node* newNode = new node;
			newNode->data = data;
			newNode->next = nullptr;
			head = newNode;
		}
		else {
			std::cout << "List is not empty\n";
		}

	}

	void print() {
		if (head == NULL) {
			std::cout <<"List is empty" << std::endl;
			return;
		}
		else {
			node* temp = head;
			std::cout << temp->data << std::endl;
			while(temp->next != nullptr){
				temp = temp->next;
				std::cout << temp->data << std::endl;
			}
		}

	}

	void add(int data, int index) {
		node* newNode = new node;
		newNode->data = data;
		node* temp = head;
		int lenth = 1;
		

		if (index == 1) {
			newNode->next = head;
			head = newNode;
        return;
		}

		while (temp->next != nullptr) {
			temp = temp->next;
			lenth++;
		}
		std::cout << lenth << std::endl;
	}
	
};

