#include <bits/stdc++.h>
using namespace std;

class LinkedList{
public:
    LinkedList()
    {
        _sentinel = new Plant;
        _sentinel->next = _sentinel;
        _sentinel->prev = _sentinel;
        _sentinel->value = 1000001;
    }

    ~LinkedList()
    {
        Plant* current = _sentinel->next;
        while(current != _sentinel){
            Plant* p = current;
            current = current->next;
            delete p;
        }
        delete _sentinel;
    }

    void insert(int value)
    {
        Plant* p = new Plant;
        p->index = _size;
        p->value = value;
        p->next = _sentinel;
        p->prev = _sentinel->prev;
        _sentinel->prev->next = p;
        _sentinel->prev = p;
        ++_size;
    }
    
    bool remove_front()
    {
        if(_size == 0){
            return false;
        }
        Plant* p = _sentinel->next;
        _sentinel->next = p->next;
        p->next->prev = _sentinel;
        delete p;
        --_size;
        return true;
    }

    bool remove_back()
    {
        if(_size == 0){
            return false;
        }
        Plant* p = _sentinel->prev;
        _sentinel->prev = p->prev;
        p->prev->next = _sentinel;
        delete p;
        --_size;
        return true;
    }

    void remove_at(int index)
    {
        if(_size == 0){
            return;
        }
        if(index < 0 || index >= _size){
            return;
        }
        if(index == 0) remove_front();
        else if(index == _size - 1) remove_back();
        else{
            Plant* current = _sentinel;
            --_size;
            int result;
            int half = _size / 2;
            if(index < half){
                for(int i = 0; i <= index; ++i) current = current->next;
                current->prev->next = current->next;
                current->next->prev = current->prev;
                delete current;
            } else {
                int target = _size - index;
                for(int i = 0; i <= target; ++i) current = current->prev;
                current->prev->next = current->next;
                current->next->prev = current->prev;
                delete current;
            }
        }
        Plant* current = _sentinel->next;
        int current_index = 0;
        while (current != _sentinel) {
            current->index = current_index;
            ++current_index;
            current = current->next;
        }
    }

    int eat()
    {
        Plant* p = _sentinel;
        int minutes = 0;
        while(_size){
            p = p->prev;
            if(p->value > p->next->value)
                remove_at(p->next->index);
            if(p == _sentinel) ++minutes;
        }
        return minutes;
    }

    struct Plant{
        int value;
        int index;
        Plant* next;
        Plant* prev;
    };
    Plant* _sentinel = nullptr;
    int _size = 0;
};

int main(){
    LinkedList Plants;
    int N, p; scanf("%d", &N);
    for(int i = 0; i < N; ++i){
        scanf("%d", &p);
        Plants.insert(p);
    }
    printf("%d\n", Plants.eat());
    return 0;
}