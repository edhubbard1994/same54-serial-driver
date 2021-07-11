RM := rm -rf


OPENOCDDIR := /usr/local/share/openocd/scripts
OCDCONFIG= microchip_same54_xplained_pro.cfg
ODIR=../obj
SDIR=../src
HDIR=../headers
CFLAGS=-Isrc/
CFLAGS += -DDEBUG=2
CFLAGS+=-O0 -fno-stack-protector -mthumb -march=armv7e-m -mtune=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -fvar-tracking -g3
CFLAGS+=-I../atmel/CMSIS/Include
CFLAGS+=-I../atmel/include/instance
CFLAGS+=-I../atmel/include/pio
CFLAGS+=-I./../atmel/include
CFLAGS+=-I../atmel/include/component
CFLAGS+=-I../atmel
CFLAGS+=-I../atmel/hri
CFLAGS+=-I../atmel/config
CFLAGS+=-I../atmel/hal/include
CFLAGS+=-I../atmel/hpl/port
CFLAGS+=-I../atmel/hal/utils/include
CFLAGS+=-I $(HDIR)
CFLAGS+= -D__ATSAMD51G18A__
CFLAGS+= -D pvPortMalloc=malloc
CFLAGS+= -D vPortMalloc=malloc
CFLAGS+= -D pvPortFree=free
CFLAGS+= -D vPortFree=free
CFLAGS += -D STACK_SIZE=1024
CFLAGS += -D printf=rprintf

CC=arm-none-eabi-gcc
LD=arm-none-eabi-ld
SIZE=arm-none-eabi-size


OBJS +=  \
	test.o \
	setup.o \
	gpio.o \
	utils.o \
	serial.o \
	clock.o 


#OBJ = $(patsubst %,$(ODIR))

OBJ = $(patsubst %,$(ODIR)/%,$(OBJS))

$(ODIR)/%.o: $(SDIR)/%.c
	$(CC) $(CFLAGS) -c -g -o $@ $^

$(ODIR)/%.o: $(SDIR)/%.s
	nasm -f elf32 -g -o $@ $^


all: bin

bin: $(OBJ)
	$(CC) $(CFLAGS) ../obj/* --specs=nano.specs -Tlinker_script.ld -specs=nosys.specs -L/usr/local/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/lib/thumb/v7e-m+fp/hard -L/usr/local/gcc-arm-none-eabi-9-2019-q4-major/lib/gcc/arm-none-eabi/9.2.1/thumb/v7e-m+fp/hard -Wl,"-u _printf_float" -lc -lgcc -lm -static -e Reset_Handler -o test.elf
	# ctags -R src/*
	$(SIZE) test.elf

debug:
	ps aux | grep openocd | grep -v grep && { killall openocd; sleep 2; } || { echo "debugging..."; }
	screen -S openocd -d -m sudo OPENOCD_SCRIPTS=/usr/local/share/openocd/scripts openocd -f $(OPENOCDDIR)/board/microchip_same54_xplained_pro.cfg
	sleep 2
	arm-none-eabi-gdb test.elf -x gdb_init.txt



# Other Targets
clean:
	rm -rf test.elf obj/*

disassemble:
	arm-none-eabi-objdump --source test.elf