/*
 * Note: this file is generated by the 'instructions' tool in the oldland
 * repository.  Don't hand edit!
 */
#ifndef __OLDLAND_TYPES_H__
#define __OLDLAND_TYPES_H__

#include <stdbool.h>

enum alu_opcode {
	ALU_OPCODE_AND = 6,
	ALU_OPCODE_ASR = 14,
	ALU_OPCODE_BST = 9,
	ALU_OPCODE_LSL = 4,
	ALU_OPCODE_BIC = 8,
	ALU_OPCODE_LSR = 5,
	ALU_OPCODE_SUBC = 3,
	ALU_OPCODE_COPYA = 15,
	ALU_OPCODE_CPUID = 19,
	ALU_OPCODE_SWI = 17,
	ALU_OPCODE_XOR = 7,
	ALU_OPCODE_SUB = 2,
	ALU_OPCODE_MOVHI = 13,
	ALU_OPCODE_ADD = 0,
	ALU_OPCODE_GCR = 16,
	ALU_OPCODE_ADDC = 1,
	ALU_OPCODE_RFE = 18,
	ALU_OPCODE_MUL = 20,
	ALU_OPCODE_COPYB = 11,
	ALU_OPCODE_OR = 10,
	ALU_OPCODE_CMP = 12,
};

enum operand_type {
	OPERAND_INDEX,
	OPERAND_IMM13,
	OPERAND_IMM16PC,
	OPERAND_IMM16,
	OPERAND_IMM13PC,
	OPERAND_IMM24,
	OPERAND_RD,
	OPERAND_RA,
	OPERAND_RB,
};

enum { OPCODE_AND = 6 };
enum { OPCODE_ASR = 14 };
enum { OPCODE_BLTS = 10 };
enum { OPCODE_LSL = 4 };
enum { OPCODE_LSR = 5 };
enum { OPCODE_SUBC = 3 };
enum { OPCODE_CPUID = 7 };
enum { OPCODE_SCR = 2 };
enum { OPCODE_SWI = 15 };
enum { OPCODE_STR8 = 6 };
enum { OPCODE_XOR = 7 };
enum { OPCODE_SUB = 2 };
enum { OPCODE_BLT = 8 };
enum { OPCODE_RET = 1 };
enum { OPCODE_ADD = 0 };
enum { OPCODE_GCR = 1 };
enum { OPCODE_CALL = 0 };
enum { OPCODE_MUL = 11 };
enum { OPCODE_LDR8 = 2 };
enum { OPCODE_BNE = 5 };
enum { OPCODE_STR32 = 4 };
enum { OPCODE_BST = 9 };
enum { OPCODE_BIC = 8 };
enum { OPCODE_BGTS = 9 };
enum { OPCODE_B = 4 };
enum { OPCODE_BKP = 0 };
enum { OPCODE_STR16 = 5 };
enum { OPCODE_ORLO = 13 };
enum { OPCODE_NOP = 15 };
enum { OPCODE_ADDC = 1 };
enum { OPCODE_LDR16 = 1 };
enum { OPCODE_MOVHI = 11 };
enum { OPCODE_BGT = 7 };
enum { OPCODE_RFE = 2 };
enum { OPCODE_LDR32 = 0 };
enum { OPCODE_BEQ = 6 };
enum { OPCODE_OR = 10 };
enum { OPCODE_CMP = 12 };


struct oldland_operand {
	const char			*name;
	bool				is_meta;
	bool				pcrel;
	enum operand_type		type;
	union {
		struct {
			unsigned int	bitpos;
			unsigned int	length;
			unsigned int	shift;
		} def;
		struct {
			const struct oldland_operand **ops;
			unsigned int	nr_ops;
		} meta;
	};
};

#define MAX_OP_TYPES 2

struct oldland_instruction {
	const char			*name;
	unsigned int			class;
	unsigned int			opcode;
	unsigned int			nr_operands;
	/*
	 * Constant bits that are always set in the instruction to optimize the
	 * hardware decoding.
	 */
	unsigned int			constbits;
	/*
	 * Some instructions may have multiple encodings (maximum of 2 right
	 * now) - for example the arithmetic instructions can take either 2
	 * source registers or one register and an immediate.
	 *
	 * If formatsel >= 0 then this indicates the bit to select to take the
	 * second format.
	 */
	int				formatsel;
	const struct oldland_operand	*op1[MAX_OP_TYPES];
	const struct oldland_operand	*op2[MAX_OP_TYPES];
	const struct oldland_operand	*op3[MAX_OP_TYPES];
};

extern const struct oldland_instruction oldland_instructions_0[16];
extern const struct oldland_instruction oldland_instructions_1[16];
extern const struct oldland_instruction oldland_instructions_2[16];
extern const struct oldland_instruction oldland_instructions_3[16];

#endif /* __OLDLAND_TYPES_H__ */
