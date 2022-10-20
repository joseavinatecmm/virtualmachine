/*
 * =====================================================================================
 *
 *       Filename:  Instruction.hpp
 *
 *    Description: Interface 
 *
 *        Version:  1.0
 *        Created:  05/19/2020 23:13:51
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#ifndef INSTRUCTION_HPP
#define INSTRUCTION_HPP

#include<string>

using namespace std;
class Instruction 
{
	private:
		string name;
		int code;
		int length;
                
	public:
		static const int START = 50;
		static const int STOP = 51;
		static const int MOV = 52;
		static const int STO = 53;
		static const int ADD = 54;
		Instruction();
                Instruction(string theName, int theCode, int theLength);
		
		void setName(string theName);
		void setCode(int theCode);
		void setLength(int theLength);

		string getName();		
		int getCode();
		int getLength();
};
#endif
