#include <iostream>
#include "usrmap.h"
#include "usrpair.h"

int main()
{
	std::cout<<testFunc()<<"\n";
	usrstd::pair<int,int> obj1 = usrstd::make_pair(1, 100);
	std::cout<<obj1.first<<obj1.second;
	return 0;
}