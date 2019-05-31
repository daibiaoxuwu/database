gtree_build: FindTaxi.cpp mySocket.cpp
	g++ -std=c++0x -O2 FindTaxi.cpp mySocket.cpp -L/usr/local/lib/ -lmetis -o FindTaxi
