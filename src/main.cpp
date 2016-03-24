#include <iostream>
#include <cassert>
#include "usrmap.h"
#include "usrpair.h"
#include "algo/usrfind.h"

int main()
{
	std::cout<<testFunc()<<"\n";
	usrstd::pair<int,int> obj1 = usrstd::make_pair(1, 100);
	std::cout<<obj1.first<<" : "<<obj1.second<<"\n";
	int testArray[10] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 21};
	int* result = usr::find(testArray, testArray+9, 1);
	assert(result == testArray+9 || *result == 1);
	return 0;
}