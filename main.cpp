#include <iostream>
#include "List.h"
#include "OList.h"

int main()
{
  List *l = new List();
  std::cout << l->toString() << " " << l->length() << "\n";
  l->insert(0,"a");
  std::cout << l->toString() << " " << l->length() << "\n";
  l->insert(1,"b");
  l->insert(2,"c");
  l->insert(3,"d");
  l->insert(4,"f");
  std::cout << l->toString() << " " << l->length() << "\n";
  try {
    l->insert(10,"x");
  } catch (std::exception e){
    std::cout <<"Insert at x didn't work\n";
  }
 std::cout<<"1 is true and 0 is false \n Contains c ="<<l->contains("c")<<std::endl;
  std::cout<<"Contains f ="<<l->contains("f")<<std::endl;
  l->remove(4);
  std::cout<<"removing f"<<std::endl;
 std::cout<<"Contains f ="<<l->contains("f")<<std::endl;
  delete l;
  
  OList *o = new OList();
  std::cout<< o->toString()<<" "<<o->getLength()<< "\n";
  o->insert("15");
  std::cout<< o->toString()<<" "<<o->getLength()<< "\n";
  o->insert("79");
  std::cout<< o->toString()<<" "<<o->getLength()<< "\n";
  o->insert("42");
  std::cout<< o->toString()<<" "<<o->getLength()<< "\n";
  o->insert("65");
  std::cout<< o->toString()<<" "<<o->getLength()<< "\n";
  o->insert("8");
  std::cout<< o->toString()<<" "<<o->getLength()<< "\n";
  std::cout<<"Reversing..."<<std::endl;
  o->reverse();
  std::cout<< o->toString()<<" "<<o->getLength()<< "\n";
  std::cout<<"Reversing Again..."<<std::endl;
   o->reverse();
  std::cout<< o->toString()<<" "<<o->getLength()<< "\n";

  return 0;
}
