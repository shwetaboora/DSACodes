#include <iostream>
#include <unordered_map>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
// hashing means using maps or sets
#include <map>
#include <set>
#include <unordered_set>
#include <algorithm>
using namespace std;

bool comparator(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
    {
        return true;
    }
    if (p1.second > p2.second)
    {
        return false;
    }

    if (p1.first < p2.first)
    {
        return true;
    }

    else
    {
        return false;
    }
    // if second value is same then compare on the basis of first
}
int main()
{
    // sequence containers

    // 1. vectors - similar as array but its size can be increased at runtime / dynamic in nature
    vector<int> vec;
    vector<int> vect = {1, 2, 3, 4, 5};
    vector<int> vecto(3, 0);
    vector<int> vectors(vect);
    // when we insert any element in vec when the capacity is full then the double of the size of the vector is created
    // dynamic in memory allocation
    vect.pop_back();
    cout << "vect size " << vect.size() << endl;
    cout << "vect capacity " << vect.capacity() << endl;
    vect.push_back(5);
    cout << "vect front value " << vect.front() << endl;
    cout << "vect back value " << vect.back() << endl;
    cout << "vect at 1 value " << vect.at(1) << endl; // vec[1]
    // emplace_back - similar as push_back but it creates inplace objects
    // above all are O(1)
    // erase and insert O(n) for insertion or deletion at mid or any specific position
    // vect.erase(vect.begin() + 1); // begin here is an iterator
    // vect.erase(vect.begin() + 1, vect.begin() + 3); // end is not included and size is changed but the capacity is same
    vect.insert(vect.begin() + 2, 100);
    // vect.clear(); // deletes all elements size is changed but capacity is same
    // vect.empty(); // for checking that vector is empty or not
    for (int val : vect)
    {
        cout << "vect elements " << val << endl;
    }
    // iterators
    // vector iterators are begin and end
    cout << "vect iterator begin value " << *(vect.begin()) << endl;
    cout << "vect iterator end value " << *(vect.end()) << endl; // points to next to the last value of vector
    // vector<int>::iterator it;
    // we can use auto instead of this upper line
    for (auto it = vect.begin(); it != vect.end(); it++)
    {
        cout << "vect iterator elements begin to end " << *(it) << endl;
    }
    cout << endl;
    for (auto it = vect.rbegin(); it != vect.rend(); it++)
    {
        cout << "vect iterator elements rbegin to rend " << *(it) << endl;
    }
    cout << endl;

    // rbegin() // for reverse
    // rend() // for reverse

    // 2. List -  sequential container like vectors
    // internally implemented as a doubly linked list  we can push and pop from both the sides
    // all functions of vectors can be applied in list and also the front ones as its doubly linked listm
    list<int> l;
    // list<int> l = {2, 3, 6, 3, 5};
    // size, erase, clear, begin, end , rbegin, rend, indert, front ,back, push,pop, emplace
    l.emplace_back(4);
    l.push_back(5);
    l.push_front(1);
    l.push_front(6);
    l.pop_back();
    l.pop_front();
    for (int val : l)
    {
        cout << "list values " << val << " ";
    }
    cout << endl;

    // 3. Deque - double ended queue
    // it is implemented with the dynamic arrays
    // random access
    // Dequeue - poping element from queue
    // size, erase, clear, begin, end , rbegin, rend, indert, front ,back, push,pop, emplace
    deque<int> d;
    // deque<int> l = {2, 3, 6, 3, 5};
    // size, erase, clear, begin, end , rbegin, rend, indert, front ,back, push,pop, emplace
    d.emplace_back(4);
    d.push_back(5);
    d.push_front(1);
    d.push_front(6);
    d.pop_back();
    d.pop_front();
    cout << "deque at d1 value " << d[1] << endl;
    for (int val : d)
    {
        cout << "deque values " << val << " ";
    }
    cout << endl;

    // pair - utility library
    // if we want to group two elements either they are of different types pair is used
    pair<int, int> p = {2, 5};
    pair<char, int> p1 = {'A', 5};
    cout << "pair first value " << p1.first << endl;
    cout << "pair second value " << p1.second << endl;
    pair<int, pair<char, int>> p2 = {1, {'v', 7}};
    cout << "pair first value " << p2.first << endl;
    cout << "pair second pair first value " << p2.second.first << endl;
    vector<pair<int, int>> p3 = {{5, 6}, {3, 5}};
    p3.push_back({9, 5});  // insert / we have make pair and then pass
    p3.emplace_back(8, 6); // inplpace object created
    // for (pair<int, int> r : p3)
    for (auto r : p3)
    {
        cout << "vector pair first value " << r.first << " vector pair first value " << r.second << endl;
    }

    // non sequence Containers
    // 1. Stack - LIFO Last In First Out
    stack<int> s;
    s.push(1); // O(1)
    s.push(3);
    s.push(5);
    // s.pop();   // remove top element from the stack
    // s.empty(); // checks whether the stack is empty or not
    stack<int> s2;
    s2.swap(s); // by this we get all elements of s into s2 and s is empty now
    cout << "stack size after swapping " << s.size() << endl;
    // while (!s.empty())
    // {
    //     cout << "Stack top values " << s.top() << endl;
    //     s.pop();
    //     // while we get elements from stack we get in reverse form
    // }
    cout << "stack size after swapping " << s2.size() << endl;
    while (!s2.empty())
    {
        cout << "stack top values " << s2.top() << endl;
        s2.pop(); // O(1)
        // while we get elements from stack we get in reverse form
    }

    // 2. Queue - FIFO First In First Out
    // left is front and right is back
    // elements are inserted from back and removed from front
    queue<int> q;
    q.push(1); // O(1)
    q.push(2);
    q.push(3);
    while (!q.empty())
    {
        cout << "Queue front value " << q.front() << endl;
        q.pop(); // O(1)
        // elements from queue we get in as it is we entered
    }
    // swap size emplace work as same as stack

    // 3. Priority Queue - it uses a structure of maxheap or minheap which are complete binary trees. so internally it is a tree structure
    // we visualize it as a stack
    // at the top of the queue highest priority element(largest value) is stored
    priority_queue<int> pq;                             // this is for largest element at top
    priority_queue<int, vector<int>, greater<int>> pqg; // this is for smallest element at top
    // here greater<int> is FUNCTOR which is nothing but just a function object which we pass for our work to be done
    // or basically its a comparator
    // push top pop size empty emplace work as same as queue
    pq.push(5); // O(logn) because pf sorting
    pq.push(3);
    pq.push(10);
    pq.push(4);
    while (!pq.empty())
    {
        cout << "Priority Queue top value " << pq.top() << endl; // O(constant)
        pq.pop();                                                // O(logn) because pf sorting
        // elements from priority queue we get are in sorted order in reversed form
    }

    // 4. Map - Used to store key, value pairs (key,value) and here key are all unique values
    map<string, int> m; // internally it is a self balancing tree
    // m[key] = value; // for inserting or changing value
    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphones"] = 50;
    m["tablet"] = 120;
    m["watch"] = 50;
    m.erase("tv"); // o(logn)
    // m.insert({"camera", 34}); // we can also use emplace//o(logn)
    for (auto pa : m)
    { // it is printed in lexiographically printed order means keys are printed in sorted order in ascending
        cout << "map first value- " << pa.first << " map second value- " << pa.second << endl;
    }

    cout << "count of map keys of laptop - " << m.count("laptop") << endl; // o(logn)
    cout << "maps key value laptop - " << m["laptop"] << endl;
    // if found we get the iterator/ if not found we get the m.end()
    if (m.find("camera") != m.end())
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }

    // other maps
    // 5. multi map - we can store multiple keys/ we can create duplicate keys
    // and here we can not use[] we have to use insert or emplace
    multimap<string, int> mp;
    // m[key] = value; // for inserting or changing value
    mp.emplace("tv", 100);
    mp.emplace("tv", 100);
    mp.emplace("tv", 100);
    mp.emplace("tv", 100);
    mp.insert({"laptop", 100});
    mp.emplace("headphones", 50);
    mp.emplace("tablet", 120);
    mp.emplace("watch", 50);
    // mp.erase("tv");         // for all tv keys
    mp.erase(mp.find("tv")); // for single tv ley
    for (auto pa : mp)
    { // it is printed in lexiographically printed order means keys are printed in sorted order in ascending
        cout << "multimap first value- " << pa.first << " multimap second value- " << pa.second << endl;
        cout << "count of multimap keys of laptop - " << mp.count("tv") << endl; // o(logn)
    }

    // 6. unordered map - map stores data in an sorted way but this unordered map stores data in unordered way
    // we can not create duplicate values
    unordered_map<string, int> up;
    up.emplace("tv", 100); // o(1)
    up.insert({"laptop", 100});
    up.emplace("headphones", 50);
    up.emplace("tablet", 120);
    up.emplace("watch", 50);
    up.erase("tv"); // o(1)
    // count // o(1)
    for (auto pa : up)
    { // it is printed in lexiographically printed order means keys are printed in sorted order in ascending
        cout << "unorderedmap first value- " << pa.first << " unorderedmap second value- " << pa.second << endl;
    }

    // 7. Set - similar to map
    // unique values are stored in set and in sorted order
    // it also uses self balancing tree
    set<int> j;
    j.insert(1);
    j.insert(2);
    j.insert(3);
    j.insert(4);
    j.insert(1);
    j.insert(2);

    // count erase find size empty O(logn) works same as map
    for (auto val : j)
    { // it ignores duplicate values even the size is not increased
        cout << "set values- " << val << endl;
    }
    // lowerbound and upperbound
    // lowerbound - should not be less than the value given
    // upperbound - shoukd be greater than the value given
    cout << "lowerbound- " << *(j.lower_bound(3)) << endl; // if 3 is present then it will return 3  if not then just bigger than 3 and if no bigger and value itself is present then j.end() is returned or 0
    cout << "upperbound- " << *(j.upper_bound(3)) << endl; // it doesnot return the value it returns value greater than the value

    // 8. multiset - stores multiple values sorted order
    multiset<int> ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(4);
    ms.insert(1);
    ms.insert(2);
    for (auto val : ms)
    {
        cout << "multiset values- " << val << endl;
    }
    // 9. unordered set - stored in random order / unsorted orderO(1)
    unordered_set<int> us; // lb ub is not for this
    us.insert(1);
    us.insert(2);
    us.insert(3);
    us.insert(4);
    us.insert(1);
    us.insert(2);
    for (auto val : us)
    {
        cout << "unordered set values- " << val << endl;
    }

    // algorithms

    // 1. sorting
    // for increased sorting
    int arr[5] = {3, 4, 1, 7, 2};
    sort(arr, arr + 5);
    for (int val : arr)
    {
        cout << "sorted values arr- " << val << endl;
    }

    // for increased sorting
    vector<int> vecs = {3, 4, 1, 7, 2};
    sort(vecs.begin(), vecs.end()); // greater<int>() //for decreasing
    for (int val : vecs)
    {
        cout << "sorted values vec- " << val << endl;
    }

    // for decreased sorting
    int arro[5] = {3, 4, 1, 7, 2};
    sort(arro, arro + 5, greater<int>()); // comparator / functor
    for (int val : arro)
    {
        cout << "sorted values for decreased arr- " << val << endl;
    }

    // for increasing pair
    vector<pair<int, int>> vects = {{3, 4}, {1, 7}, {2, 2}};
    sort(vects.begin(), vects.end()); // sorts on the basis of first value

    for (auto val : vects)
    {
        cout << "sorted pair values vects- " << val.first << " " << val.second << endl;
    }

    // custom comparator
    // for sorting on the basis of second value we will use bool custom comparator
    vector<pair<int, int>> vectos = {{3, 4}, {1, 7}, {2, 2}, {1, 2}};
    sort(vectos.begin(), vectos.end(), comparator); // sorts on the basis of first value

    for (auto val : vectos)
    {
        cout << "sorted pair values vects- " << val.first << " " << val.second << endl;
    }

    // 2. reverse
    vector<int> rev = {2, 3, 5, 7, 1};
    // reverse(rev.begin(), rev.end());           // for full vector
    reverse(rev.begin() + 1, rev.begin() + 3); // for a range of vector

    for (auto val : rev)
    {
        cout << "reversed values of vector- " << val << endl;
    }
    // 3. next Permutation
    string str = "abc";
    next_permutation(str.begin(), str.end());
    cout << "next permutation of str- " << str << endl;
    string str1 = "abc";
    prev_permutation(str1.begin(), str1.end());
    cout << "prev permutation of str1- " << str1 << endl;

    // 4. swap, min, max
    cout << "minimum of 4,5- " << min(4, 5) << " maximum of 4,5- " << max(4, 5) << endl;
    int a = 5, b = 10;
    swap(a, b);
    cout << "after swapping a- " << a << " b- " << b << endl;

    // 6. Max & min element
    vector<int> maxmin = {4, 7, 9, 4, 2, 32};
    cout << "max value from vector- " << *(max_element(maxmin.begin(), maxmin.end())) << endl;
    cout << "min value from vector- " << *(min_element(maxmin.begin(), maxmin.end())) << endl;
    // 7. binary search
    cout << "binary search found- " << binary_search(maxmin.begin(), maxmin.end(), 9) << endl;
    cout << "binary search found- " << binary_search(maxmin.begin(), maxmin.end(), 4) << endl;
    // 8. count set bits
    int n = 15;
    cout << "builtin popcount set bits- " << __builtin_popcount(n) << endl;
    long int ln = 15;
    cout << "builtin popcount set bits for long int- " << __builtin_popcountl(ln) << endl;
    long long int lln = 15;
    cout << "builtin popcount set bits for long long int- " << __builtin_popcountll(lln) << endl;

    return 0;
}