// Build don't link:
// Special g++ Options: -Wall

class B {
public:
  B(int) { }
};

class D : public B {
  int member;		                // WARNING - reordered
  D() : member(0), B(member) { }	// WARNING - reordered
};
