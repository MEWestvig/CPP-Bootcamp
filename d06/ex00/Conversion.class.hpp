#ifndef CONVERSION_CLASS_HPP
# define CONVERSION_CLASS_HPP

# include <iostream>
# include <stdexcept>
# include <cmath>
# include <cfloat>
# include <iomanip>
# include <stdlib.h>

class Conversion
{
private:

public:
	Conversion(void);
	Conversion(Conversion const &src);
	~Conversion(void);
	Conversion &operator=(Conversion const &rhs);

	static char                     convertToChar(double d);
	static int                      convertToInt(double d);
	static double                   convertToDouble(double d);
	static float                    convertToFloat(float d);
	static int						getPrecision(char const *str);

	class Impossible : public std::exception
	{
	public:
		Impossible(void);
		Impossible(Impossible const &src);
		virtual ~Impossible(void) throw();
		Impossible &operator=(Impossible const &rhs);
		virtual char const *what() const throw();
	};

	class NonDisplayable : public std::exception
	{
	public:
		NonDisplayable(void);
		NonDisplayable(NonDisplayable const &src);
		virtual ~NonDisplayable(void) throw();
		NonDisplayable &operator= (NonDisplayable const &rhs);
		const char *what(void) const throw();
	};
};

#endif
