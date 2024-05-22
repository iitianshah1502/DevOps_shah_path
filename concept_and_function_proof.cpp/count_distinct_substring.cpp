#include <bits/stdc++.h>
using namespace std;

class Node
{
    Node* links[26];
public:
    bool containsKey(char ch){
        return links[ch-'a'] != nullptr;
    }
    void put(char ch, Node* node)
    {
        links[ch-'a'] = node;
    }
    Node* get(char ch)
    {
        return links[ch-'a'];
    }
};

int CountDistinctSubstrings(string & S)
{
    int cnt = 0;
    Node* root = new Node();
    for(int i = 0; i < S.size(); i++)
    {
        Node* node = root;
        for(int j = i; j < S.size(); j++)
        {
            if(!node->containsKey(S[j]))
            {
                cnt++;
                node->put(S[j], new Node());
            }
            node = node->get(S[j]);
        }
    }
    return cnt + 1;
}

int main()
{
    string str = "abab";
    cout << "Number of distinct substrings: " << CountDistinctSubstrings(str) << endl;
    return 0;
}
