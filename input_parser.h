#ifndef INPUT_PARSER_H
#define INPUT_PARSER_H

#include <algorithm>
#include <cmath>
#include <math.h>
#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <QMessageBox>
#include <QString>


class element {

    //class stores element name and number

public:

    element(std::string ele_name, int num, int outside_sub, bool paren, int cd) :
        name(ele_name), numb_of_elements(num), outside_parenthesis_subscript(outside_sub), in_paren(paren), code(cd)
    {
        numb_of_elements *= outside_parenthesis_subscript;
    }

    std::string name;
    int numb_of_elements;
    int outside_parenthesis_subscript = 1;
    bool in_paren = false;
    int code = 0;
};


class compound {

    // stores elements in vector
    // The compound stores a Variable so it can be turned into a algebriac equation
public:

    compound(const std::vector<element>& k_elements, bool ChangeSide = false) :
    compound_elements(k_elements), mChangeSide(ChangeSide)
    {
    }

    std::vector<element> compound_elements;

    size_t size = compound_elements.size();
    int Constant = 0;
    char mVariable = ' ';
    bool mChangeSide = false; // if the compound is right before the equals sign set to true

};


class equation
{
public:

    //stores both the left and right sides of the equation
    equation(const std::vector<compound>& Left, const std::vector<compound>& Right) : left(Left), right(Right){}

    std::vector<compound> left, right;
};


class Variable {

public:

    Variable(char Var = ' ', double Num = 0) : var(Var), constant(Num) {}

    char var = ' ';
    double constant = 0.0;
    bool solved_for;
};

class Expression : public Variable{

public:

    Expression(std::string expression = " ", char Var = ' ', double num = 0) : Variable(Var,num),expr(expression){}

    std::string expr = " ";
};

void parse(std::string line);
bool Is_Number(char);
bool Is_Uppercase(char);
bool Is_Lowercase(char);
void Turn_into_Algebra_Equation(const equation&);
void Insert_Variables(std::string&,const std::map<char,double>&);
void Insert_Expressions(std::string&, const std::map<char,std::string>&);
void Solve_for_Variable(std::string,std::map<char,double>&);
void Use_Substitution(std::string, std::map<char,double>&, std::map<char,std::string>&,std::vector<std::string>&);
Variable Find_Variable(std::vector<Variable>, std::vector<Variable>);
//void Solve_Using_Substitution(std::string, std::map<char,double>&);
void Remove_Zeros(std::vector<Variable>&, std::vector<Variable>&);
void Distribute(std::string&,std::vector<Variable>&,double);
void CombineLikeTerms(std::vector<Variable>& side);
void IsolateVariable(std::vector<Variable>& Variable_Side, std::vector<Variable>& Variable_Value, char value);
bool substitution(std::vector<Variable> Left, std::vector<Variable> Right, std::map<char,std::string>& exprs);
std::vector<double> Check_For_Fractions(std::map<char,double>& coeffiecents);
void removing_solved_for_expressions(std::map<char,double>& coefficents, std::map<char,std::string>& expressions);
std::vector<double> Check_For_Fractions(std::map<char,double>&);
bool is_balanced(std::vector<compound>& total);
void Add_Coeffiecents_To_Compound(std::vector<compound>& total, std::map<char,double>&coeffiecents);
std::string Create_Output(const std::vector<compound>& total);
void Format_Output(std::string&);

#endif // INPUT_PARSER_H
