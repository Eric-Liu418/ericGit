#pragma once
#include <iostream>

class LinkedList;

class ListNode 
{
private:
	int data;							 //代表著資料項目
	ListNode *next;						 //指向下一個node的記憶體位置
public:
	ListNode() :data(0), next(0) {};     //建構子(:)用於初始化     
	ListNode(int a) :data(a), next(0) {};
	friend class LinkedList;
};

class LinkedList 
{
private:
	ListNode *first;					 //list的第一個node記憶體位置
public:
	LinkedList() :first(0) {};			
	void PrintList();					 //印出list的所有資料
	void Push_front(int n);				 //在list的開頭新增node
	void Push_back(int n);				 //在list的尾巴新增node
	void Delete(int n);					 //刪除list中的第n個node
	void Clear();						 //整串list刪除
	void Reverse();						 //將list反轉
};