class Solution {
public:
    int findComplement(int num) 
    {
        int ind = 0;  // Variable to store the position of the most significant bit (MSB)

        // Loop to find the MSB where '1' is present
        for (int i = 0; i < sizeof(int) * 8; ++i)
        {
            // Check if the bit at position 'i' is set to 1
            if (num & (1 << i))
            {
                ind = i;  // Update 'ind' to the current position of the set bit
            }
        }

        // Loop to flip all bits from the least significant bit (LSB) up to the MSB
        for (int i = 0; i <= ind; ++i)
        {
            // Flip the bit at position 'i' using XOR
            num = num ^ (1 << i);
        }

        return num;  // Return the complement of the original number
    }
};
