#pragma once
#include "DLLInterface.h"
#include <iostream>

using namespace std;
class DLL : public DLLInterface {
private:
	Node* tail;
	Node* head;

public:
	DLL() {
		tail = nullptr;
		head = nullptr;
	}

	~DLL(){}
	void insertFront(int i, string s) {

	}

	void insertBack(int i, string s) {

	}

	void insertAt(int i, int e, string s) {

	}

	string* lookupByKey(int i) {

	}

	string* lookupByValue(const string&) {

	}

	void removeByKey(int i) {

	}

	void removeByValue(const string&) {

	}

	void displayEntries() {

	}

	void displayEntriesReverse() {

	}
};
