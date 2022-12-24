# C - Data Types\_\_tutorialspoint

https://www.tutorialspoint.com/cprogramming/c_data_types.htm

<br>

<hr>

# Result :

```

$ ./main

CHAR_BIT    : 8
CHAR_MAX    : 127
CHAR_MIN    : -128
INT_MAX    : 2147483647
INT_MIN    : -2147483648
LONG_MAX    : 9223372036854775807
LONG_MIN    : -9223372036854775808
SCHAR_MAX    : 127
SCHAR_MIN    : -128
SHRT_MAX    : 32767
SHRT_MIN    : -32768
UCHAR_MAX    : 255
UINT_MAX    : 4294967295
ULONG_MAX    : 18446744073709551615
USHRT_MAX    : 65535


```

<hr>
<br>

# Integer Types

https://www.tutorialspoint.com/cprogramming/c_data_types.htm

<table border="4">
    <tr>
    <td colspan="3" align="center">Integer Types</td>
    </tr>
    <tr align="center">
        <td>Type </td>
        <td>Storage size</td>
        <td>Value range</td>
    </tr>
    <tr align="center">
        <td>char</td>
        <td>1 byte</td>
        <td>-128 to 127 or 0 to 255</td>
    </tr>
    <tr align="center">
        <td>unsigned char</td>
        <td>1 byte</td>
        <td>0 to 255</td>
    </tr>
    <tr align="center">
        <td>signed char</td>
        <td>1 byte</td>
        <td>-128 to 127</td>
    </tr>
    <tr align="center">
        <td>int</td>
        <td>2 or 4 byte</td>
        <td>-32,768 to 32,767 <br>or -2,147,483,648 to 2,147,483,647</td>
    </tr>
    <tr align="center">
        <td>unsigned int</td>
        <td>2 or 4 byte</td>
        <td>0 to 65,535 <br>or 0 to 4,294,967,295</td>
    </tr>
    <tr align="center">
        <td>short</td>
        <td>2 byte</td>
        <td>-32,768 to 32,767</td>
    </tr>
    <tr align="center">
        <td>unsigned short</td>
        <td>2 byte</td>
        <td>0 to 65,535</td>
    </tr>
    <tr align="center">
        <td>long</td>
        <td>8 byte or<br>(4bytes for 32 bit OS)</td>
        <td>-9,223,372,036,854,775,808 to<br>9,223,372,036,854,775,807</td>
    </tr>
    <tr align="center">
        <td>unsigned long</td>
        <td>8 byte </td>
        <td>0 to <br>18,446,744,073,709,551,615</td>
    </tr>
</table>

<br>

<hr>

# Floating-Point Types

https://www.tutorialspoint.com/cprogramming/c_data_types.htm

<table border="4">
    <tr>
    <td colspan="4" align="center">Floating-Point Types</td>
    </tr>
    <tr align="center">
        <td>Type </td>
        <td>Storage size</td>
        <td>Value range</td>
        <td>Precision</td>
    </tr>
    <tr align="center">
        <td>float</td>
        <td>4 byte</td>
        <td>1.2E-38 to 3.4E+38</td>
        <td>6 decimal places</td>
    </tr>
    <tr align="center">
        <td>double</td>
        <td>8 byte</td>
        <td>2.3E-308 to 1.7E+308</td>
        <td>15 decimal places</td>
    </tr>
    <tr align="center">
        <td>long double</td>
        <td>10 byte</td>
        <td>3.4E-4932 to 1.1E+4932</td>
        <td>19 decimal places</td>
    </tr>
</table>
