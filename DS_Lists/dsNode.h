#pragma once

class dsNode
{
public:
	int nodeData;
	dsNode *nextNode;
	dsNode *prevNode;
	dsNode *currNode;
	static int nodeCount;

	dsNode(int data = -1, dsNode *next = nullptr );
	~dsNode();

	void insertNodeBeforeLast(dsNode *first, dsNode *insertionNode);
	void deleteNode();
	void printNode();
};
