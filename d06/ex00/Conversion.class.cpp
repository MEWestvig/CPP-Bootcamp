#include "Conversion.class.hpp"

Conversion::Conversion(void)
{
	return;
}
Conversion::Conversion(Conversion const &src)
{
	*this = src;
	return;
}
Conversion::~Conversion(void)
{
	return;
}
Conversion	&Conversion::operator=(Conversion const &rhs)
{
	static_cast <void> (rhs);
	return (*this);
}
char Conversion::convertToChar(double d)
{
	char c;
	if (std::isnan(d) == true)
	{
		throw Conversion::Impossible();
	}
	c = static_cast<char>(d);
	if (std::isprint(c) == false)
	{
		throw Conversion::NonDisplayable();
	}
	return (c);
}
int Conversion::convertToInt(double d)
{
	int i;
	if (std::isnan(d) == true || std::isinf(d) == true)
	{
		throw Conversion::Impossible();
	}
	if (d > static_cast<double>(INT_MAX) || d < static_cast<double>(INT_MIN))
	{
		throw Conversion::Impossible();
	}
	i = static_cast<int>(d);
	return (i);
}
double Conversion::convertToDouble(double d)
{
	return (static_cast<double>(d));
}
float Conversion::convertToFloat(float d)
{
	return (static_cast<float>(d));
}



Conversion::Impossible::Impossible(void)
{
	return;
}
Conversion::Impossible::Impossible(Impossible const &src)
{
	*this = src;
	return;
}
Conversion::Impossible::~Impossible(void) throw()
{
	return;
}
Conversion::Impossible
&Conversion::Impossible::operator=(Impossible const &rhs)
{
	static_cast <void> (rhs);
	return (*this);
}
char const *Conversion::Impossible::what() const throw()
{
	return ("Impossible.");
}


Conversion::NonDisplayable::NonDisplayable(void)
{
	return;
}
Conversion::
NonDisplayable::NonDisplayable(NonDisplayable const &src)
{
	*this = src;
	return;
}
Conversion::NonDisplayable::~NonDisplayable(void) throw()
{
	return;
}
Conversion::NonDisplayable
&Conversion::NonDisplayable::operator=(NonDisplayable const &rhs)
{
	static_cast <void> (rhs);
	return (*this);
}
char const *Conversion::NonDisplayable::what() const throw()
{
	return ("Non Displayable.");
}

int Conversion::getPrecision(char const *str)
{
	unsigned int     before;
	unsigned int     after;

	before = 0;
	while (str[before] && str[before] != '.')
	{
		before += 1;
	}
	after = before + 1;
	while (str[after] && isdigit(str[after]))
	{
		after += 1;
	}
	after -= before;
	return ((strlen(str) == before || after == 1) ? 1 : after - 1);
}
