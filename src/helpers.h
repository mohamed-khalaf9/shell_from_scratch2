#ifndef HELPERS_H
#define HELPERS_H
#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
#include "trie.h"
#include <filesystem>
#include <fstream>
#include <sstream>
#include <stack>
#include <algorithm>

std::string parse_input_with_autocomplete(std::string& input,Trie& trie,bool first_time = true);
void autocomplete(std::string& input, Trie& trie);
void add_executables_to_trie(Trie& trie);
std::vector<std::string> split(const std::string &s, char delimiter);
bool is_path_exist(const std::string& path);
std::pair<std::string,std::string> fetch_command_and_argument(const std::string& input);
std::vector<std::string> handle_quoting(std::string argument);
std::vector<std::string> handle_single_qoutes(const std::string & argument);
std::vector<std::string> handle_double_quotes(const std::string& argument);
std::string handle_non_quoted_backslash(const std::string& argument);
std::string remove_extra_spaces(const std::string& str);

#endif