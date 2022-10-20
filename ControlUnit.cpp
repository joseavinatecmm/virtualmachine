/*
 * =====================================================================================
 *
 *       Filename:  ControlUnit.cpp
 *
 *    Description: Implementation 
 *
 *        Version:  1.0
 *        Created:  05/26/2020 23:26:41
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include "CPU.hpp"
#include "ControlUnit.hpp"
#include "Memory.hpp"
#include "Alu.hpp"
#include "IR.hpp"
#include "AL.hpp"
#include "BL.hpp"
#include "Move.hpp"
#include "ADD.hpp"
#include "Store.hpp"

#include <iostream>


ControlUnit::ControlUnit()
{
	this->status = "STOPPED";
}	

Instruction* ControlUnit::fetch(Program theProgram, int theAddress)
{
        this->status = "FETCHED";
	std::cout << this->status << "  theAddress:: " << theAddress << endl; 
	
	auto* instruction = theProgram.getInstruction(theAddress);

	std::cout << this->status << " instruction:: I" << theAddress << endl; 
	


	return instruction;
}

void ControlUnit::decode(Instruction* theInstruction, Memory* memory)
{
        Move* move; 
        ADD* add; 
	Store* sto;
	AL* al;
	BL* bl;
	
        this->status = "DECODED";

	switch(theInstruction->getCode()) 
	   { 
		   case Instruction::START:
			
			std::cout << this->status << " Instruction:: " << theInstruction->getName() << endl;
			execute(theInstruction->getName());
			break;
  	
		   case Instruction::STOP:
			
			std::cout << this->status << " Instruction:: " << theInstruction->getName() << endl;
	   		execute(theInstruction->getName()); 
			break;
					
		   case Instruction::MOV:
 		        move = static_cast<Move*>(theInstruction);
		
			std::cout << this->status  << " Instruction:: " << theInstruction->getName() << " "
	                << move->getRegister()->getName() << "," 
			<< move->getAddress() << endl;
	   		 	
			if ((move->getRegister()->getName()).compare("AL") == 0) 
			{
                        	al = static_cast<AL*>(move->getRegister()); 
				al->setValue(memory->getData(move->getAddress()));
				CPU::al.setValue(al->getValue());
				execute(theInstruction->getName(), al->getValue());
			}
			else
			{		
                        	bl = static_cast<BL*>(move->getRegister());
				bl->setValue(memory->getData(move->getAddress()));
				CPU::bl.setValue(bl->getValue());
				execute(theInstruction->getName(), bl->getValue());
			}

			break;

		   case Instruction::STO:
		
			sto = static_cast<Store*>(theInstruction);
			std::cout << this->status << " Instruction:: " << theInstruction->getName() << "  " 
			          << sto->getAddress() << endl;

	   		execute(sto->getAddress(), memory);
			break;
	
		   case Instruction::ADD:
		
			std::cout << "ADD";
			add = static_cast<ADD*>(theInstruction);
                        
                        al = static_cast<AL*>(add->getReg1()); 
                        bl = static_cast<BL*>(add->getReg2());

			std::cout << this->status << " Instruction:: " << theInstruction->getName() << "  " 
			     << al->getValue() << ", "
			     << bl->getValue()  
			     << endl;

	   		execute(theInstruction->getName(), al->getValue(), bl->getValue());
			break;
		
		default:
			break;

	   }

}

void ControlUnit::execute(std::string decodedInstruction)
{
	this->status = "Executing";
	std::cout << this->status << " Instruction:: " << decodedInstruction << endl; 

	if (decodedInstruction.compare("START") == 0)
		std::cout << "Starting Program" << endl;
	else 
		std::cout << "Stoppig Programa" << endl;
}

void ControlUnit::execute(int theAddress, Memory* memory)
{
	this->status = "Executing";
        	
	memory->setData(theAddress, CPU::acc.getValue());

	std::cout << this->status << " Instruction:: " << "STO..." << endl; 
	std::cout << "Storing at Memory Address:: " << theAddress << " the value from the Accumulator:: " 
		  << CPU::acc.getValue() << endl;
	std::cout << endl;


}

void ControlUnit::execute(std::string theRegister, int theValue)
{
	this->status = "Executing";
	std::cout << this->status << " Instruction:: " << "MOV..." << endl; 
	std::cout << "Moving to register:: " << theRegister << " the value::  " << theValue << endl;
	std::cout << endl;
}

void ControlUnit::execute(std::string decodedInstruction, int theOperand1, int theOperand2)
{
   
	Alu alu(theOperand1, theOperand2);
        CPU::acc.setValue(alu.add());

	this->status = "Executing";

	if (decodedInstruction.compare("ADD") == 0) 
	{
		std::cout << this->status << " Instruction:: " << "ADD..." << endl; 
		std::cout << "ADDING:: " << theOperand1 << " + " << theOperand2 << " = " 
		          << CPU::acc.getValue() << endl;
		std::cout << endl;
	}

}



