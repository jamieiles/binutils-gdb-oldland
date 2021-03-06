/*
 * Note: this file is generated by the 'instructions' tool in the oldland
 * repository.  Don't hand edit!
 */
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#include "opcode/oldland.h"

static const struct oldland_operand operands[] = {
        [OPERAND_INDEX] = {
                .name = "index",
                .type = OPERAND_INDEX,
                .is_meta = true,
                .meta = {
                        .ops = (const struct oldland_operand *[]) {
                                &operands[OPERAND_RA], &operands[OPERAND_IMM13],
                        },
                        .nr_ops = 2,
                },
        },
        [OPERAND_IMM13] = {
                .name = "imm13",
                .type = OPERAND_IMM13,
                .pcrel = false,
                .def = {
                        .bitpos = 12,
                        .length = 13,
                },
        },
        [OPERAND_IMM16PC] = {
                .name = "imm16pc",
                .type = OPERAND_IMM16PC,
                .pcrel = true,
                .def = {
                        .bitpos = 10,
                        .length = 16,
                },
        },
        [OPERAND_IMM16] = {
                .name = "imm16",
                .type = OPERAND_IMM16,
                .pcrel = false,
                .def = {
                        .bitpos = 10,
                        .length = 16,
                },
        },
        [OPERAND_IMM13PC] = {
                .name = "imm13pc",
                .type = OPERAND_IMM13PC,
                .pcrel = true,
                .def = {
                        .bitpos = 12,
                        .length = 13,
                },
        },
        [OPERAND_IMM24] = {
                .name = "imm24",
                .type = OPERAND_IMM24,
                .pcrel = true,
                .def = {
                        .bitpos = 0,
                        .length = 24,
                },
        },
        [OPERAND_RD] = {
                .name = "rd",
                .type = OPERAND_RD,
                .pcrel = false,
                .def = {
                        .bitpos = 0,
                        .length = 4,
                },
        },
        [OPERAND_RA] = {
                .name = "ra",
                .type = OPERAND_RA,
                .pcrel = false,
                .def = {
                        .bitpos = 8,
                        .length = 4,
                },
        },
        [OPERAND_RB] = {
                .name = "rb",
                .type = OPERAND_RB,
                .pcrel = false,
                .def = {
                        .bitpos = 4,
                        .length = 4,
                },
        },
};

