/**
 * File: app.c
 * Auther: Mostafa Asaad (https://github.com/M0stafa077)
 * Brief: A test code for testing Linker Script and Start Code.
*/

int Global_Initialized = 4;         /* => .data */
int Global_UnInitialized;           /* => .bss */
int Global_Initialized_With_0 = 0;  /* => .bss*/

int main()                          /* => .text */
{
    while (1)
    {
        Global_Initialized++;
        if(10 == Global_Initialized)
        {
            Global_UnInitialized++;
            Global_Initialized_With_0 += 2;
            Global_Initialized = 0;
        }
    }
    
    return 0;
}