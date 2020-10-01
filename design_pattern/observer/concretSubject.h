#ifndef CONCRET_SUBJECT_H
#define CONCRET_SUBJECT_H

#include "observer.h"
#include "subject.h"
#include <list>

class ConcretSubject : public Subject {
public:
    ConcretSubject(int state = 0) : _state(state), observers(std::list<Observer*>()){}

    void attach(Observer* observer){
        observers.push_back(observer);
    }

    void detach(Observer* observer){
        observers.remove(observer);
    }

    void notify(){
        for(const auto& obs : observers){
            obs->update(_state);
        }
    }

private:
    std::list<Observer*> observers;
    int _state;
};

#endif