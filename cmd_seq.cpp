#include <iostream>
#include <vector>
#include <unistd.h>
#include <chrono>
#include <ctime>
#include <unistd.h>

int main() {

  std::vector<std::string>cmds={"move forward", "turn left", "turn right", "move forward", "stop", "slow down"};
  for( const std::string& command: cmds ){
    
    auto now = std::chrono::system_clock::to_time_t( std::chrono::system_clock::now() );
    
    std::cout << "[" << std::ctime(&now) << "] Robot: " << command << std::endl;
    sleep(1);
  }
  
  return 0;
}
