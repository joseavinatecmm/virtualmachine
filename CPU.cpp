/*
 * =====================================================================================
 *
 *       Filename:  CPU.cpp
 *
 *    Description:  Implementation 
 *
 *        Version:  1.0
 *        Created:  06/12/2020 21:38:05
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include "CPU.hpp"
#include "iostream"

CPU::CPU(){}

PC CPU::pc;
IR CPU::ir;
MAR CPU::mar;
MBR CPU::mbr;
ACC CPU::acc;
AL CPU::al;
BL CPU::bl;

void CPU::updateRegisters(Instruction* instruction, int address)
{
	
	// Updating the Memory Buffer Register
	CPU::mar.setAddress(address);	
	std::cout << "MAR stores the address:: " << CPU::mar.getAddress() << endl;
	
	// Updating the Program Counter Register
	CPU::pc.setAddress(address);	
	std::cout << "PC stores the address:: " << CPU::pc.getAddress() + 1 << endl;
	
	// Assing fetched instruction to register IR
	CPU::mbr.setInstruction(instruction);
	std::cout << "MBR stores the fetched instruction:: " << CPU::mbr.getInstruction()->getName() << endl;
		
	CPU::ir.setInstruction(instruction);
	std::cout << "IR stores the fetched instruction:: " << CPU::ir.getInstruction()->getName() << endl;
	
	std::cout << "ACC stores :: " << CPU::acc.getValue() << endl;
	
	std::cout << "AL value:: " << CPU::al.getValue() << endl;
	std::cout << "BL value:: " << CPU::bl.getValue() << endl;
		
	std::cout << endl;
	
}

void CPU::doMachineCycle(Memory* memory)
{

	for(int address = 0; address <= 5; address++)
	{
		std::cout << "*********************** NEW MACHINE CYCLE ****************************" << endl;
		// Fetching Instruction
		auto* instruction =  cu.fetch(memory->getProgram(), address);

		// Update Registers
		updateRegisters(instruction, address);
	
		// Decoding and Excuting Instruction
		cu.decode(instruction, memory);
	}
}
