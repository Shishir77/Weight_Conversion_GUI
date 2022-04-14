CXXFLAGS = -std=c++11
GTKFLAGS = `/usr/bin/pkg-config gtkmm-3.0 --cflags --libs`

	
ex: register.o weight_main.o
	@$(CXX) $(CXXFLAGS) -o register register.o weight_main.o $(GTKFLAGS)
	@./register
register.o: register.cpp register.h
	@$(CXX) $(CXXFLAGS) -c register.cpp $(GTKFLAGS)
weight_main.o: weight_main.cpp register.h
	@$(CXX) $(CXXFLAGS) -c weight_main.cpp $(GTKFLAGS)
