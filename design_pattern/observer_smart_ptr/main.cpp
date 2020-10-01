#include "teacher.h"
#include "primary.h"
#include "senior.h"
#include <iostream>
#include <memory>
using namespace std;
int main(){
    shared_ptr<Teacher> mrs = make_shared<Teacher>();
    std::string words;

    shared_ptr<Student> xiaogang = make_shared<Primary>("xiaogang");
    shared_ptr<Student> liujin = make_shared<Senior>("liujin");
    xiaogang->observe(mrs);
    liujin->observe(mrs);

    mrs->attach(xiaogang);
    mrs->attach(liujin);
    // mrs->detach(liujin);

    while(getline(std::cin, words)){

        string mood;
        cin >> mood;
        mrs->setMood(mood);

        mrs->speak(words);
        // std::cin.ignore();

        cin.ignore();
    }
}