const struct oldland_instruction oldland_instructions_0[16] = {
        [OPCODE_AND] = {
                .name = "and",
                .class = 0,
                .opcode = OPCODE_AND,
                .constbits = 0x00000000,
                .nr_operands = 3,
                .op1 = {&operands[OPERAND_RD]},
                .op2 = {&operands[OPERAND_RA]},
                .op3 = {&operands[OPERAND_IMM13], &operands[OPERAND_RB]},
                .formatsel = 25,
        }, 
        [OPCODE_ASR] = {
                .name = "asr",
                .class = 0,
                .opcode = OPCODE_ASR,
                .constbits = 0x00000000,
                .nr_operands = 3,
                .op1 = {&operands[OPERAND_RD]},
                .op2 = {&operands[OPERAND_RA]},
                .op3 = {&operands[OPERAND_IMM13], &operands[OPERAND_RB]},
                .formatsel = 25,
        }, 
        [OPCODE_LSL] = {
                .name = "lsl",
                .class = 0,
                .opcode = OPCODE_LSL,
                .constbits = 0x00000000,
                .nr_operands = 3,
                .op1 = {&operands[OPERAND_RD]},
                .op2 = {&operands[OPERAND_RA]},
                .op3 = {&operands[OPERAND_IMM13], &operands[OPERAND_RB]},
                .formatsel = 25,
        }, 
        [OPCODE_LSR] = {
                .name = "lsr",
                .class = 0,
                .opcode = OPCODE_LSR,
                .constbits = 0x00000000,
                .nr_operands = 3,
                .op1 = {&operands[OPERAND_RD]},
                .op2 = {&operands[OPERAND_RA]},
                .op3 = {&operands[OPERAND_IMM13], &operands[OPERAND_RB]},
                .formatsel = 25,
        }, 
        [OPCODE_SUBC] = {
                .name = "subc",
                .class = 0,
                .opcode = OPCODE_SUBC,
                .constbits = 0x00000000,
                .nr_operands = 3,
                .op1 = {&operands[OPERAND_RD]},
                .op2 = {&operands[OPERAND_RA]},
                .op3 = {&operands[OPERAND_IMM13], &operands[OPERAND_RB]},
                .formatsel = 25,
        }, 
        [OPCODE_XOR] = {
                .name = "xor",
                .class = 0,
                .opcode = OPCODE_XOR,
                .constbits = 0x00000000,
                .nr_operands = 3,
                .op1 = {&operands[OPERAND_RD]},
                .op2 = {&operands[OPERAND_RA]},
                .op3 = {&operands[OPERAND_IMM13], &operands[OPERAND_RB]},
                .formatsel = 25,
        }, 
        [OPCODE_SUB] = {
                .name = "sub",
                .class = 0,
                .opcode = OPCODE_SUB,
                .constbits = 0x00000000,
                .nr_operands = 3,
                .op1 = {&operands[OPERAND_RD]},
                .op2 = {&operands[OPERAND_RA]},
                .op3 = {&operands[OPERAND_IMM13], &operands[OPERAND_RB]},
                .formatsel = 25,
        }, 
        [OPCODE_ADD] = {
                .name = "add",
                .class = 0,
                .opcode = OPCODE_ADD,
                .constbits = 0x00000000,
                .nr_operands = 3,
                .op1 = {&operands[OPERAND_RD]},
                .op2 = {&operands[OPERAND_RA]},
                .op3 = {&operands[OPERAND_IMM13], &operands[OPERAND_RB]},
                .formatsel = 25,
        }, 
        [OPCODE_MUL] = {
                .name = "mul",
                .class = 0,
                .opcode = OPCODE_MUL,
                .constbits = 0x00000000,
                .nr_operands = 3,
                .op1 = {&operands[OPERAND_RD]},
                .op2 = {&operands[OPERAND_RA]},
                .op3 = {&operands[OPERAND_IMM13], &operands[OPERAND_RB]},
                .formatsel = 25,
        }, 
        [OPCODE_BST] = {
                .name = "bst",
                .class = 0,
                .opcode = OPCODE_BST,
                .constbits = 0x00000000,
                .nr_operands = 3,
                .op1 = {&operands[OPERAND_RD]},
                .op2 = {&operands[OPERAND_RA]},
                .op3 = {&operands[OPERAND_IMM13], &operands[OPERAND_RB]},
                .formatsel = 25,
        }, 
        [OPCODE_BIC] = {
                .name = "bic",
                .class = 0,
                .opcode = OPCODE_BIC,
                .constbits = 0x00000000,
                .nr_operands = 3,
                .op1 = {&operands[OPERAND_RD]},
                .op2 = {&operands[OPERAND_RA]},
                .op3 = {&operands[OPERAND_IMM13], &operands[OPERAND_RB]},
                .formatsel = 25,
        }, 
        [OPCODE_MOV] = {
                .name = "mov",
                .class = 0,
                .opcode = OPCODE_MOV,
                .constbits = 0x00000000,
                .nr_operands = 2,
                .op1 = {&operands[OPERAND_RD]},
                .op2 = {&operands[OPERAND_IMM13], &operands[OPERAND_RB]},
                .op3 = {},
                .formatsel = 25,
        }, 
        [OPCODE_ADDC] = {
                .name = "addc",
                .class = 0,
                .opcode = OPCODE_ADDC,
                .constbits = 0x00000000,
                .nr_operands = 3,
                .op1 = {&operands[OPERAND_RD]},
                .op2 = {&operands[OPERAND_RA]},
                .op3 = {&operands[OPERAND_IMM13], &operands[OPERAND_RB]},
                .formatsel = 25,
        }, 
        [OPCODE_OR] = {
                .name = "or",
                .class = 0,
                .opcode = OPCODE_OR,
                .constbits = 0x00000000,
                .nr_operands = 3,
                .op1 = {&operands[OPERAND_RD]},
                .op2 = {&operands[OPERAND_RA]},
                .op3 = {&operands[OPERAND_IMM13], &operands[OPERAND_RB]},
                .formatsel = 25,
        }, 
        [OPCODE_CMP] = {
                .name = "cmp",
                .class = 0,
                .opcode = OPCODE_CMP,
                .constbits = 0x00000000,
                .nr_operands = 2,
                .op1 = {&operands[OPERAND_RA]},
                .op2 = {&operands[OPERAND_IMM13], &operands[OPERAND_RB]},
                .op3 = {},
                .formatsel = 25,
        }, 
};

