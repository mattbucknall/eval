#include <stdio.h>

#include "eval.h"


int main(int argc, char* argv[])
{
    if ( argc >= 2 )
    {
        EvalResult result;
        float output;
        
        output = 0.0f;
        result = eval_execute(argv[1], eval_default_hooks(), 0, &output);
        
        if ( result == EVAL_RESULT_OK )
        {
            printf("%g\n", output);
        }
        else
        {
            printf("%s\n", eval_result_to_string(result));
            return 1;
        }
    }
    else
    {
        printf("Usage: eval <expression>\n");
        return 0;
    }
    
    return 0;
}
