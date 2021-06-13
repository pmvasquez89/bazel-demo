#include <ctime>
#include <string>
#include <iostream>

std::string get_greet(const std::string& who) {
  return "Hello " + who;
}

void print_localtime() {
  std::time_t result = std::time(nullptr);
  std::cout << std::asctime(std::localtime(&result));
}

int main(int argc, char** argv) {
  //Just a simple change in the file, to test git tool
  //Second change, for git
  //Third change, for git
  int a = 6;  //just a little code change to try pull request git
  std::string who = "world";
  if (argc > 1) {
    who = argv[1];
  }
  std::cout << get_greet(who) << std::endl;
  print_localtime();
  return 0;
}
