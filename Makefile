CC			=	g++
CFLAGS		=	-c -Wall
LDFLAGS		=
SRCDIR		=	src
OBJDIR		=	obj
BINDIR		=	output
SOURCES		:=	$(wildcard $(SRCDIR)/*.cpp)
INCLUDES	:=	$(wildcard $(SRCDIR)/*.h)
OBJECTS 	:=	$(SOURCES:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)
TARGET		=	Sample.exe


$(BINDIR)/$(TARGET): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@
	
$(OBJECTS): $(OBJDIR)/%.o: $(SRCDIR)/%.cpp $(INCLUDES)
	$(CC) $(CFLAGS) $< -o $@
	
clean:
	rm $(OBJDIR)/*.o $(BINDIR)/$(TARGET)

