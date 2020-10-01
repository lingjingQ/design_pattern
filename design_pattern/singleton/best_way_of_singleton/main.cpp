#include "singleton.h"
#include <iostream>
using namespace std;

int main(){
    Singleton& s1 = Singleton::get_instance();
    Singleton& s2 = Singleton::get_instance();
    Singleton& s3 = Singleton::get_instance();
}