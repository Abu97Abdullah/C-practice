#include <stdio.h>

int main(void)
{
    int curr_hour, curr_min, d0, d1, d2, d3, d4, d5, d6, d7, curr_time, curr_diff, new_diff;

    d0 = 3600 * 8;
    d1 = 3600 * 9 + 60 * 43;
    d2 = 3600 * 11 + 60 * 19;
    d3 = 3600 * 12 + 60 * 47;
    d4 = 3600 * 14;
    d5 = 3600 * 15 + 60 * 45;
    d6 = 3600 * 19;
    d7 = 3600 * 21 + 60 * 45;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &curr_hour, &curr_min);
    curr_time = 3600 * curr_hour + 60 * curr_min;

    printf("Closest departure time is ");

    curr_diff = (curr_time - d0) > 0 ? (curr_time - d0) : (d0 - curr_time);
    new_diff = (curr_time - d1) > 0 ? (curr_time - d1) : (d1 - curr_time);

    if (new_diff > curr_diff) printf("8:00 a.m., arriving at 10:16 a.m.");
    else
    {
        curr_diff = new_diff;
        new_diff = (curr_time - d2) > 0 ? (curr_time - d2) : (d2 - curr_time);

        if (new_diff > curr_diff) printf("9:43 a.m., arriving at 11:52 a.m.");
        else
        {
            curr_diff = new_diff;
            new_diff = (curr_time - d3) > 0 ? (curr_time - d3) : (d3 - curr_time);

            if (new_diff > curr_diff) printf("11:19 a.m., arriving at 1:31 p.m.\n");
            else
            {
                curr_diff = new_diff;
                new_diff = (curr_time - d4) > 0 ? (curr_time - d4) : (d4 - curr_time);

                if (new_diff > curr_diff) printf("12:47 p.m., arriving at 3:00 p.m.\n");
                else
                {
                    curr_diff = new_diff;
                    new_diff = (curr_time - d5) > 0 ? (curr_time - d5) : (d5 - curr_time);

                    if (new_diff > curr_diff) printf("2:00 p.m., arriving at 4:08 p.m.\n");
                    else
                    {
                        curr_diff = new_diff;
                        new_diff = (curr_time - d6) > 0 ? (curr_time - d6) : (d6 - curr_time);

                        if (new_diff > curr_diff) printf("3:45 p.m., arriving at 5:55 p.m.\n");
                        else
                        {
                            curr_diff = new_diff;
                            new_diff = (curr_time - d7) > 0 ? (curr_time - d7) : (d7 - curr_time);

                            if (new_diff > curr_diff) printf("7:00 p.m., arriving at 9:20 p.m.\n");
                            else
                            {
                                printf("9:45 p.m., arriving at 11:58 p.m.\n");
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;

}