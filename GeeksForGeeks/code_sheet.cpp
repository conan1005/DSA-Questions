// Sort Custom Compare

bool sortByDistance(Car a, Car b) {
    return a.distance() < b.distance();
}
vector<Car> result;
sort(result.begin(), result.end(), sortByDistance); // increasing


// Set

unordered_set<int> my_unordered_set;
set<int> my_set;

// Map

unordered_map<int, int> my_unordered_map;
map<int, int> my_map;

// Linked List
class node{
public:
    int data;
    node* next;
 
    node(int data){
        this->data = data;
        next = NULL;
    }
};

// Binary Tree

// binary tree node class
class node {
public:
    int data;
    node *left;
    node *right;
 
    node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node* node1= new node(1);
node* node2=new node(2);
node1->left = node2;

//Stacks & Queues

stack<char> my_stack;
queue<int> my_queue;


// Trie
 
class Node {
public:
    char data;
    unordered_map<char, Node*> m;
    bool isTerminal;
   
    // constructor
    Node(char d) {
        data = d;
        isTerminal = false;
    }
};
 
class Trie {
   
    public:
    Node *root;
   
    Trie() {
        root = new Node('\0');
    }
   
    // insert a new word
    void insert(string word) {
        Node *curr_node = root;
       
        for(char letter : word) {
            // map does not contain the letter
            if(curr_node->m.count(letter) == 0) {
                Node *n = new Node(letter);
                curr_node->m[letter] = n;
            }
           
            // go to next node
            curr_node = curr_node->m[letter];
        }
        curr_node->isTerminal = true;
    }
   
    // search the word in a trie
    bool search(string word) {
        Node *curr_node = root;
       
        for(char letter : word) {
           
            // map does not contain letter
            // return false
            if(curr_node->m.count(letter) == 0) return false;
           
            // go to next letter
            curr_node = curr_node->m[letter];
        }
       
        return curr_node->isTerminal;
    }
};


// Heap


priority_queue<int> max_heap;
priority_queue<int, vector<int>, greater<int>> min_heap;

// Heap Custom Compare


class Compare {
public:
    bool operator()(int a, int b) {
        return a > b;
    }
};
priority_queue<int, vector<int>, Compare > heap; // min heap


//Graph


class Graph {
    int V;
    list<int> *adjList;
 
    public:
 
    // constructor
    Graph(int v) {
        this->V = v;
        adjList = new list<int>[V];
    }
 
    // add a new edge
    void addEdge(int i, int j, bool undirected = true) {
        adjList[i].push_back(j);
        if(undirected) {
            adjList[j].push_back(i);
        }
    }
};




