
#include "Std_Types.h"
#include "IntCtrl_Cfg.h"
#include "Mcu_Hw.h"

void IntCtrl_Init(void)
{
    APINT = 0xFA05|0x00001234;
    INTCTRL.B.VECPEND = 7;
}