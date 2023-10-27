<div align="center">
  <h1>Module 4</h1>
  <br><br><br>
</div>      

## Number Representation
- Decimal notation is base 10: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
- Binary notation is base 2: 0, 1

Decimal →
1308 = 1 x 10<sup>3</sup> + 3 x 10<sup>2</sup> + 0 x 10<sup>1</sup> + 8 x 10<sup>0</sup>

Binary →
1010 = 1 x 2<sup>3</sup> + 0 x 2<sup>2</sup> + 1 x 2<sup>1</sup> + 0 x 2<sup>0</sup>


## Converting fromn Base B to Decimal
(2012)<sub>3</sub> <br> 
= 2 x 3<sup>3</sup> + 0 x 3<sup>2</sup> + 1 x 3<sup>1</sup> + 2 x 3<sup>0</sup> <br> = 2 x 27 + 0 x 9 + 1 x 3 + 2 x 1 <br> = 59

## Hexadecimal Numbers

### Hexadecimal Conversion Table

| Hexadecimal | Decimal | Binary   |
|------------|---------|----------|
| 0          | 0       | 0000     |
| 1          | 1       | 0001     |
| 2          | 2       | 0010     |
| 3          | 3       | 0011     |
| 4          | 4       | 0100     |
| 5          | 5       | 0101     |
| 6          | 6       | 0110     |
| 7          | 7       | 0111     |
| 8          | 8       | 1000     |
| 9          | 9       | 1001     |
| A          | 10      | 1010     |
| B          | 11      | 1011     |
| C          | 12      | 1100     |
| D          | 13      | 1101     |
| E          | 14      | 1110     |
| F          | 15      | 1111     |

(3B2)<sub>16</sub> <br>
= 3 x 16<sup>2</sup> + B x 16<sup>1</sup> + 2 x 16<sup>0</sup> <br>
= 3 x 256 + 11 x 16 + 2 x 1 <br>
= 946

## Converting from Decimal to Base B

Given 1161 in decimal, convert to base 7: 
Steps:
1) Take the number (1161) and divide it by the base (7)
2) Take the remainder (6) and write it down
3) Take the quotient (165) and divide it by the base (7)
4) Take the remainder (4) and write it down
5) Repeat until the quotient is smaller than the base

To obtain your result, grab the remainders from bottom to top. In this case, the result is (3246)<sub>7</sub>

![image](resources/convertion_1.png)

## Signed Binary Number Encoding
- There are two potential ways to encode a signed binary number: signed magnitude and two's complement.
- The leftmost bit is the sign bit. 0 is positive, 1 is negative.

## Signed Magnitude
- Treats the high-order (leftmost) bit as a sign bit.
- The high-rder bit doesn't affect the absolute value of the number.

### Converting Signed Binary to Decimal
(1101)<sub>2</sub> <br>
= - (1 x 2<sup>2</sup> + 0 x 2<sup>1</sup> + 1 x 2<sup>0</sup>)<br>
= - (1 x 4 + 0 x 2 + 1 x 1)<br>
= - (4 + 0 + 1) <br>
= -5

## Two's Complement
- Treats the high-order (leftmost) bit as a sign bit and also affects the value of the number.
- If the high-order bit is 1, then you multipy -1 by 2<sup>n-1</sup> where n is the number of bits.

### Converting Two's Complement to Decimal
(1101)<sub>2</sub> <br>
= ( -1 x 2<sup>3</sup> + 1 x 2<sup>2</sup> + 0 x 2<sup>1</sup> + 1 x 2<sup>0</sup> )<br>
= ( -1 x 8 + 1 x 4 + 0 x 2 + 1 x 1 )<br>
= -8 + 4 + 0 + 1 <br>
= -3

### Converting Negative Decimal to Two's Complement
1) Convert the absolute value of the number to binary
2) Flip all the bits
3) Add 1

Example: **-13** <br>
0000 1101 `< 13`<br>
1111 0010 `< flip all the bits` <br>
0000 0001 `< add 1` <br>
1111 0011 `< result` <br>

## Addition of Binary Numbers

### Unsigned

### Signed

## Bitwise Operations

### Bitwise AND
| A | B | A AND B |
|---|---|---------|
| 0 | 0 | 0       |
| 0 | 1 | 0       |
| 1 | 0 | 0       |
| 1 | 1 | 1       |

### Bitwise OR
| A | B | A OR B  |
|---|---|---------|
| 0 | 0 | 0       |
| 0 | 1 | 1       |
| 1 | 0 | 1       |
| 1 | 1 | 1       |

### Bitwise XOR
| A | B | A XOR B |
|---|---|---------|
| 0 | 0 | 0       |
| 0 | 1 | 1       |
| 1 | 0 | 1       |
| 1 | 1 | 0       |

### Bitwise NOT
| A | NOT A |
|---|-------|
| 0 | 1     |
| 1 | 0     |

## Bit Shifting

### Left Shift
- Shifts all bits to the left by n places
- The rightmost n bits are filled with 0s
- The leftmost n bits are discarded
```c
0b0011101 << 2 0b10110100
```

### Right Shift
- Shifts all bits to the right by n places
- The leftmost n bits are filled with 0s
- The rightmost n bits are discarded
```c
0b10110011 >> 2 0b00101100 `logical`
0b10110011 >> 2 0b11101100 `arithmetic`
```