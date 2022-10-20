/*
 * =====================================================================================
 *
 *       Filename:  CPU.hpp
 *
 *    Description: Interface 
 *
 *        Version:  1.0
 *        Created:  06/12/2020 21:14:59
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include "ControlUnit.hpp"
#include "Alu.hpp"
#include "Memory.hpp"
#include "PC.hpp"
#include "IR.hpp"
#include "MAR.hpp"
#include "MBR.hpp"
#include "ACC.hpp"
#include "AL.hpp"
#include "BL.hpp"
#include "Instruction.hpp"

class CPU 
{
	private:
	        ControlUnit cu;
	public:
		static PC pc;
		static IR ir;
		static MAR mar;
		static MBR mbr;
		static ACC acc;
		static AL al;
		static BL bl;
	

	        CPU();
		void updateRegisters(Instruction* instruction, int address);
		void doMachineCycle(Memory* memory);

};
