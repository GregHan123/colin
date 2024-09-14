.PHONY:process_copy

TARGET=process_copy#存储目标文件名
CC=gcc#存储编译器命令
INSTALL_PATH=/usr/bin#存储安装路径
LIBRARY_PATH=../library
INCLUDE_PATH=../include#存储头文件路径
CFLAGS=-I$(INCLUDE_PATH) -c -g -Wall#存储编译选项

SRCFILE=$(wildcard *.c)
DSTFILE=$(patsubst %.c,%.o,$(SRCFILE)) 

$(TARGET):$(DSTFILE)
	$(CC) $^ -o $@

%.o:%.c
	$(CC) $(CFLAGS) $<

clean:
	rm -rf $(DSTFILE)

