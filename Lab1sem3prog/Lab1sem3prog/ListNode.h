#pragma once

#include<iostream>
#include"Windows.h"
#include<vector>

class ListMassive {
private:

	std::vector<int> array1 = {};


	int Partition(std::vector<int>& v, int start, int end) {

		int pivot = end;
		int j = start;
		for (int i = start; i < end; ++i) {
			if (v[i] < v[pivot]) {
				std::swap(v[i], v[j]);
				++j;
			}
		}
		std::swap(v[j], v[pivot]);
		return j;

	}
public:

	void add(int data) {
		array1[array1.size()] = data;
	}
	void print() {
		for (auto const& element : array1)
			std::cout << element << ' ';
	}
	void dell(int index) {
		array1[index] = NULL;
	}
	void add(int data, int index) {
		array1[index] = data;

	}
	void Quicksort(std::vector<int>& v, int start, int end) {

		if (start < end) {
			int p = Partition(v, start, end);
			Quicksort(v, start, p - 1);
			Quicksort(v, p + 1, end);
		}

	}


};

class ListNode
{
public:

	struct node {
		int data;
		node *next;
	};
	node *head = NULL;

	void ClearAndWait(std::string text,int time) {
		std::cout << text;
		for (int i = 0; i < 3; i++) {
			Sleep(time);
			std::cout << ".";
		}
	}
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
		ClearAndWait("printing",200);

		system("cls");
		if (head == NULL) {
			std::cout <<"List is empty" << std::endl;
			return;
		}
		else {
			node* temp = head;
			std::cout << temp->data << std::endl;

			while(temp->next != nullptr ){
				temp = temp->next;
				std::cout << temp->data << std::endl;
			}
		}
		return;
	}

    int lenth() {
		int res = 0;
		if (head == NULL) {
			return 0;
		}
		res = 1;
		node* temp = head;
		while (temp->next != nullptr) {
			temp = temp->next;
			res++;
		}
		return res;
	}

	void add(int data,int index) {

		if (index < 1) {
			std::cout << "Program crashed with fatal error, change your index!\n";
			return;
		}
		node* newNode = new node;
		newNode->data = data;
		

		if (index == 1) {
			newNode->next = head;
			head = newNode;
			return;
		}

		node* temp = head;
		int tempLenth = lenth();

		if (index > tempLenth) {
			if (index > tempLenth + 1) {
				std::cout << "Index that u enter is more then list lenth,added in the end" << std::endl;
			}
			while (temp->next != nullptr) {
				temp = temp->next;
		    }
			newNode->next = nullptr;
			temp->next = newNode;

			return;
		}

		if (index <= tempLenth && index > 1) {
			temp = head;
			int current = 1;

			while (current != index - 1) {
				temp = temp->next;
				current++;
			}
			newNode->next = temp->next;
			temp->next = newNode;



		}
		

	}



	
	
	
};

