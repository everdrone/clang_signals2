#include <iostream>

#include <boost/signals2.hpp>

int main() {
  boost::signals2::signal<void()> sig;

  sig.connect([]() { std::cout << "signals2" << std::endl; });

  sig();

  std::cout << "hello" << std::endl;
  return 0;
}