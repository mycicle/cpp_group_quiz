#ifndef INPUT_HPP_
#define INPUT_HPP_

#include "RenderableTag.hpp"
#include <string>
#include <iostream>
class input : public RenderableTag {
    private:
        std::string type;
        std::string name;
    public:
        input(std::string type, std::string name) : type(type), name(name) {}
        void render(){
            std::cout << "<input type=\"" << type << "\" name=\"" << name << "\"/>";
        }
};
#endif