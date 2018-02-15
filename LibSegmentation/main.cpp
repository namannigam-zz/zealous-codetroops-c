#include <stdexcept>
#include <iostream>

int main(){
  try {
      int x= 4/0;
      throw std::runtime_error("test");
  }
  catch(std::exception const &e){
      std::cerr << e.what() << "\n";
  }
}