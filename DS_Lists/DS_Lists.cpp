// DS_Lists.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;

int main()
{
	int holdTheScreen;

	dsNode mainNode, insertingNode(4);
	mainNode.nextNode = new dsNode(400);

	mainNode.insertNodeBeforeLast(&mainNode, &insertingNode);

	cout << dsNode::nodeCount << endl;
	cin >> holdTheScreen;

    return 0;
}

