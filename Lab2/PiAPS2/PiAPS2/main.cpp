#include "Builder.h"
#include <iostream>
int main()
{
	Director dir;
	BoardBusBuilder bus_builder;
	BoardTaxiBuilder taxi_builder;
	BoardAnyCar* BB = dir.createBoard(bus_builder, 5, 3, 2);
	std::cout << std::endl;
	BoardAnyCar* BT = dir.createBoard(taxi_builder, 2, 1);
	system("pause");
	return 0;
}