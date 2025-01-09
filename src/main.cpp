#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>

int main() {
  // Flush after every std::cout / std:cerr
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;
  
  // Uncomment this block to pass the first stage
  std::string input;


  while(true){
  std::cout << "$ ";
  std::getline(std::cin,input);
  std::stringstream ss(input);

  std::string command;
  std::string argument;
  ss >> command >> argument;

  if(command == "exit")
  {
    exit(stoi(argument));
  }
  else if(command == "echo")
  {
    std::cout<<argument<<std::endl;
  }

  std::cout << command+": command not found\n";


  }
}