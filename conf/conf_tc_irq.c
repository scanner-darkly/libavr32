#include "interrupt.h"
#include "conf_tc_irq.h"

irqflags_t irqs_pause( void ) {
  irqflags_t irq_flags = sysreg_read(AVR32_SR);
  cpu_irq_disable_level(UI_IRQ_PRIORITY);
  cpu_irq_disable_level(APP_TC_IRQ_PRIORITY);
  return irq_flags;
}

void irqs_resume( irqflags_t irq_flags ) {
  cpu_irq_restore(irq_flags);
}
