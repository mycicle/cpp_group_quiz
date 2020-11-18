#include <string>
#include <iostream>

class RenderableTag {
    protected:
        std::string content;
    public:
        RenderableTag(std::string content="default content"): content(content) {}
        virtual void render() = 0;
};      