const struct oldland_instruction oldland_instructions_1[16] = {
        [OPCODE_BLTS] = {
                .name = "blts",
                .class = 1,
                .opcode = OPCODE_BLTS,
                .constbits = 0x00000000,
                .nr_operands = 1,
                .op1 = {&operands[OPERAND_IMM24], &operands[OPERAND_RB]},
                .op2 = {},
                .op3 = {},
                .formatsel = 25,
        }, 
        [OPCODE_BLTE] = {
                .name = "blte",
                .class = 1,
                .opcode = OPCODE_BLTE,
                .constbits = 0x00000000,
                .nr_operands = 1,
                .op1 = {&operands[OPERAND_IMM24], &operands[OPERAND_RB]},
                .op2 = {},
                .op3 = {},
                .formatsel = 25,
        }, 
        [OPCODE_SWI] = {
                .name = "swi",
                .class = 1,
                .opcode = OPCODE_SWI,
                .constbits = 0x00000000,
                .nr_operands = 1,
                .op1 = {&operands[OPERAND_IMM13]},
                .op2 = {},
                .op3 = {},
                .formatsel = -1,
        }, 
        [OPCODE_BLT] = {
                .name = "blt",
                .class = 1,
                .opcode = OPCODE_BLT,
                .constbits = 0x00000000,
                .nr_operands = 1,
                .op1 = {&operands[OPERAND_IMM24], &operands[OPERAND_RB]},
                .op2 = {},
                .op3 = {},
                .formatsel = 25,
        }, 
        [OPCODE_RET] = {
                .name = "ret",
                .class = 1,
                .opcode = OPCODE_RET,
                .constbits = 0x020000f0,
                .nr_operands = 0,
                .op1 = {},
                .op2 = {},
                .op3 = {},
                .formatsel = -1,
        }, 
        [OPCODE_CALL] = {
                .name = "call",
                .class = 1,
                .opcode = OPCODE_CALL,
                .constbits = 0x00000000,
                .nr_operands = 1,
                .op1 = {&operands[OPERAND_IMM24], &operands[OPERAND_RB]},
                .op2 = {},
                .op3 = {},
                .formatsel = 25,
        }, 
        [OPCODE_BGTES] = {
                .name = "bgtes",
                .class = 1,
                .opcode = OPCODE_BGTES,
                .constbits = 0x00000000,
                .nr_operands = 1,
                .op1 = {&operands[OPERAND_IMM24], &operands[OPERAND_RB]},
                .op2 = {},
                .op3 = {},
                .formatsel = 25,
        }, 
        [OPCODE_BNE] = {
                .name = "bne",
                .class = 1,
                .opcode = OPCODE_BNE,
                .constbits = 0x00000000,
                .nr_operands = 1,
                .op1 = {&operands[OPERAND_IMM24], &operands[OPERAND_RB]},
                .op2 = {},
                .op3 = {},
                .formatsel = 25,
        }, 
        [OPCODE_BGTE] = {
                .name = "bgte",
                .class = 1,
                .opcode = OPCODE_BGTE,
                .constbits = 0x00000000,
                .nr_operands = 1,
                .op1 = {&operands[OPERAND_IMM24], &operands[OPERAND_RB]},
                .op2 = {},
                .op3 = {},
                .formatsel = 25,
        }, 
        [OPCODE_BGTS] = {
                .name = "bgts",
                .class = 1,
                .opcode = OPCODE_BGTS,
                .constbits = 0x00000000,
                .nr_operands = 1,
                .op1 = {&operands[OPERAND_IMM24], &operands[OPERAND_RB]},
                .op2 = {},
                .op3 = {},
                .formatsel = 25,
        }, 
        [OPCODE_B] = {
                .name = "b",
                .class = 1,
                .opcode = OPCODE_B,
                .constbits = 0x00000000,
                .nr_operands = 1,
                .op1 = {&operands[OPERAND_IMM24], &operands[OPERAND_RB]},
                .op2 = {},
                .op3 = {},
                .formatsel = 25,
        }, 
        [OPCODE_BLTES] = {
                .name = "bltes",
                .class = 1,
                .opcode = OPCODE_BLTES,
                .constbits = 0x00000000,
                .nr_operands = 1,
                .op1 = {&operands[OPERAND_IMM24], &operands[OPERAND_RB]},
                .op2 = {},
                .op3 = {},
                .formatsel = 25,
        }, 
        [OPCODE_BGT] = {
                .name = "bgt",
                .class = 1,
                .opcode = OPCODE_BGT,
                .constbits = 0x00000000,
                .nr_operands = 1,
                .op1 = {&operands[OPERAND_IMM24], &operands[OPERAND_RB]},
                .op2 = {},
                .op3 = {},
                .formatsel = 25,
        }, 
        [OPCODE_RFE] = {
                .name = "rfe",
                .class = 1,
                .opcode = OPCODE_RFE,
                .constbits = 0x00000000,
                .nr_operands = 0,
                .op1 = {},
                .op2 = {},
                .op3 = {},
                .formatsel = -1,
        }, 
        [OPCODE_BEQ] = {
                .name = "beq",
                .class = 1,
                .opcode = OPCODE_BEQ,
                .constbits = 0x00000000,
                .nr_operands = 1,
                .op1 = {&operands[OPERAND_IMM24], &operands[OPERAND_RB]},
                .op2 = {},
                .op3 = {},
                .formatsel = 25,
        }, 
};

