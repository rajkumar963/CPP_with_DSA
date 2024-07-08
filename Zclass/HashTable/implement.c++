#include <bits/stdc++.h>
using namespace std;

class Hashing {
    vector<list<int>> Hashtable;
    int bucket;

public:
    Hashing(int size) {
        bucket = size;
        Hashtable.resize(size);
    }

    int hashvalue(int key) {
        return key % bucket;  // division method
    }

    void add(int key) {
        int index = hashvalue(key);
        Hashtable[index].push_back(key);
    }

    list<int>::iterator search(int key) {
        int index = hashvalue(key);
        return find(Hashtable[index].begin(), Hashtable[index].end(), key);
    }

    void remove(int key) {
        int index = hashvalue(key);
        auto it = search(key);
        if (it != Hashtable[index].end()) {
            Hashtable[index].erase(it);
            cout << key << " is deleted" << endl;
        } else {
            cout << key << " is not found" << endl;
        }
    }
};

int main() {
    Hashing h(10);
    h.add(10);
    h.add(20);
    h.add(30);
    h.add(40);
    h.add(50);
    h.add(60);
    h.add(70);
    h.add(80);
    h.remove(10);
    h.remove(10);
    return 0;
}
