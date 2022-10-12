OBJS = main.o sorts.o
CFLAGS += -O2 -Wall

all:	ExptWithSort

ExptWithSort:	$(OBJS)
	$(CXX) $(LDFLAGS) -o $@ $^

%.o:	$(PROJECT_ROOT)%.cpp
	$(CXX) -c $(CFLAGS) $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

clean:
	rm -fr ExptWithSort $(OBJS)
