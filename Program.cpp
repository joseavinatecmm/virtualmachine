/*
 * =====================================================================================
 *
 *       Filename:  Memory.cpp
 *
 *    Description: Implementation 
 *
 *        Version:  1.0
 *        Created:  05/25/2020 19:01:47
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include "Program.hpp"
#include "Move.hpp"
#include "Store.hpp"
#include "ADD.hpp"
#include "AL.hpp"
#include "BL.hpp"
	

using namespace std;

Program::Program()
{
	instructionIndex = 0;

}

void Program::addInstruction(Instruction* theInstruction)
{
	if (instructionIndex <= 10) 
	{
		instructions[instructionIndex] = theInstruction;
		instructionIndex++;
	}
}	


Instruction* Program::getInstruction(int theAddress)
{
	return instructions[theAddress];
}

Instruction* Program::getInstructions()
{
	return *instructions;
}

void Program::display()
{
        Move* move; 
        ADD* add; 
	Store* sto;
	AL* al;
	BL* bl;

	cout << "Memory: " << endl;	
        cout << endl;

        for (int address=0; address < instructionIndex; address++) {

		auto* theInstruction = getInstruction(address);
    

		switch(theInstruction->getCode()) 
	   	{ 
		   case Instruction::START:
			
			std::cout << address << ":["  <<  theInstruction->getName() << "]" << endl;
			break;
  	
		   case Instruction::STOP:
			
			std::cout << address << ":[" << theInstruction->getName() <<"]"  << endl;
			break;
					
		   case Instruction::MOV:
 		        move = static_cast<Move*>(theInstruction);
		
			std::cout << address << ":["  << theInstruction->getName() << " "
	                << move->getRegister()->getName() << "," 
			<< move->getAddress() << "]" << endl;
			break;

		   case Instruction::STO:
		
			sto = static_cast<Store*>(theInstruction);
			std::cout << address << ":["  << theInstruction->getName() << "  " 
			          << sto->getAddress() <<"]" << endl;

			break;
	
		   case Instruction::ADD:
		
			add = static_cast<ADD*>(theInstruction);
                        
                        al = static_cast<AL*>(add->getReg1()); 
                        bl = static_cast<BL*>(add->getReg2());

			std::cout << address << ":[" << theInstruction->getName() << "  " 
			     << al->getValue() << ", "
			     << bl->getValue()  
			     << "]" << endl;

			break;
		
		    default:
			break;

	   	}
	}

}


void Program::displayInstructions()
{
   cout << "This program contains the following instructions: " << endl;	
   cout << endl;

   for (int address=0; address < instructionIndex; address++) {

	   auto* instruction = getInstruction(address);
           Move* move;
           ADD* add;
           Store* sto;

	   switch(instruction->getCode()) 
	   { 
		case Instruction::START:
	   		cout << address << ": " <<  instruction->getName() << endl; 
			break;
  	
		case Instruction::STOP:
	   		cout  << address << ": " <<  instruction->getName() << endl; 
			break;
					
		case Instruction::MOV:
	   		move = static_cast<Move*>(instruction);	
			
			std::cout << " Instruction:: " << instruction->getName() << " "
	                << move->getRegister()->getName() << "," 
			<< move->getAddress() << endl; 	
			break;

		case Instruction::STO:
			sto = static_cast<Store*>(instruction);;

	   		cout << address << ": " 
	   		     << instruction->getName() << " "
		     	     << sto->getAddress()
		             << endl;
			break;

		case Instruction::ADD:
			add = static_cast<ADD*>(instruction);

	   		cout << address << ": " 
	   		     << instruction->getName() << " "
		     	     << add->getOperand1() << ", "
		     	     << add->getOperand2() 
		             << endl;
			break;
	
		default:
			break;

	   }
	  
   }
}




