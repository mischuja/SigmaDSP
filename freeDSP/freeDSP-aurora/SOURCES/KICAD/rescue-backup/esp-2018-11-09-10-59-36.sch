EESchema Schematic File Version 2
LIBS:freeDSP-Lumiere-rescue
LIBS:power
LIBS:device
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
LIBS:rkdev
LIBS:rk
LIBS:freeDSP-Lumiere-cache
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 5 6
Title ""
Date "25.7.2018"
Rev "A"
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L ESP32-WROOM-32U IC501
U 1 1 5B78B077
P 5600 3050
F 0 "IC501" H 6050 2100 39  0000 L CNN
F 1 "ESP32-WROOM-32U" H 6050 2050 39  0000 L CNN
F 2 "rklib:ESP32-WROOM-32U" H 5600 1600 39  0001 C CNN
F 3 "" H 5250 3050 79  0001 C CNN
	1    5600 3050
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR0289
U 1 1 5B78B25E
P 6350 4250
F 0 "#PWR0289" H 6350 4000 50  0001 C CNN
F 1 "GND" H 6350 4100 39  0000 C CNN
F 2 "" H 6350 4250 50  0000 C CNN
F 3 "" H 6350 4250 50  0000 C CNN
	1    6350 4250
	1    0    0    -1  
$EndComp
Wire Wire Line
	5100 4050 5100 4100
Wire Wire Line
	6350 4100 4750 4100
Wire Wire Line
	6350 2350 6350 4250
Wire Wire Line
	6350 2450 6300 2450
Wire Wire Line
	6350 2350 6300 2350
Connection ~ 6350 2450
Connection ~ 6350 4100
Wire Wire Line
	4750 4100 4750 2450
Wire Wire Line
	4750 2450 4800 2450
Connection ~ 5100 4100
$Comp
L CON_JUMPER J501
U 1 1 5B78B28C
P 6500 3750
F 0 "J501" H 6500 3700 39  0000 C CNN
F 1 "CON_JUMPER" H 6500 3650 39  0001 C CNN
F 2 "rklib:HDR_01x02" H 6500 3600 39  0001 C CNN
F 3 "" H 6500 3830 50  0001 C CNN
F 4 "Jumper" H 6500 3700 39  0001 C CNN "Value1"
F 5 " " H 6800 4130 39  0001 C CNN "Value2"
F 6 "732-5315-ND" H 6500 3550 39  0001 C CNN "digikey"
	1    6500 3750
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR0290
U 1 1 5B78B306
P 6650 3800
F 0 "#PWR0290" H 6650 3550 50  0001 C CNN
F 1 "GND" H 6650 3650 39  0000 C CNN
F 2 "" H 6650 3800 50  0000 C CNN
F 3 "" H 6650 3800 50  0000 C CNN
	1    6650 3800
	1    0    0    -1  
$EndComp
Wire Wire Line
	6300 3750 6400 3750
Wire Wire Line
	6600 3750 6650 3750
Wire Wire Line
	6650 3750 6650 3800
$Comp
L RES_10K0_1%_0.125W_Thick_0805 R501
U 1 1 5B78BB61
P 3750 2650
F 0 "R501" H 3750 2650 39  0000 C CNN
F 1 "RES_10K0_1%_0.125W_Thick_0805" H 3750 2475 39  0001 C CNN
F 2 "rklib:C0805-RES" H 3750 2425 39  0001 C CNN
F 3 "" H 3750 2650 50  0000 C CNN
F 4 "10K0" H 3750 2575 39  0000 C CNN "Value1"
F 5 "1% 0.125W Thick" H 3750 2525 39  0001 C CNN "Value2"
F 6 "311-10.0KCRCT-ND" H 3750 2350 39  0001 C CNN "digikey"
	1    3750 2650
	1    0    0    -1  
$EndComp
$Comp
L CAP_100n_50V_X7R_0805 C501
U 1 1 5B78BD10
P 3950 2850
F 0 "C501" H 4000 2900 39  0000 L CNN
F 1 "CAP_100n_50V_X7R_0805" H 3950 2700 39  0001 C CNN
F 2 "rklib:C0805-X7R" H 3950 2650 39  0001 C CNN
F 3 "" H 4000 2900 50  0001 C CNN
F 4 "100n" H 4000 2800 39  0000 L CNN "Value1"
F 5 "5% 50V X7R" H 3950 2600 39  0001 C CNN "Value2"
F 6 "399-1170-1-ND" H 3950 2550 39  0001 C CNN "digikey"
	1    3950 2850
	0    -1   -1   0   
