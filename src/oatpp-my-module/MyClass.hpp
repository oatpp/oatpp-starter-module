//
// Created by Leonid on 2019-01-26.
//

#ifndef PROJECT_MYCLASS_HPP
#define PROJECT_MYCLASS_HPP

#include "oatpp/Types.hpp"
#include "oatpp/base/Log.hpp"

class MyClass {
public:

  static void doSomething() {
    OATPP_LOGd("MyClass", "doSomething called");
  }

};


#endif //PROJECT_MYCLASS_H
