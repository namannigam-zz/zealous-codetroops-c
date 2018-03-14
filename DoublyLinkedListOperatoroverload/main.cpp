#include<iostream>
#include<string>
#include<sstream>
using namespace std;

class DLLNode {
public:
 DLLNode()
    {
        next = prev = NULL;
    }
    DLLNode(int el, DLLNode *n = NULL, DLLNode *p = NULL)
    {
        info = el;
        next = n;
        prev = p;
    }
    int info;
    DLLNode *next, *prev;
};

class DLList
{
public:
    DLList()
    {
        head = tail = NULL;
    }
    void addToTail(const int);
    void deleteFromTail();
    ~DLList();
    bool isEmpty() const
    {
        return head == NULL;
    }
    void addToHead(int);
    void deleteFromHead();
    bool isInList(int) const;
    string toString();
    void deleteNode(int el);
    int operator[] (int i);
protected:
    DLLNode *head, *tail;
};

DLList::~DLList()
{
    while (!isEmpty())
    {
        deleteFromHead();
    }
}

void DLList::addToHead(int el)
{
    if (head == NULL)
    {
        head = tail = new DLLNode(el);
    }
    else
    {
        head = new DLLNode(el, head);
        head->next->prev = head;
    }
}

void DLList::addToTail(int el)
{
    if (tail != NULL)
    {
        tail = new DLLNode(el, NULL, tail);
        tail->prev->next = tail;
    }
    else
        head = tail = new DLLNode(el);
}

void DLList::deleteFromHead()
{
    if (head == tail)
    { // if only one DLLNode on the list;
        delete head;
        head = tail = NULL;
    }
    else
    { // if more than one DLLNode in the list;
        head = head->next;
        delete head->prev;
        head->prev = NULL;
    }
}

void DLList::deleteFromTail()
{
    if (head == tail)
    { // if only one DLLNode on the list;
        delete head;
        head = tail = NULL;
    }
    else
    { // if more than one DLLNode in the list;
        tail = tail->prev;
        delete tail->next;
        tail->next = NULL;
    }
}

bool DLList::isInList(int el) const
{
    DLLNode *tmp = head;
    while (tmp != NULL && tmp->info != el)
        tmp = tmp->next;

    return tmp != NULL;
}

string DLList::toString()
{
    stringstream tream;
    for (DLLNode *tmp = head; tmp != NULL; tmp = tmp->next){
        tream << tmp->info;
    }
    return tream.str();
}

void DLList::deleteNode(int el){
    for (DLLNode* temp = head; temp != NULL; temp = temp->next){
        if (temp->info == el)
            delete temp;
    }
}

int DLList::operator[](int i){
    //treat like an array and find i then return itx
    for (int j = 0; j < i; ++j){
        head = head->next;
    }
    return head->info;

}

class MySet{
private:
    DLList items;
    int size;
public:
    MySet();
    int getSize() const;
    bool isEmpty() const;
    void add(int el);
    void remove(int el);
    MySet operator+(MySet& T);
    MySet operator-(MySet& T);
    string toString();
};

MySet::MySet(){
    size = 0;
}
int MySet::getSize() const{
    return size;
}
bool MySet::isEmpty() const{
    return items.isEmpty();
}
void MySet::add(int el){
    bool yorn = items.isInList(el);
    if (yorn == false)
        items.addToTail(el);
}
void MySet::remove(int el){
    bool yorn = items.isInList(el);
    if (yorn == true)
        items.deleteNode(el);
}
MySet MySet::operator + (MySet& T){
    MySet* set= new MySet;
    for (int i = 0; i < size; ++i){
        for (int j = 0; j < size; ++j){
            set->add(items[i]);
            set->add(this[j]);
        }
    }
}
MySet MySet::operator - (MySet& T){
    /////////////////////////
}
string MySet::toString(){
    string strin = items.toString();
    return strin;
}

int main(){
    MySet s, t;
    s.add(1);
    s.add(2);
    t.add(3);
    t.add(2);
    MySet a = s;
    cout << a.toString() << endl;
    return 0;
}