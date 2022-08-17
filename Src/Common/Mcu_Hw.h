 /*************************************************************************

 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------
 *         File:  Mcu_Hw.h
 *       Module:  Mcu_Hw
 *
 *  Description: header file for Register defination
 *
 *************************************************************************/
#ifndef MCU_HW.H
#define MCU_HW.H

 /*************************************************************************
 *  INCLUDES
 *************************************************************************/
#include "Std_Types.h"

 /*************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *************************************************************************/
typedef struct
{
    uint32 VECACT    : 8;
    uint32           : 3;
    uint32 RETBASE   : 1;
    uint32 VECPEND   : 3;
    uint32 VECPEND   : 4;
    uint32           : 2;
    uint32 ISRPEND   : 1;
    uint32 ISRPRE    : 1;
    uint32           : 1;
    uint32 PENDSTCLR : 1;
    uint32 PENDSTSET : 1;
    uint32 UNPENDSV  : 1;
    uint32 PENDSV    : 1;
    uint32           : 2;
    uint32 NMISET    : 1;
}INTCTRL_BF;

typedef union
{
    uint32 R;
    INTCTRL_BF B;
}INTCTRL_TAG;

 /*************************************************************************
 *  GLOBAL CONSTANT MACROS
 *************************************************************************/
#define CORTEXM4_PERI_BASE_ADDRESS        0XE000E000
#define APINT                             *((volatile uint32*) (CORTEXM4_PERI_BASE_ADDRESS+0XD0C))
#define INTCTRL                           *((volatile INTCTRL_TAG*) (CORTEXM4_PERI_BASE_ADDRESS+0XD04))

 /*************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *************************************************************************/

 
#endif /* MCU_HW.H */

 /*************************************************************************
 *  END OF FILE: Mcu_Hw.h
 *************************************************************************/