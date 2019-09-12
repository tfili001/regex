#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

void print_matrix(bool **matrix,size_t m, size_t n)
{
    for(size_t i=0;i<m;i++)
    {
        for(size_t j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

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
