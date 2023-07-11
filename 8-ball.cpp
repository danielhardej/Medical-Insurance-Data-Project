#include <iostream>
#include <cstdlib>
 
int main() {
  
  srand(time(NULL));
  int answer = std::rand() % 10;

  // Your future is here
  std::cout << "MAGIC 8-BALL:\n\n";

  switch (answer) {
    case 0:
      std::cout << "It is certain.\n";
      break;
    case 1:
      std::cout << "It is decidedly so.\n";
      break;
    case 2:
      std::cout << "Without a doubt.\n";
      break;
    case 3:
      std::cout << "Yes - definitely.\n";
      break;
    case 4:
      std::cout << "You may rely on it.\n";
      break;
    case 5:
      std::cout << "As I see it, yes.\n";
      break;
    case 6:
      std::cout << "Most likely.\n";
      break;
    case 7:
      std::cout << "Outlook good.\n";
      break;
    case 8:
      std::cout << "Yes.\n";
      break;
    case 9:
      std::cout << "Signs point to yes.\n";
      break;
    default:
      std::cout << "Very doubtful.\n";
      break;
  }
  
 
}