#include "bitfield_struct.h"

int main()
{
    SensorStatus s1 = {0};
    print_sensor_status(s1);  // 全部為 0

    SensorStatus s2 = {1, 0, 0, 0};  // power_on
    print_sensor_status(s2);

    SensorStatus s3 = {0, 1, 0, 0};  // error
    print_sensor_status(s3);

    SensorStatus s4 = {0, 0, 1, 0};  // busy
    print_sensor_status(s4);

    SensorStatus s5 = {1, 1, 1, 2};  // 多個 flag 與 mode 2
    print_sensor_status(s5);

    return 0;
}
void print_sensor_status(SensorStatus ss)
{
    printf("Power: %s\n", ss.power_on ? "ON" : "OFF");
    printf("Error: %s\n", ss.error ? "YES" : "NO");
    printf("Busy : %s\n", ss.busy ? "YES" : "NO");
    printf("Mode : %d\n", ss.mode);
}
