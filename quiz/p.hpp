#include "RenderableTag.hpp"


class P : Public RenderableTag {

private:
  RenderableTag* child;
  std::string cls;
  std::string text;
  
  public:
  P(std::string text, std::string cls="default", RenderableTag* child) : cls(cls), text(text), child(child){
    child->render();
    this->render();
  }
  void render(){
    std::cout << this->text << std::endl;
  }
};





//<p class="inst">Instructions for the question</p>