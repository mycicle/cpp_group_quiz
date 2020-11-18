#include "RenderableTag.hpp"
#include <iostream>
#include <string>

class img : public RenderableTag {
    private:
        std::string cls;
        std::string src;
    public:
        img(std::string src, std::string cls="default"): src(src), cls(cls) {
            this->render();
        }
        void render() {
            std::cout << "rendering an image with src " << src << " and style class " << cls << std::endl;
        }
};

