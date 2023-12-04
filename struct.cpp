#include <iostream>

struct User {
  std::string first_name;
  std::string last_name;
  std::string get_status() { return status; }

private:
  std::string status = "Gold";
};

int main() {
  User me;
  me.first_name = "Caleb";
  me.last_name = "Curry";
  std::cout << me.first_name << std::endl;
  std::cout << me.last_name << std::endl;
  std::cout << me.get_status() << std::endl;
  return 0;
}
