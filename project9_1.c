#include <stdio.h>
int main()
{
    struct Shenzhou
    {
        int Year;
        int Month;
        int Ridership;
    };
    struct Shenzhou s19 = {2024, 10, 3};
    printf("神州19号在%d年%d月发射，乘员%d人\n", s19.Year, s19.Month, s19.Ridership);
    return 0;
}