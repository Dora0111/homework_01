#ifndef _LeftHeap_H

struct TreeNode;
typedef struct TreeNode* PriorityQueue;

PriorityQueue Intialize(void);
int FindMin(PriorityQueue H);
int IsEmpty(PriorityQueue H);
PriorityQueue Merge(PriorityQueue H1, PriorityQueue H2);

#define Insert(X,H)(H=Insert1(X),H);

PriorityQueue Insert1(int X, PriorityQueue H);
PriorityQueue DeleteMin1(PriorityQueue H);

#endif/*_LeftHeap_H*/

struct TreeNode
{
	int Element;
	PriorityQueue Left;
	PriorityQueue Right;
	int Npl;
};