#include "interrupt.h"
#include "conf_tc_irq.h"

irqflags_t irqs_pause( void ) {
  return cpu_irq_save();
}

void irqs_resume( irqflags_t irq_flags ) {
  cpu_irq_restore(irq_flags);
}
