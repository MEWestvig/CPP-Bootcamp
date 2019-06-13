#include "Conversion.class.hpp"

int main(int argc, char const *argv[]) {
	double val;
	float val2;
	int pre;

	for(int i = 1; i < argc; i++)
	{
		if (strcmp(argv[i], "0") != 0 && atof(argv[i]) == 0)
		{
			std::cout << "Please input one of the following types: char, int, float or double" << std::endl;
		}
		else
		{
			val = atof(argv[i]);
			val2 = strtof(argv[i], NULL);
			pre = Conversion::getPrecision(argv[i]);
			try
			{
				std::cout << "char: " << Conversion::convertToChar(val) << std::endl;
			}
			catch(std::exception &e)
			{
				std::cout << e.what() << std::endl;
			}
			try
			{
				std::cout << "int: "<< Conversion::convertToInt(val) << std::endl;
			}
			catch(std::exception &e)
			{
				std::cout << e.what() << std::endl;
			}
			std::cout << std::fixed << std::showpoint;
			std::cout << "float: "<< std::setprecision((pre > 13) ? 13 : pre) << Conversion::convertToFloat(val2) << "f" << std::endl;
			std::cout << "double: "<< std::setprecision(pre) << Conversion::convertToDouble(val) << std::endl;
		}
	}
	return 0;
}
