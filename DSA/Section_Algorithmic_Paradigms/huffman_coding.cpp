#include <iostream>
#include <queue>
#include <unordered_map>
#include <vector>
using namespace std;

struct Node {
    char ch;
    int freq;
    Node* left;
    Node* right;
    Node(char c, int f) : ch(c), freq(f), left(NULL), right(NULL) {}
};

struct compare {
    bool operator()(Node* a, Node* b) {
        return a->freq > b->freq;
    }
};

void buildHuffman(Node* root, string code, unordered_map<char, string>& codes) {
    if (!root) return;
    if (!root->left && !root->right) {
        codes[root->ch] = code;
    }
    buildHuffman(root->left, code + "0", codes);
    buildHuffman(root->right, code + "1", codes);
}

unordered_map<char, string> huffmanCodes(vector<char> chars, vector<int> freqs) {
    priority_queue<Node*, vector<Node*>, compare> pq;
    for (int i = 0; i < chars.size(); i++) {
        pq.push(new Node(chars[i], freqs[i]));
    }
    while (pq.size() > 1) {
        Node* left = pq.top(); pq.pop();
        Node* right = pq.top(); pq.pop();
        Node* newNode = new Node('\0', left->freq + right->freq);
        newNode->left = left;
        newNode->right = right;
        pq.push(newNode);
    }
    unordered_map<char, string> codes;
    buildHuffman(pq.top(), "", codes);
    return codes;
}

int main() {
    vector<char> chars = {'a', 'b', 'c', 'd', 'e', 'f'};
    vector<int> freqs = {5,9,12,13,16,45};
    auto codes = huffmanCodes(chars, freqs);
    for (auto& p : codes) {
        cout << p.first << ": " << p.second << endl;
    }
    return 0;
}