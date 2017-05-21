#include "interrupt.h"
#include "conf_tc_irq.h"

static volatile irqflags_t irq_flags;

void irqs_pause( void ) {
  irq_flags = cpu_irq_save();
}

void irqs_resume( void ) {
  cpu_irq_restore(irq_flags);
}
