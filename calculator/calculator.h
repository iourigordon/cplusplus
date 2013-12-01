#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__

enum Token_value {
	NAME,
	NUMBER,
	END,
	PLUS='+',
	MINUS='-',
	MUL='*',
	DIV='/',
	PRINT=';',
	ASSIGN='=',
	LP='(',
	RP=')'
};

class Calculator
{
	public :
		Calculator();
		void proccessInput(void);
		inline void addElementToMap(const string& s, double dVal) {table[s] = dVal;}
		inline int getNumErrors(void) {return no_of_errors;}
		inline int* getAddresOfFirstMember(void) {return &no_of_errors;}
	private :
		double expr(bool get);
		double term(bool get);
		double prim(bool get);
		double error(const string& s);
		Token_value get_token();

		int					no_of_errors;
		Token_value 		curr_tok;
		double 				number_value;
		string 				string_value;
		map<string,double> 	table;
};

#endif
