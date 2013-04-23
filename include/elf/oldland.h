#ifndef _ELF_MOXIE_H
#define _ELF_MOXIE_H

#include "elf/reloc-macros.h"

START_RELOC_NUMBERS (elf_oldland_reloc_type)
  RELOC_NUMBER (R_OLDLAND_NONE, 0)
  RELOC_NUMBER (R_OLDLAND_32, 1)
  RELOC_NUMBER (R_OLDLAND_PC24, 2)
  RELOC_NUMBER (R_OLDLAND_PC16, 3)
  RELOC_NUMBER (R_OLDLAND_HI16, 4)
  RELOC_NUMBER (R_OLDLAND_LO16, 5)
  RELOC_NUMBER (R_OLDLAND_16, 6)
END_RELOC_NUMBERS (R_OLDLAND_max)

#endif /* _ELF_MOXIE_H */
