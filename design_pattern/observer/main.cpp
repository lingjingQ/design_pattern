#include "concretObserver1.h"
#include "concretObserver2.h"
#include "concretSubject.h"
#include "subject.h"

int main(){
    Subject* sub = new ConcretSubject(8);

    Observer* ob1 = new ConcretObserver1();
    Observer* ob2 = new ConcretObserver2();
    Observer* ob3 = new ConcretObserver1();
    sub->attach(ob1);
    sub->attach(ob2);


    sub->notify();


    std::cout << std::endl; 

    sub->detach(ob1);   

    sub->notify();
}