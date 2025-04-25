#include <stdio.h>
#include <iostream>

class kitty {
 public:
  kitty();
  ~kitty();

  void speak();
  void speak2(){ std::cout<<"totes works\n"<<std::endl; }

 private:
  int variable;

};
