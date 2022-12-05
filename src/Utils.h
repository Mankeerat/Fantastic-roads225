#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <list>
#include <stack>
#include <algorithm>
#include <map>

using std::map;
using std::multimap;
using std::pair;
using std::vector;
using std::list;
using std::stack;
using std::queue;
using std::string;
using std::cout;
using std::cin;
using std::endl;


map<string, int> mapDistanceGraph(vector<int> & v, map<int, string> & m);
void printDistanceMap(map<string, int> & m);
