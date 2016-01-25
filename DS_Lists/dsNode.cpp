#include "stdafx.h"
//using namespace std;

/// <summary>
/// The node count
/// </summary>
int dsNode::nodeCount = 0;

/// <summary>
/// Initializes a new instance of the <see cref="dsNode"/> class.
/// </summary>
/// <param name="data">The data.</param>
/// <param name="next">The next.</param>
dsNode::dsNode(int data, dsNode *next) :nodeData(data), nextNode(next)
{
	++dsNode::nodeCount;
}

/// <summary>
/// Finalizes an instance of the <see cref="dsNode"/> class.
/// </summary>
dsNode::~dsNode()
{
	--dsNode::nodeCount;
}

void dsNode::insertNodeBeforeLast( dsNode *first, dsNode *insertionNode)
{
	dsNode *head = this;
	
	//check and see if the next node is empty if it is then the new node should be first in the linked list
	if (head->nextNode == nullptr)
	{
		insertionNode->nextNode = head;
		*head = *insertionNode;
		insertionNode->nodeData = -1;
		
	}
	else
	{

		while (head->nextNode != nullptr)
		{
			head->prevNode = head;
			head = head->nextNode;
		}
		insertionNode->nextNode = head;
		prevNode->nextNode = insertionNode;
		
	}
}
