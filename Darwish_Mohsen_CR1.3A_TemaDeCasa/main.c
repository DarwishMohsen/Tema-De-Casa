#include "edit_distance.h"

int main()
{
    char code_fragment[] = "fnuc(myFuncion";
    char syntax_rule[] = "func(myFunction)";

    int result = edit_distance(code_fragment, syntax_rule);
    printf("Minimum operations required: %d\n", result);

    return 0;
}
