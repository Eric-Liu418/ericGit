#pragma once
#include <iostream>

class LinkedList;

class ListNode 
{
private:
	int data;							 //�N��۸�ƶ���
	ListNode *next;						 //���V�U�@��node���O�����m
public:
	ListNode() :data(0), next(0) {};     //�غc�l(:)�Ω��l��     
	ListNode(int a) :data(a), next(0) {};
	friend class LinkedList;
};

class LinkedList 
{
private:
	ListNode *first;					 //list���Ĥ@��node�O�����m
public:
	LinkedList() :first(0) {};			
	void PrintList();					 //�L�Xlist���Ҧ����
	void Push_front(int n);				 //�blist���}�Y�s�Wnode
	void Push_back(int n);				 //�blist�����ڷs�Wnode
	void Delete(int n);					 //�R��list������n��node
	void Clear();						 //���list�R��
	void Reverse();						 //�Nlist����
};