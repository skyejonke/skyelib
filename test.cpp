#include "skyelib.cpp"
#include <iostream>
#include <chrono>
#include <thread>

int main() {

    toolkit t = toolkit();
  while (true) {
    for (int i = 0; i < 100; i++){
      std::cout << t.getRand(1,100) << std::endl;
    }
    std::cout << "-----" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(10));
  }

}


