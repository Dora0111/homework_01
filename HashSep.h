#ifndef _HashSept_H

struct ListNode;
typedef struct ListNode* Position;
struct HashTable;
typedef struct HashTable* HsshTable;
typedef int ElementType;

HashTable InitialzieTable(int TableSize);
void DestroyTable(HashTable H);
Position Find(ElementType Key, HashTable H);
void Insert(ElementType Key, HashTable H);
ElementType Retrieve(Position P);

#endif/*_HashSep_H*/

struct ListNode
{
	ElementType Element;
	Position Next;
};

typedef Position List;

struct HashTable
{
	int TableSize;
	List* TheLists;
};