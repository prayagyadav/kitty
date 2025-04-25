#include <stdio.h>
#include <iostream>
#include "kitty.h"

kitty::kitty(){
  std::cout<<"Constructor\n"<<std::endl;
  variable = 100;
}

kitty::~kitty(){
  std::cout<<"Destructor\n"<<std::endl;
  variable = 0;
}

void kitty::speak(){
  std::cout<<"I'm a cat.\n"<<std::endl;
}
