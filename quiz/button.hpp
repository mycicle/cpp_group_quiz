#pragma once
#include "RenderableTag.hpp"
#include <iostream>
#include <string>

using namespace std;

// HTML button = <button type="button">Click here! </button>
class button : public RenderableTag {
    private:
        std::string cls;
        std::string value;

    public:
        button( std::string value, std::string cls="default"): value(value), cls(cls) {
            this->render();
          }
        void render() {
            // do whatever you want to do to render it on screen here
            std::cout<< "<button type=" << value << ""
        }   
        
};