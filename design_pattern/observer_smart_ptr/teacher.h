#ifndef TEACHER_H
#define TEACHER_H

#include <list>
#include "student.h"
#include <string>
#include <memory>
using namespace std;
class Teacher {
    std::string _words;
    std::list<shared_ptr<Student>> students;
    string _mood;
public:
    Teacher(const string& mood="happy"):_mood(mood){}

    void attach(shared_ptr<Student> stu){
        students.push_back(stu);
    }
    
    string getMood(){
        return _mood;
    }

    void setMood(string mood){
        _mood = mood;
    }
    void detach(shared_ptr<Student> stu){
        students.remove(stu);
    }
    


    void speak(std::string words){
        _words = words;
        notify_all();
    }

    void notify_all(){
        for(const auto& stu : students){
            stu->action(_words);
        }
    }
};

#endif