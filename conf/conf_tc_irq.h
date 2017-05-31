#ifndef _CONF_TC_IRQ_H_
#define _CONF_TC_IRQ_H_

#include "types.h"

//============================================
//====== IRQ priorities
#define SYS_IRQ_PRIORITY       1
#define APP_TC_IRQ_PRIORITY    2
#define UI_IRQ_PRIORITY        1

//==============================================
//==== timers

// application timer
#define APP_TC                 (&AVR32_TC)
#define APP_TC_CHANNEL         0
#define APP_TC_IRQ             AVR32_TC_IRQ0
#define APP_TC_IRQ_GROUP       AVR32_TC_IRQ_GROUP

u8 irqs_pause(void);
void irqs_resume(u8 irq_flags);

#endif
