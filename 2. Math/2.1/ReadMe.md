程序中使用了三种方法：

int funcCount1(BYTE v);
使用的是除2求余的方式，利用将十进制数转换成二进制数的过程，统计1的个数；

int funcCount2(BYTE v);
采用的移位和与运算的方式，每次将v和0x01进行与操作，若此时二进制形式的最后一位是1，则结果为1，否则结果为零，将结果与num相加正好得出1的个数。每次循环末向右移位。

int funcCount3(BYTE v);
仅统计1的个数，将v与v-1进行与运算，可以将最低位的1设置为0，每次都这样运算，每次都将最低位的1置换为0，这样都是对1进行操作，那么复杂度仅与1的个数有关，于0的个数无关。