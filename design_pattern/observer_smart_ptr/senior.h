#ifndef SENIOR_H
#define SENIOR_H

#include "student.h"
#include <iostream>
#include <string>

class Senior : public Student{
public :
    Senior(std::string name):Student(name){

    }

    void action(std::string& words){
        std::cout << getName() ;
        auto it = _teacher.lock();
         if(it && it->getMood() == "happy"){
            if(words == "class is down"){
                std::cout << ": it's time to high!!!!" << std::endl;
            }else if(words == "hello everyone"){
                std::cout << ": go to home!!" << std::endl;
            }else{
                std::cout << ": what are you talking about?!" << std::endl;
            }
        }else{
            std::cout << ": yes sir!!!!!" << std::endl;
        }
    }
};

#endif