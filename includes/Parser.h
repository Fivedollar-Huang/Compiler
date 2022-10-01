#include <iostream>
#include <string>

#include "HandleFiles/HandleReadFile.cpp"
#include "HandleFiles/HandleWriteFile.cpp"
#include "DrawGraph.cpp"
#include "Structures.cpp"
// #include "InstValue.cpp"
#include "Instruction.cpp" 
#include "ValueTable.cpp"
#include "HELP.cpp"

bool intNum;

Ops relOp();
std::string ident();
// number() reads digits, return inst number of this digit.
int number();
// varRef() reads name, return (instNum, value) of this ref.
Instruction* varRef(std::string ident);
std::pair<std::string, Instruction*> factor();
std::pair<std::string, Instruction*> term();
std::pair<std::string, Instruction*> expression();
void relation(struct Opr* target);

void assignment();


// ****************************************
int funcCall();
// ****************************************


void ifStatement();
void whileStatement();
void returnStatement();

void statement();
void statSequence();

void varDecl();
void funcDecl();
void formalParam();
void funcBody();
void computation();





