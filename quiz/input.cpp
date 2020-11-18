#include "input.hpp"
using namespace std;

input::input(string name, string type) : name(name), type(type) {}
input::render(){}



//Fill in the blank. User types in an answer, which is compared on the server. There could be more than one correct answer, and the string match must be exact.
//For example, if the correct answer is "abc" and the user types "abc " or "ABC" the answer is incorrect.
//<input type="test" name="q1_1"/>