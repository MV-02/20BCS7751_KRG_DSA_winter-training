#include <bits/stdc++.h>
using namespace std;

const int siz = 26;

struct TrieNode
{
    struct TrieNode *children[siz];

    bool end;
};

typedef struct TrieNode T;

T *getNode(void)
{
    T *tmp = new TrieNode;

    tmp->end = false;

    for (int i = 0; i < siz; i++)
        tmp->children[i] = NULL;

    return tmp;
}

void insert(T *root, string key)
{
    T *temp = root;

    for (int i = 0; i < key.length(); i++)
    {
        int index = key[i] - 'a';
        if (!temp->children[index])
            temp->children[index] = getNode();

        temp = temp->children[index];
    }

    temp->end = true;
}

bool search(T *root, string key)
{
    T *temp = root;

    for (int i = 0; i < key.length(); i++)
    {
        int index = key[i] - 'a';
        if (!temp->children[index])
            return false;

        temp = temp->children[index];
    }

    return (temp->end);
}

int main()
{
    string keys[] = {"the", "a", "there",
                     "answer", "any", "by",
                     "bye", "their"};
    int n = sizeof(keys) / sizeof(keys[0]);

    T *root = getNode();

    for (int i = 0; i < n; i++)
        insert(root, keys[i]);

    char output[][32] = {"Not present in trie", "Present in trie"};

    cout << "the"
         << " --- " << output[search(root, "the")] << endl;
    cout << "these"
         << " --- " << output[search(root, "these")] << endl;
    cout << "their"
         << " --- " << output[search(root, "their")] << endl;
    cout << "thaw"
         << " --- " << output[search(root, "thaw")] << endl;
    return 0;
}
