#include <iostream>
#include <memory>

int main()
{
    std::unique_ptr<int> a = std::make_unique<int>(5);
    std::unique_ptr<int> b = std::move(a); // ERROR solved by transfering ownership
 
    return 0; 
}
  