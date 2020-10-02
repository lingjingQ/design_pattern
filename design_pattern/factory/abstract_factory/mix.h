#ifndef MIX_H
#define MIX_H

class Mix : public Phone {
public :
    Mix(){
        std::cout << "mix is constructed" << std::endl;
    }
    ~Mix(){
        std::cout << "mix is destroyed" << std::endl;
    }
};

#endif