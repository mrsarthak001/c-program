// CPP program to demonstrate working of STL stack 
#include <iostream> 
#include <stack> 
#include <queue> 

using namespace std; 

void showstack(stack <int> s) 
void showq(queue <int> gq)
{ 
	while (!s.empty()) 
	{ 
		cout << '\t' << s.top(); 
		s.pop(); 
	} 
    queue <int> g = gq; 
    while (!g.empty()) 
    { 
        cout << '\t' << g.front(); 
        g.pop(); 
    } 
    cout << '\n'; 
} 

int main () 
{ 
	stack <int> s; 
	s.push(10); 
	s.push(30); 
	s.push(20); 
	s.push(5); 
	s.push(1); 

	cout << "The stack is : "; 
	showstack(s); 

	cout << "\ns.size() : " << s.size(); 
	cout << "\ns.top() : " << s.top(); 


	cout << "\ns.pop() : "; 
	s.pop(); 
	showstack(s); 

 queue <int> gquiz; 
    gquiz.push(10); 
    gquiz.push(20); 
    gquiz.push(30); 
  
    cout << "The queue gquiz is : "; 
    showq(gquiz); 
  
    cout << "\ngquiz.size() : " << gquiz.size(); 
    cout << "\ngquiz.front() : " << gquiz.front(); 
    cout << "\ngquiz.back() : " << gquiz.back(); 
  
    cout << "\ngquiz.pop() : "; 
    gquiz.pop(); 
    showq(gquiz);
	return 0; 
} 

