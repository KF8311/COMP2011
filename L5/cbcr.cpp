// Fine
void call_by_ref(int& x) { x += 10; }

// Error!
void call_by_const_ref(const int& x) { x += 10; }
