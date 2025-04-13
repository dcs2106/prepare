#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void set_bit(uint32_t *value, uint8_t bit);
void clear_bit(uint32_t *value, uint8_t bit);
void toggle_bit(uint32_t *value, uint8_t bit);
bool check_bit(uint32_t value, uint8_t bit);
void print_bits(uint32_t value);
int main()
{
    uint32_t flag = 0;

    set_bit(&flag, 2);      // 設定第2位
    toggle_bit(&flag, 3);   // 反轉第3位
    clear_bit(&flag, 2);    // 清除第2位

    if (check_bit(flag, 3)) {
        printf("Bit 3 is ON\n");
    }

    printf("flag = 0x%X\n", flag); // 應該顯示 Bit 3 是 ON
    print_bits(flag);
    return 0;
}

void set_bit(uint32_t *value, uint8_t bit)
{
    *value = *value | (0x1 << bit);
}

void clear_bit(uint32_t *value, uint8_t bit)
{
    *value = *value & ~(0x1 << bit);
}

void toggle_bit(uint32_t *value, uint8_t bit)
{
    *value = *value ^ (0x1 << bit);
}

bool check_bit(uint32_t value, uint8_t bit)
{
    return (value) & (0x1 << bit);
}

void print_bits(uint32_t value)
{
    for(int i = 0;i<32;i++)
        printf("%d", value & (0x1<<i)? 1:0);
    printf("\n");
}
