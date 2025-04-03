#include <reg51.h>

void delay(int k)  // Delay function
{
    int i, j;
    for (i = 0; i < k; i++)  // k millisecond delay
    {
        for (j = 0; j < 1275; j++);
    }
}

void main()
{
    unsigned char i;
    unsigned char arr[10] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x67};

    P2 = 0x00;  // Initialize port 2

    while (1)
    {
        for (i = 0; i < 10; i++)
        {
            P2 = arr[i];  // Display the value on port 2
            delay(1000);  // 1 second delay
        }
    }
}
