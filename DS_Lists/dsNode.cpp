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
	delete(nextNode);
	--dsNode::nodeCount;
}

void dsNode::insertNodeBeforeLast( dsNode *first, dsNode *insertionNode)
{
	this->currNode = new dsNode(*first);
	
	//check and see if the next node is empty if it is then the new node should be first in the linked list
	if (currNode->nextNode == nullptr)
	{
		insertionNode->nextNode = currNode;
		first->currNode = currNode;
		*first = *insertionNode;
		insertionNode->nodeData = -1;
		
	}
	else
	{
		currNode->prevNode = new dsNode(*first);
		while (currNode->nextNode != nullptr)
		{
			currNode = currNode->nextNode;
			prevNode = prevNode->nextNode;
		}
		insertionNode->nextNode = currNode;
		prevNode->nextNode = insertionNode;
	}
}
