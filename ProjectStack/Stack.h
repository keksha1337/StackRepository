#pragma once

struct Node
{
	Node * next, *prev;
	int value;
};

/**
*  \brief ����� - ���������� �����.
*
*   ���� ����� ������������ ��� ������������� �����.
*/
class Stack
{
public:
	Stack(int size);
	~Stack();

	/**
	*   \brief ��������� ������� � ����.
	*
	*   ��������� ������� � ����� �����.
	*   @param value ����������� �������.
	*/
	void push(int value);

	/**
	*   \brief ����� ��������� ������� �����.
	*
	*   ����� ��������� ������� ����� � ������ ���.
	*   @result ��������� ������� �����.
	*/
	int pop();

	/**
	*   \brief ����� ��������� ������� �����.
	*
	*   ����� ��������� ������� ����� � �� ������ ���.
	*   @result ��������� ������� �����.
	*/
	int fetch();

	/**
	*   \brief ����� ������ �����.
	*
	*   ����� ������ �����.
	*   @result ������ �����.
	*/
	int size();

	void show();

private:
	Node *head;
	int top;
	int capacity;
};