$EndComp
$Comp
L CAP_100n_50V_X7R_0805 C503
U 1 1 5B78BE6D
P 4350 2850
F 0 "C503" H 4400 2900 39  0000 L CNN
F 1 "CAP_100n_50V_X7R_0805" H 4350 2700 39  0001 C CNN
F 2 "rklib:C0805-X7R" H 4350 2650 39  0001 C CNN
F 3 "" H 4400 2900 50  0001 C CNN
F 4 "100n" H 4400 2800 39  0000 L CNN "Value1"
F 5 "5% 50V X7R" H 4350 2600 39  0001 C CNN "Value2"
F 6 "399-1170-1-ND" H 4350 2550 39  0001 C CNN "digikey"
	1    4350 2850
	0    -1   -1   0   
$EndComp
$Comp
L CAP_10u0_25V_X5R_0805 C502
U 1 1 5B78BE88
P 4150 2850
F 0 "C502" H 4200 2900 39  0000 L CNN
F 1 "CAP_10u0_25V_X5R_0805" H 4150 2700 39  0001 C CNN
F 2 "rklib:C0805-X7R" H 4150 2650 39  0001 C CNN
F 3 "" H 4200 2900 50  0001 C CNN
F 4 "10u0" H 4200 2800 39  0000 L CNN "Value1"
F 5 "20% 25V X5R" H 4150 2600 39  0001 C CNN "Value2"
F 6 "490-10748-1-ND" H 4150 2550 39  0001 C CNN "digikey"
	1    4150 2850
	0    -1   -1   0   
$EndComp
Wire Wire Line
	3900 2650 4800 2650
Wire Wire Line
	3950 2650 3950 2700
Connection ~ 3950 2650
Wire Wire Line
	3550 2550 4800 2550
Wire Wire Line
	4350 2550 4350 2700
Wire Wire Line
	4150 2550 4150 2700
Connection ~ 4350 2550
Wire Wire Line
	3550 2500 3550 2650
Wire Wire Line
	3550 2650 3600 2650
Connection ~ 4150 2550
Connection ~ 3550 2550
$Comp
L GND #PWR0291
U 1 1 5B78C0D3
P 3950 3000
F 0 "#PWR0291" H 3950 2750 50  0001 C CNN
F 1 "GND" H 3950 2850 39  0000 C CNN
F 2 "" H 3950 3000 50  0000 C CNN
F 3 "" H 3950 3000 50  0000 C CNN
	1    3950 3000
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR0292
U 1 1 5B78C0E2
P 4150 3000
F 0 "#PWR0292" H 4150 2750 50  0001 C CNN
F 1 "GND" H 4150 2850 39  0000 C CNN
F 2 "" H 4150 3000 50  0000 C CNN
F 3 "" H 4150 3000 50  0000 C CNN
	1    4150 3000
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR0293
U 1 1 5B78C0F1
P 4350 3000
F 0 "#PWR0293" H 4350 2750 50  0001 C CNN
F 1 "GND" H 4350 2850 39  0000 C CNN
F 2 "" H 4350 3000 50  0000 C CNN
F 3 "" H 4350 3000 50  0000 C CNN
	1    4350 3000
	1    0    0    -1  
$EndComp
Wire Wire Line
	5200 4050 5200 4500
Wire Wire Line
	5200 4150 4450 4150
Wire Wire Line
	5900 4050 5900 4300
Wire Wire Line
	5900 4250 4450 4250
Wire Wire Line
	4800 3750 4700 3750
Wire Wire Line
	4700 3750 4700 4050
Wire Wire Line
	4700 4050 4450 4050
Wire Wire Line
	4800 3650 4650 3650
Wire Wire Line
	4650 3650 4650 3950
Wire Wire Line
	4650 3950 4450 3950
