#include <bits/stdc++.h>
using namespace std;
// Node structure for trie
struct Node
{
    // array to store links to child node
    // each index represents a letter
    Node *links[26];
    // flag indicating if the node marks the end of the word
    bool flag = false;
    // check if the node contains a specific key (letter)
    bool containsKey(char ch)
    {
        return links[ch - 'a'] != NULL;
    }
    // insert new node with a specific key (letter) into the TRIE)
    void put(char ch, Node *node)
    {
        links[ch - 'a'] = node;
    }
    // get the node with a specific key(letter) from the trie
    Node *get(char ch)
    {
        return links[ch - 'a'];
    }
    // set the current node as the end of the word
    void setEnd()
    {
        flag = true;
    }
    // check if the current node mark the end of the word
    bool isEnd()
    {
        return flag;
    }
};
// Trie Class
class Trie
{
private:
    Node *root;

public:
    // constructor to initialise the trie with an empty root node
    Trie()
    {
        root = new Node();
    }
    // insert the word into the trie Time complexity O(len) where len is the length of the word
    void insert(string word) // basically this is function that take input word
    {
        Node *node = root;
        for (int i = 0; i < word.length(); i++)
        {
            if (!node->containsKey(word[i]))
            {
                // create a new node for the letter if not present
                node->put(word[i], new Node());
            }
            // move the next nod
            node = node->get(word[i]);
        }
        // mark the end of the word
        node->setEnd();
    }
    // return if the word is trie
    bool search(string word){
        Node* node = root;
        for(int i=0;i<word.length();i++)
        {
            if(!node->containsKey(word[i]))
            {
                // if letter is not found then word is not in the  trie
                return false;
            }
            // move to next node
            node = node->get(word[i]);
        }
        // check if the last node marks the end of the word
        return node->isEnd();
    }
    // return if there is anu word in the trie that start with any prefix
      bool startsWith(string prefix) {
        Node* node = root;
        for (int i = 0; i < prefix.length(); i++) {
            if (!node->containsKey(prefix[i])) {
                // If a letter is not found, there is
                // no word with the given prefix
                return false;
            }
            // Move to the next node
            node = node->get(prefix[i]);
        }
        // The prefix is found in the Trie
        return true;
    }
    
};
int main() {
    Trie trie;
    cout << "Inserting words: Striver, Striving, String, Strike" << endl;
    trie.insert("striver");
    trie.insert("striving");
    trie.insert("string");
    trie.insert("strike");
    
    cout << "Search if Strawberry exists in trie: " <<
    (trie.search("strawberry") ? "True" : "False")<< endl;
    
    cout << "Search if Strike exists in trie: " <<
   ( trie.search("strike") ? "True" : "False" )<< endl;
    
    cout << "If words is Trie start with Stri: " <<
    (trie.startsWith("stri") ? "True" : "False" )<< endl;

    return 0;
}