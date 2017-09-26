#include "Stack.h"
#include <iostream>

Stack::Stack(int value) {
	this->value = value;
}

void Stack::push(int value) {
	if (this == NULL) {
		this->value = value;
		this->size++;
	}
	else {
		if (this->size < 10) {
			Stack *temporary = new Stack(value);
			temporary->next = this;
			Stack &thisStack = *this;
			thisStack = *temporary;
			this->size++;
			this->next = this;
		}
		else {
			throw std::out_of_range("kek");
		}
	}

}