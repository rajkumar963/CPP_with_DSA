// // #include <iostream>
// // #include <vector>
// // #include <list>
// // #include <string>
// // #include <functional>
// #include <bits/stdc++.h>
// using namespace std;

// class Entry
// {
// public:
//     std::string key;
//     int value;
//     size_t hash;

//     Entry(const std::string &k, int v) : key(k), value(v), hash(std::hash<std::string>{}(k)) {}
// };

// class HashMap
// {
// private:
//     int size;
//     int capacity;

//     vector<std::list<Entry>> data;

// public:
//     HashMap() : size(0), capacity(10), data(capacity) {}

//     int getSize() const
//     {
//         return size;
//     }

//     void insert(const string &key, int value)
//     {
//         Entry entry(key, value);
//         size_t index = entry.hash % capacity;
//         for (auto &e : data[index])
//         {
//             if (e.key == key)
//             {
//                 e.value = value;
//                 return;
//             }
//         }
//         data[index].push_back(entry);
//         size++;
//     }

//     int get(const string &key) const
//     {
//         size_t index =
//             hash<std::string>{}(key) % capacity;
//         for (const auto &e : data[index])
//         {
//             if (e.key == key)
//             {
//                 return e.value;
//             }
//         }
//         return -1; // or throw an exception if key is not found
//     }

//     void remove(const string &key)
//     {
//         size_t index =
//             hash<std::string>{}(key) % capacity;
//         auto &entries = data[index];
//         for (auto it = entries.begin(); it != entries.end(); ++it)
//         {
//             if (it->key == key)
//             {
//                 entries.erase(it);
//                 size--;
//                 return;
//             }
//         }
//     }

//     void display() const
//     {
//         for (const auto &bucket : data)
//         {
//             for (const auto &e : bucket)
//             {

//                 cout << e.key << " " << e.value << endl;
//             }
//         }
//     }
// };

// int main()
// {
//     HashMap map;
//     map.insert("1", 1);
//     map.insert("2", 7);
//     map.insert("3", 3);
//     map.insert("1", 0);
//     map.insert("ankit", 0);
//     map.insert("raj", 0);
//     map.insert("raj", 1);
//     map.insert("rj", 0);
//     map.insert("j", 0);

//     map.display();
//     int value = map.get("2");

//     cout << "value:" << value << endl;

//     cout << endl;

//     map.remove("raj");

//     cout << map.getSize() << endl;

//     map.display();

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
int a=45;
int b=045;
int c=0x45;
int d=0X45;
int e=0b100101;
int f=0B1010101;
cout<<a<<endl;
cout<<b<<endl;
cout<<c<<endl;
cout<<d<<endl;
cout<<e<<endl;
cout<<f<<endl;
int g=0x1234;

}

