#ifndef MYSOCKET_H
#define MYSOCKET_H

#include <cstdlib>
#include <cstdio>
#include <iostream>

#include <string>
#include <vector>
#include <cstring>

#define SRVPORT 10005
#define CONNECT_NUM 5
#define MAX_NUM 32768

using namespace std;

int initSocket();

void parseData(string s, double &lngt1, double &lat1, double &lngt2, double &lat2);
string codeData(vector<double> & lngt,vector<double> & lat);

#endif