#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "teacher.h"
#include <memory>
using namespace std;
class Teacher;
class Student {
protected:

    std::string _name;
    weak_ptr<Teacher> _teacher;

public:
    virtual void action(std::string& words) = 0;

    Student(std::string name):_name(name){

    }

    void observe(shared_ptr<Teacher>& tea){
        _teacher = tea;
    }

    void setName(std::string& name){
        _name = name;
    }

    std::string getName() const {
        return _name;
    }
};

#endif