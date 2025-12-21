CXX = /usr/bin/clang++
CXXFLAGS = -Wall -Wextra -std=c++17

lexer: main.cpp lexer.cpp
	$(CXX) $(CXXFLAGS) -o lexer main.cpp lexer.cpp

clean:
	rm -f lexer