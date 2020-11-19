LOCAL_LIBRARY +=  -L./lib
LOCAL_LDFLAGS += -lm  -lpthread -ldl
LOCAL_CFLAGS += -I./header

CC:= g++ -g -std=c++11
TARGETS1 = a
SRCS1 = src/geometry.cc src/main.cc src/solution.cc
SRC := src
SRCS1    = $(wildcard $(SRC)/*.cc)
OBJS1 = $(patsubst %.cc, %.o, $(SRCS1))

CFLAGS += $(LOCAL_CFLAGS)
LDFLAGS += $(LOCAL_LIBRARY) $(LOCAL_LDFLAGS)
FORMAT = clang-format -i 
$(info $(OBJS))
$(info $(TARGETS))


all: $(TARGETS1)
	#@./$(TARGETS1)


$(TARGETS1):$(OBJS1)
	$(CC)  -o $@ $^  $(LDFLAGS) $(CFLAGS)

$(OBJS1): %.o:%.cc
	$(CC) -c $< -o $@ $(CFLAGS)

clean :
	@rm -rf $(TARGETS1) $(OBJS1)

format :
	find . -regex '.*\.\(cpp\|hpp\|cc\|cxx\)' -exec clang-format -style=file -i {} \;

#.SUFFIXES:
.PHONY : all clean