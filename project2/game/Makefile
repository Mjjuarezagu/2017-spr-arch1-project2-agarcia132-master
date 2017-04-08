# makfile configuration
COMMON_OBJECTS  = 
CPU             = msp430g2553
CFLAGS          = -mmcu=${CPU} -I../h
LDFLAGS		= -L/opt/ti/msp430_gcc/include

#switch the compiler (for the internal make rules)
CC              = msp430-elf-gcc
AS              = msp430-elf-as

all: Main.elf 

#additional rules for files
Main.elf: ${COMMON_OBJECTS} p1_interrupt_handler.o led.o switches.o buzzer.o Main.o ../lib/libTimer.a
	${CC} ${CFLAGS} ${LDFLAGS} -o $@ $^

load: Main.elf
	mspdebug rf2500 "prog Main.elf"

clean:
	rm -f *.o *.elf *~
