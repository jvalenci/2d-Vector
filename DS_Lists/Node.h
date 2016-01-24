#pragma once


class NodePrac
{
public:
	//fields
	int data;
	NodePrac * nextNode;
	NodePrac * firstNode;
	static int listCount;

	//constructors and destructor
	NodePrac(const NodePrac &origList);
	NodePrac(NodePrac *node = nullptr, int data = -1);
	~NodePrac();

	//Methods
	void insertAfter(const NodePrac &refNode, NodePrac *insertionNode);
	void insertBefore(const NodePrac &refNode, NodePrac *insertionNode);
	void pushInsert(NodePrac *insertionNode);
	void deleteNode(NodePrac &refNode);
	NodePrac& operator==(const NodePrac &origList);
};