Text Label 4450 3950 0    39   ~ 0
MTMS
Text Label 4450 4050 0    39   ~ 0
MTDI
Text Label 4250 4150 0    39   ~ 0
MTCK
Text Label 4450 4250 0    39   ~ 0
MTDO
Text HLabel 4700 2950 0    39   Output ~ 0
MOSI
Text HLabel 4700 3050 0    39   Input ~ 0
MISO
Text HLabel 4700 3150 0    39   Output ~ 0
SCK
Text HLabel 4700 3250 0    39   Output ~ 0
CS
Wire Wire Line
	4700 2950 4800 2950
Wire Wire Line
	4700 3050 4800 3050
Wire Wire Line
	4700 3150 4800 3150
Wire Wire Line
	4700 3250 4800 3250
Text HLabel 4200 3550 0    39   Output ~ 0
BCLK
Text HLabel 4200 3450 0    39   Output ~ 0
LRCK
Text HLabel 4200 3350 0    39   Output ~ 0
SDATA
Wire Wire Line
	4200 3350 4800 3350
Wire Wire Line
	4200 3450 4800 3450
Wire Wire Line
	4200 3550 4800 3550
Text HLabel 6400 3650 2    39   Output ~ 0
SCL1
Wire Wire Line
	6000 4050 6000 4300
Text HLabel 6400 3550 2    39   BiDi ~ 0
SDA1
Wire Wire Line
	6300 3650 6400 3650
Text HLabel 6400 3450 2    39   Output ~ 0
~MRST
Wire Wire Line
	6300 3550 6400 3550
$Comp
L Conn_01x04 X501
U 1 1 5B788B4D
P 8100 2100
F 0 "X501" H 8100 2300 39  0000 C CNN
F 1 "Conn_01x04" H 8100 1800 39  0001 C CNN
F 2 "rklib:Molex_KK254_0022032041" H 8100 2100 50  0001 C CNN
F 3 "" H 8100 2100 50  0001 C CNN
	1    8100 2100
	1    0    0    1   
$EndComp
$Comp
L GND #PWR0294
U 1 1 5B788BC6
P 7850 2250
F 0 "#PWR0294" H 7850 2000 50  0001 C CNN
F 1 "GND" H 7850 2100 39  0000 C CNN
F 2 "" H 7850 2250 50  0000 C CNN
F 3 "" H 7850 2250 50  0000 C CNN
	1    7850 2250
	1    0    0    -1  
$EndComp
$Comp
L +12V #PWR0295
U 1 1 5B7893E2
P 7850 1850
F 0 "#PWR0295" H 7850 1700 50  0001 C CNN
F 1 "+12V" H 7850 1990 39  0000 C CNN
F 2 "" H 7850 1850 50  0000 C CNN
F 3 "" H 7850 1850 50  0000 C CNN
	1    7850 1850
	1    0    0    -1  
$EndComp
Wire Wire Line
	7900 2100 7850 2100
Wire Wire Line
	7850 2100 7850 1850
Wire Wire Line
	7900 2200 7850 2200
Wire Wire Line
	7850 2200 7850 2250
Wire Wire Line
	7900 2000 7500 2000
Wire Wire Line
	7900 1900 7500 1900
Text Label 7500 1900 0    39   ~ 0
FANCTRL
Text Label 7500 2000 0    39   ~ 0
SENSE
Text Notes 8250 2100 1    39   ~ 0
Fan
$Comp
L Conn_01x05 X502
U 1 1 5B789BC4
P 8100 2950
F 0 "X502" H 8100 3250 39  0000 C CNN
F 1 "Conn_01x05" H 8100 2650 39  0001 C CNN
F 2 "rklib:Molex_PicoBlade_530470510" H 8100 2950 39  0001 C CNN
F 3 "" H 8100 2950 50  0001 C CNN
	1    8100 2950
	1    0    0    1   
$EndComp
$Comp
L GND #PWR0296
U 1 1 5B789C5C
P 7850 3200
F 0 "#PWR0296" H 7850 2950 50  0001 C CNN
F 1 "GND" H 7850 3050 39  0000 C CNN
F 2 "" H 7850 3200 50  0000 C CNN
F 3 "" H 7850 3200 50  0000 C CNN
	1    7850 3200
	1    0    0    -1  
$EndComp
Wire Wire Line
	7900 3150 7850 3150
Wire Wire Line
	7850 3150 7850 3200
