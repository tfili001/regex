#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

struct dfa_state
{
    bool kleene = false;
    char kleene_transition_symbol;
    char transition_symbol;
    
	dfa_state(){};
	dfa_state(const char s);
};

dfa_state::dfa_state(const char symbol) :
    transition_symbol(symbol)
{

}

void regex_to_dfa(const char *expression, const size_t expression_length)
{
    dfa_state adj_list[expression_length];
    size_t adj_list_size = 0;
	
	
    for(size_t i = 0; i < expression_length-1; i++)
    {
		
		dfa_state dfa_s(expression[i]);
		
		if(!isalpha(expression[i+1]))
		{
			if(expression[i+1] == '*')
			{
				
			}
			else if(expression[i+1] == '+')
			{
				
			}
			
		}
		
    }
        
}

int main(int argc, char **argv)
{
    char *s = "abaa";
    size_t n = sizeof(*s/s[0]);
    regex_to_dfa(s,n);
    
	return 0;
}
