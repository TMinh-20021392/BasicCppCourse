#include <bits/stdc++.h>
using namespace std;

class HashNode {
public:
	int key;
	HashNode(int key)
	{
		this->key = key;
	}
};

class HashMap {
	HashNode** arr;
	int capacity;
	//current size
	int size;

public:
	HashMap(int c)
	{
		capacity = c;
		size = 0;
		arr = new HashNode*[capacity];
	};

	int hashCode(int key)
	{
		return (2*key+5) % capacity;
	};

	void insertNode(int key)
	{
		HashNode* temp = new HashNode(key);

		// Apply hash function to find index for given key
		int hashIndex = hashCode(key);

		// find next free space
		while (arr[hashIndex] != NULL
			&& arr[hashIndex]->key != key
			&& arr[hashIndex]->key != -1) {
			hashIndex++;
			hashIndex %= capacity;
		}

		// if new node to be inserted
		// increase the current size
		if (arr[hashIndex] == NULL
			|| arr[hashIndex]->key == -1)
			size++;
		arr[hashIndex] = temp;
	};

	void display()
	{
		for (int i = 0; i < capacity; i++) {
			if (arr[i] != NULL && arr[i]->key != -1)
				cout <<i<< " key = " << arr[i]->key<< endl;
		}
	};
};

int main()
{
int b[] = {12, 44, 13, 88, 23, 94, 11, 39, 20, 16, 5};
int n = sizeof(b)/sizeof(b[0]);

HashMap* h=new HashMap(11);

for (int i = 0; i < n; i++)
	h->insertNode(b[i]);
h->display();

return 0;
}
