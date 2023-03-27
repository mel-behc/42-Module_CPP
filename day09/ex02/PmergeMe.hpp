#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>
#include <sstream>
#include <string>
#include <ctime>
#include <iomanip>

bool inputChecker(std::string& input);
void pmergMe(std::vector<int>& vector, std::list<int>& list, int nargs);
void mergeInsertionSortVector(std::vector<int>& arr, int l, int r, int k);
void mergeInsertionSortList(std::list<int>& list);

#endif