#include <iostream>
#include <vector>
#include <unistd.h>
#include <chrono>
#include <ctime>
#include <unistd.h>

// new line of code from main

int main() {

	std::vector<std::string>cmds={"move forward", "turn left", "turn right", "move forward", "stop", "slow down", "speed up"};

  for( const std::string& command: cmds ){
    
    auto now = std::chrono::system_clock::to_time_t( std::chrono::system_clock::now() );
    
    std::cout << "[" << std::ctime(&now) << "] Robot: " << command << std::endl;
    sleep(2);
  }
  
  return 0;
}
