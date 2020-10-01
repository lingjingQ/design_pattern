#ifndef PRIMARY_H
#define PRIMARY_H

#include "student.h"
#include <iostream>
#include <string>

class Primary : public Student {
public :
    Primary(std::string name) : Student(name){}

    void action(std::string& words){
        if(words == "class is down"){
            std::cout << getName() << ": goodbye teacher!" << std::endl;
        }else if(words == "hello everyone"){
            std::cout << getName() << ": hello teacher!" << std::endl;
        }else{
            std::cout << getName() << ": where is my mama~~~" << std::endl;
        }
    }
};

#endif