Wire Wire Line
	7900 3050 7850 3050
Wire Wire Line
	7850 3050 7850 2700
Wire Wire Line
	7900 2950 7500 2950
Wire Wire Line
	7900 2850 7500 2850
Text Label 7500 2850 0    39   ~ 0
ROTQ
Text Label 7500 2950 0    39   ~ 0
PUSHSW
Wire Wire Line
	7900 2750 7500 2750
Text Label 7500 2750 0    39   ~ 0
ROTI
Text Notes 8250 3150 1    39   ~ 0
Rotary Encoder
$Comp
L GND #PWR0297
U 1 1 5B789E6E
P 7850 4150
F 0 "#PWR0297" H 7850 3900 50  0001 C CNN
F 1 "GND" H 7850 4000 39  0000 C CNN
F 2 "" H 7850 4150 50  0000 C CNN
F 3 "" H 7850 4150 50  0000 C CNN
	1    7850 4150
	1    0    0    -1  
$EndComp
Wire Wire Line
	7900 4100 7850 4100
Wire Wire Line
	7850 4100 7850 4150
Wire Wire Line
	7900 4000 7850 4000
Wire Wire Line
	7850 4000 7850 3650
Wire Wire Line
	7900 3900 7500 3900
Text Label 7500 3900 0    39   ~ 0
IRREMOTE
Text Notes 8250 4150 1    39   ~ 0
IR Remote
NoConn ~ 7900 3700
NoConn ~ 7900 3800
Wire Wire Line
	6300 2550 6700 2550
Text Label 6700 2550 2    39   ~ 0
FANCTRL
Text Label 5200 4500 1    39   ~ 0
SENSE
Wire Wire Line
	6300 3250 6700 3250
Wire Wire Line
	6300 3150 6700 3150
Text Label 6700 3150 2    39   ~ 0
ROTQ
Text Label 6700 3250 2    39   ~ 0
PUSHSW
Wire Wire Line
	6300 2950 6700 2950
Text Label 6700 2950 2    39   ~ 0
ROTI
Wire Wire Line
	6300 3350 6700 3350
Text Label 6700 3350 2    39   ~ 0
IRREMOTE
$Comp
L Conn_01x03 X503
U 1 1 5B7966B4
P 8100 4000
F 0 "X503" H 8100 4200 39  0000 C CNN
F 1 "Conn_01x03" H 8100 3800 39  0001 C CNN
F 2 "rklib:Molex_PicoBlade_530470310" H 8100 4000 50  0001 C CNN
F 3 "" H 8100 4000 50  0001 C CNN
	1    8100 4000
	1    0    0    1   
$EndComp
Text HLabel 5900 4300 3    39   Output ~ 0
SCL2
Text HLabel 6000 4300 3    39   BiDi ~ 0
SDA2
Connection ~ 5900 4250
Wire Wire Line
	6300 3450 6400 3450
Connection ~ 5200 4150
$Comp
L VDD #PWR0298
U 1 1 5B7C5990
P 3550 2500
F 0 "#PWR0298" H 3550 2350 50  0001 C CNN
F 1 "VDD" H 3550 2650 39  0000 C CNN
F 2 "" H 3550 2500 50  0000 C CNN
F 3 "" H 3550 2500 50  0000 C CNN
	1    3550 2500
	1    0    0    -1  
$EndComp
$Comp
L VDD #PWR0299
U 1 1 5B7C59FB
P 7850 2700
F 0 "#PWR0299" H 7850 2550 50  0001 C CNN
F 1 "VDD" H 7850 2850 39  0000 C CNN
F 2 "" H 7850 2700 50  0000 C CNN
F 3 "" H 7850 2700 50  0000 C CNN
	1    7850 2700
	1    0    0    -1  
$EndComp
$Comp
L VDD #PWR0300
U 1 1 5B7C5A0A
P 7850 3650
F 0 "#PWR0300" H 7850 3500 50  0001 C CNN
F 1 "VDD" H 7850 3800 39  0000 C CNN
F 2 "" H 7850 3650 50  0000 C CNN
F 3 "" H 7850 3650 50  0000 C CNN
	1    7850 3650
	1    0    0    -1  
$EndComp
$EndSCHEMATC