const struct oldland_instruction oldland_instructions_2[16] = {
        [OPCODE_STR8] = {
                .name = "str8",
                .class = 2,
                .opcode = OPCODE_STR8,
                .constbits = 0x00000000,
                .nr_operands = 2,
                .op1 = {&operands[OPERAND_RB]},
                .op2 = {&operands[OPERAND_IMM13PC], &operands[OPERAND_INDEX]},
                .op3 = {},
                .formatsel = 25,
        }, 
        [OPCODE_CACHE] = {
                .name = "cache",
                .class = 2,
                .opcode = OPCODE_CACHE,
                .constbits = 0x00000000,
                .nr_operands = 2,
                .op1 = {&operands[OPERAND_RA]},
                .op2 = {&operands[OPERAND_IMM13]},
                .op3 = {},
                .formatsel = -1,
        }, 
        [OPCODE_GCR] = {
                .name = "gcr",
                .class = 2,
                .opcode = OPCODE_GCR,
                .constbits = 0x00000000,
                .nr_operands = 2,
                .op1 = {&operands[OPERAND_RD]},
                .op2 = {&operands[OPERAND_IMM13]},
                .op3 = {},
                .formatsel = -1,
        }, 
        [OPCODE_SCR] = {
                .name = "scr",
                .class = 2,
                .opcode = OPCODE_SCR,
                .constbits = 0x00000000,
                .nr_operands = 2,
                .op1 = {&operands[OPERAND_IMM13]},
                .op2 = {&operands[OPERAND_RA]},
                .op3 = {},
                .formatsel = -1,
        }, 
        [OPCODE_LDR8] = {
                .name = "ldr8",
                .class = 2,
                .opcode = OPCODE_LDR8,
                .constbits = 0x00000000,
                .nr_operands = 2,
                .op1 = {&operands[OPERAND_RD]},
                .op2 = {&operands[OPERAND_IMM13PC], &operands[OPERAND_INDEX]},
                .op3 = {},
                .formatsel = 25,
        }, 
        [OPCODE_STR32] = {
                .name = "str32",
                .class = 2,
                .opcode = OPCODE_STR32,
                .constbits = 0x00000000,
                .nr_operands = 2,
                .op1 = {&operands[OPERAND_RB]},
                .op2 = {&operands[OPERAND_IMM13PC], &operands[OPERAND_INDEX]},
                .op3 = {},
                .formatsel = 25,
        }, 
        [OPCODE_STR16] = {
                .name = "str16",
                .class = 2,
                .opcode = OPCODE_STR16,
                .constbits = 0x00000000,
                .nr_operands = 2,
                .op1 = {&operands[OPERAND_RB]},
                .op2 = {&operands[OPERAND_IMM13PC], &operands[OPERAND_INDEX]},
                .op3 = {},
                .formatsel = 25,
        }, 
        [OPCODE_LDR16] = {
                .name = "ldr16",
                .class = 2,
                .opcode = OPCODE_LDR16,
                .constbits = 0x00000000,
                .nr_operands = 2,
                .op1 = {&operands[OPERAND_RD]},
                .op2 = {&operands[OPERAND_IMM13PC], &operands[OPERAND_INDEX]},
                .op3 = {},
                .formatsel = 25,
        }, 
        [OPCODE_LDR32] = {
                .name = "ldr32",
                .class = 2,
                .opcode = OPCODE_LDR32,
                .constbits = 0x00000000,
                .nr_operands = 2,
                .op1 = {&operands[OPERAND_RD]},
                .op2 = {&operands[OPERAND_IMM13PC], &operands[OPERAND_INDEX]},
                .op3 = {},
                .formatsel = 25,
        }, 
};

