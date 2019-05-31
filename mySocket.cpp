#include "mySocket.h"
#include <sstream>
#include <vector>
#include <cstdio>
#include <stdio.h>
#include <string>

string Convert(double x)
{

	ostringstream out;
	out.precision(10);//覆盖默认精度
	out << x;
	string str = out.str();
	return str;
}

int initSocket() {
	return 0;
}

void parseData(string s, double &lngt1, double &lat1, double &lngt2, double &lat2) {

}

string codeData(vector<double> & lngt, vector<double> & lat)
{
	string res = "";

	return res;
}