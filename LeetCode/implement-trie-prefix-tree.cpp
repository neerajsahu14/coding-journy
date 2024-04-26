#include <iostream>
using namespace std;

class trieNode
{
public:
    trieNode *children[26];
    bool isTerminal;
    trieNode()
    {
        for (int i = 0; i < 26; i++)
            children[i] = nullptr;
        isTerminal = false;
    }
};

class Trie
{
private:
    trieNode *root;

public:
    Trie()
    {
        root = new trieNode();
    }

    void insertUtil(trieNode *root, string word)
    {
        if (word.size() == 0)
        {
            root->isTerminal = true;
            return;
        }
        int index = word[0] - 'a';
        trieNode *&child = root->children[index];
        if (child == nullptr)
        {
            child = new trieNode();
        }
        insertUtil(child, word.substr(1));
    }

    void insert(string word)
    {
        insertUtil(root, word);
    }

    bool searchUtil(trieNode *root, string word)
    {
        if (word.size() == 0)
        {
            return root->isTerminal;
        }
        int index = word[0] - 'a';
        trieNode *child = root->children[index];
        if (child != nullptr)
        {
            return searchUtil(child, word.substr(1));
        }
        else
        {
            return false;
        }
    }

    bool search(string word)
    {
        return searchUtil(root, word);
    }

    bool startsWithUtil(trieNode *root, string word)
    {
        if (word.size() == 0)
        {
            return true;
        }
        int index = word[0] - 'a';
        trieNode *child = root->children[index];
        if (child != nullptr)
        {
            return startsWithUtil(child, word.substr(1));
        }
        else
        {
            return false;
        }
    }

    bool startsWith(string prefix)
    {
        return startsWithUtil(root, prefix);
    }
};

int main()
{
    Trie *obj = new Trie();
    obj->insert("hello");
    bool param_2 = obj->search("hello");
    bool param_3 = obj->startsWith("hell");
    cout << param_2 << " " << param_3 << endl;
    delete obj;
    return 0;
}
