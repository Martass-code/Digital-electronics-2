# Digital-electronics-2

| **DDRB** | **Description** |
| :-: | :-- |
| 0 | Input pin |
| 1 | Output pin|

| **PORTB** | **Description** |
| :-: | :-- |
| 0 | Output low value |
| 1 | Output high value |

| **DDRB** | **PORTB** | **Direction** | **Internal pull-up resistor** | **Description** |
| :-: | :-: | :-: | :-: | :-- |
| 0 | 0 | input | no | Tri-state, high-impedance |
| 0 | 1 | input | yes | PBn will source current if ext. pulled low |
| 1 | 0 | output | no | Output low value  |
| 1 | 1 | output | yes| Output high value |

| **Port** | **Pin** | **Input/output usage?** |
| :-: | :-: | :-- |
| A | x | Microcontroller ATmega328P does not contain port A |
| B | 0 | Yes (Arduino pin 8) |
| B  | 1 | Yes (Arduino pin 9)  |
| B  | 2 | Yes (Arduino pin 10)  |
| B  | 3 | Yes (Arduino pin 11)  |
| B  | 4 | Yes (Arduino pin 12)  |
| B  | 5 | Yes (Arduino pin 13)  |
| B  | 6 | NO (oscilator pin)|
| B  | 7 | NO (oscilator pin)|
| C | 0 | Yes (Arduino pin A0) |
| C  | 1 | Yes (Arduino pin A1) |
| C  | 2 | Yes (Arduino pin A2) |
| C  | 3 | Yes (Arduino pin A3) |
| C  | 4 | Yes (Arduino pin A4) |
| C  | 5 | Yes (Arduino pin A5) |
| C  | 6 | NO (RESET) |
| C  | 7 | does not contain |
| D | 0 | Yes (Arduino pin RX<-0) |
| D  | 1 | Yes (Arduino pin TX->0) |
| D  | 2 | Yes (Arduino pin 2) |
| D  | 3 | Yes (Arduino pin 3) |
| D  | 4 | Yes (Arduino pin 4) |
| D  | 5 | Yes (Arduino pin 5) |
| D  | 6 | Yes (Arduino pin 6) |
| D  | 7 | Yes (Arduino pin 7) |
