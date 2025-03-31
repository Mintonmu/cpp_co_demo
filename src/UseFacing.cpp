#include "UseFacing.h"
UserFacing demo_coroutine() {
  std::cout << "hello, world" << std::endl;
  co_return;
}