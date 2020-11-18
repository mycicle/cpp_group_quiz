#include "RenderableTag.hpp"
#include <iostream>

class textarea : public RenderableTag {
    private:
        RenderableTag* child;
        std::string cls;
        std::string name;

    public:
        textarea(std::string name, std::string cls="default", RenderableTag* child=nullptr): 
            name(name), cls(cls), child(child) {
                child->render();
                this->render();
            }
        void render() {
            std::cout << "text area with name " << name << " and style class " << cls << std::endl;
        }
};