const struct oldland_instruction oldland_instructions_3[16] = {
        [OPCODE_CPUID] = {
                .name = "cpuid",
                .class = 3,
                .opcode = OPCODE_CPUID,
                .constbits = 0x00000000,
                .nr_operands = 2,
                .op1 = {&operands[OPERAND_RD]},
                .op2 = {&operands[OPERAND_IMM13]},
                .op3 = {},
                .formatsel = -1,
        }, 
        [OPCODE_GPSR] = {
                .name = "gpsr",
                .class = 3,
                .opcode = OPCODE_GPSR,
                .constbits = 0x00000000,
                .nr_operands = 1,
                .op1 = {&operands[OPERAND_RD]},
                .op2 = {},
                .op3 = {},
                .formatsel = -1,
        }, 
        [OPCODE_BKP] = {
                .name = "bkp",
                .class = 3,
                .opcode = OPCODE_BKP,
                .constbits = 0x00000000,
                .nr_operands = 0,
                .op1 = {},
                .op2 = {},
                .op3 = {},
                .formatsel = -1,
        }, 
        [OPCODE_ORLO] = {
                .name = "orlo",
                .class = 3,
                .opcode = OPCODE_ORLO,
                .constbits = 0x00000000,
                .nr_operands = 3,
                .op1 = {&operands[OPERAND_RD]},
                .op2 = {&operands[OPERAND_RB]},
                .op3 = {&operands[OPERAND_IMM16]},
                .formatsel = -1,
        }, 
        [OPCODE_NOP] = {
                .name = "nop",
                .class = 3,
                .opcode = OPCODE_NOP,
                .constbits = 0x00000000,
                .nr_operands = 0,
                .op1 = {},
                .op2 = {},
                .op3 = {},
                .formatsel = -1,
        }, 
        [OPCODE_MOVHI] = {
                .name = "movhi",
                .class = 3,
                .opcode = OPCODE_MOVHI,
                .constbits = 0x00000000,
                .nr_operands = 2,
                .op1 = {&operands[OPERAND_RD]},
                .op2 = {&operands[OPERAND_IMM16]},
                .op3 = {},
                .formatsel = -1,
        }, 
        [OPCODE_SPSR] = {
                .name = "spsr",
                .class = 3,
                .opcode = OPCODE_SPSR,
                .constbits = 0x00000000,
                .nr_operands = 1,
                .op1 = {&operands[OPERAND_RA]},
                .op2 = {},
                .op3 = {},
                .formatsel = -1,
        }, 
};


