#ifndef __OLEDFONT_H
#define __OLEDFONT_H 	 

//Common ASCII tables
//Offset
//Ascii character set
//Offset
//Size: 1
//常用ASCII表
//偏移量32
//ASCII字符集
//偏移量32
//大小:12*6
const unsigned char oled_asc2_1206[95][12]={
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*" ",0*/
{0x00,0x00,0x00,0x00,0x3F,0x40,0x00,0x00,0x00,0x00,0x00,0x00},/*"!",1*/
{0x00,0x00,0x30,0x00,0x40,0x00,0x30,0x00,0x40,0x00,0x00,0x00},/*""",2*/
{0x09,0x00,0x0B,0xC0,0x3D,0x00,0x0B,0xC0,0x3D,0x00,0x09,0x00},/*"#",3*/
{0x18,0xC0,0x24,0x40,0x7F,0xE0,0x22,0x40,0x31,0x80,0x00,0x00},/*"$",4*/
{0x18,0x00,0x24,0xC0,0x1B,0x00,0x0D,0x80,0x32,0x40,0x01,0x80},/*"%",5*/
{0x03,0x80,0x1C,0x40,0x27,0x40,0x1C,0x80,0x07,0x40,0x00,0x40},/*"&",6*/
{0x10,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"'",7*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x80,0x20,0x40,0x40,0x20},/*"(",8*/
{0x00,0x00,0x40,0x20,0x20,0x40,0x1F,0x80,0x00,0x00,0x00,0x00},/*")",9*/
{0x09,0x00,0x06,0x00,0x1F,0x80,0x06,0x00,0x09,0x00,0x00,0x00},/*"*",10*/
{0x04,0x00,0x04,0x00,0x3F,0x80,0x04,0x00,0x04,0x00,0x00,0x00},/*"+",11*/
{0x00,0x10,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*",",12*/
{0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x00,0x00},/*"-",13*/
{0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*".",14*/
{0x00,0x20,0x01,0xC0,0x06,0x00,0x38,0x00,0x40,0x00,0x00,0x00},/*"/",15*/
{0x1F,0x80,0x20,0x40,0x20,0x40,0x20,0x40,0x1F,0x80,0x00,0x00},/*"0",16*/
{0x00,0x00,0x10,0x40,0x3F,0xC0,0x00,0x40,0x00,0x00,0x00,0x00},/*"1",17*/
{0x18,0xC0,0x21,0x40,0x22,0x40,0x24,0x40,0x18,0x40,0x00,0x00},/*"2",18*/
{0x10,0x80,0x20,0x40,0x24,0x40,0x24,0x40,0x1B,0x80,0x00,0x00},/*"3",19*/
{0x02,0x00,0x0D,0x00,0x11,0x00,0x3F,0xC0,0x01,0x40,0x00,0x00},/*"4",20*/
{0x3C,0x80,0x24,0x40,0x24,0x40,0x24,0x40,0x23,0x80,0x00,0x00},/*"5",21*/
{0x1F,0x80,0x24,0x40,0x24,0x40,0x34,0x40,0x03,0x80,0x00,0x00},/*"6",22*/
{0x30,0x00,0x20,0x00,0x27,0xC0,0x38,0x00,0x20,0x00,0x00,0x00},/*"7",23*/
{0x1B,0x80,0x24,0x40,0x24,0x40,0x24,0x40,0x1B,0x80,0x00,0x00},/*"8",24*/
{0x1C,0x00,0x22,0xC0,0x22,0x40,0x22,0x40,0x1F,0x80,0x00,0x00},/*"9",25*/
{0x00,0x00,0x00,0x00,0x08,0x40,0x00,0x00,0x00,0x00,0x00,0x00},/*":",26*/
{0x00,0x00,0x00,0x00,0x04,0x60,0x00,0x00,0x00,0x00,0x00,0x00},/*";",27*/
{0x00,0x00,0x04,0x00,0x0A,0x00,0x11,0x00,0x20,0x80,0x40,0x40},/*"<",28*/
{0x09,0x00,0x09,0x00,0x09,0x00,0x09,0x00,0x09,0x00,0x00,0x00},/*"=",29*/
{0x00,0x00,0x40,0x40,0x20,0x80,0x11,0x00,0x0A,0x00,0x04,0x00},/*">",30*/
{0x18,0x00,0x20,0x00,0x23,0x40,0x24,0x00,0x18,0x00,0x00,0x00},/*"?",31*/
{0x1F,0x80,0x20,0x40,0x27,0x40,0x29,0x40,0x1F,0x40,0x00,0x00},/*"@",32*/
{0x00,0x40,0x07,0xC0,0x39,0x00,0x0F,0x00,0x01,0xC0,0x00,0x40},/*"A",33*/
{0x20,0x40,0x3F,0xC0,0x24,0x40,0x24,0x40,0x1B,0x80,0x00,0x00},/*"B",34*/
{0x1F,0x80,0x20,0x40,0x20,0x40,0x20,0x40,0x30,0x80,0x00,0x00},/*"C",35*/
{0x20,0x40,0x3F,0xC0,0x20,0x40,0x20,0x40,0x1F,0x80,0x00,0x00},/*"D",36*/
{0x20,0x40,0x3F,0xC0,0x24,0x40,0x2E,0x40,0x30,0xC0,0x00,0x00},/*"E",37*/
{0x20,0x40,0x3F,0xC0,0x24,0x40,0x2E,0x00,0x30,0x00,0x00,0x00},/*"F",38*/
{0x0F,0x00,0x10,0x80,0x20,0x40,0x22,0x40,0x33,0x80,0x02,0x00},/*"G",39*/
{0x20,0x40,0x3F,0xC0,0x04,0x00,0x04,0x00,0x3F,0xC0,0x20,0x40},/*"H",40*/
{0x20,0x40,0x20,0x40,0x3F,0xC0,0x20,0x40,0x20,0x40,0x00,0x00},/*"I",41*/
{0x00,0x60,0x20,0x20,0x20,0x20,0x3F,0xC0,0x20,0x00,0x20,0x00},/*"J",42*/
{0x20,0x40,0x3F,0xC0,0x24,0x40,0x0B,0x00,0x30,0xC0,0x20,0x40},/*"K",43*/
{0x20,0x40,0x3F,0xC0,0x20,0x40,0x00,0x40,0x00,0x40,0x00,0xC0},/*"L",44*/
{0x3F,0xC0,0x3C,0x00,0x03,0xC0,0x3C,0x00,0x3F,0xC0,0x00,0x00},/*"M",45*/
{0x20,0x40,0x3F,0xC0,0x0C,0x40,0x23,0x00,0x3F,0xC0,0x20,0x00},/*"N",46*/
{0x1F,0x80,0x20,0x40,0x20,0x40,0x20,0x40,0x1F,0x80,0x00,0x00},/*"O",47*/
{0x20,0x40,0x3F,0xC0,0x24,0x40,0x24,0x00,0x18,0x00,0x00,0x00},/*"P",48*/
{0x1F,0x80,0x21,0x40,0x21,0x40,0x20,0xE0,0x1F,0xA0,0x00,0x00},/*"Q",49*/
{0x20,0x40,0x3F,0xC0,0x24,0x40,0x26,0x00,0x19,0xC0,0x00,0x40},/*"R",50*/
{0x18,0xC0,0x24,0x40,0x24,0x40,0x22,0x40,0x31,0x80,0x00,0x00},/*"S",51*/
{0x30,0x00,0x20,0x40,0x3F,0xC0,0x20,0x40,0x30,0x00,0x00,0x00},/*"T",52*/
{0x20,0x00,0x3F,0x80,0x00,0x40,0x00,0x40,0x3F,0x80,0x20,0x00},/*"U",53*/
{0x20,0x00,0x3E,0x00,0x01,0xC0,0x07,0x00,0x38,0x00,0x20,0x00},/*"V",54*/
{0x38,0x00,0x07,0xC0,0x3C,0x00,0x07,0xC0,0x38,0x00,0x00,0x00},/*"W",55*/
{0x20,0x40,0x39,0xC0,0x06,0x00,0x39,0xC0,0x20,0x40,0x00,0x00},/*"X",56*/
{0x20,0x00,0x38,0x40,0x07,0xC0,0x38,0x40,0x20,0x00,0x00,0x00},/*"Y",57*/
{0x30,0x40,0x21,0xC0,0x26,0x40,0x38,0x40,0x20,0xC0,0x00,0x00},/*"Z",58*/
{0x00,0x00,0x00,0x00,0x7F,0xE0,0x40,0x20,0x40,0x20,0x00,0x00},/*"[",59*/
{0x00,0x00,0x70,0x00,0x0C,0x00,0x03,0x80,0x00,0x40,0x00,0x00},/*"\",60*/
{0x00,0x00,0x40,0x20,0x40,0x20,0x7F,0xE0,0x00,0x00,0x00,0x00},/*"]",61*/
{0x00,0x00,0x20,0x00,0x40,0x00,0x20,0x00,0x00,0x00,0x00,0x00},/*"^",62*/
{0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10},/*"_",63*/
{0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"`",64*/
{0x00,0x00,0x02,0x80,0x05,0x40,0x05,0x40,0x03,0xC0,0x00,0x40},/*"a",65*/
{0x20,0x00,0x3F,0xC0,0x04,0x40,0x04,0x40,0x03,0x80,0x00,0x00},/*"b",66*/
{0x00,0x00,0x03,0x80,0x04,0x40,0x04,0x40,0x06,0x40,0x00,0x00},/*"c",67*/
{0x00,0x00,0x03,0x80,0x04,0x40,0x24,0x40,0x3F,0xC0,0x00,0x40},/*"d",68*/
{0x00,0x00,0x03,0x80,0x05,0x40,0x05,0x40,0x03,0x40,0x00,0x00},/*"e",69*/
{0x00,0x00,0x04,0x40,0x1F,0xC0,0x24,0x40,0x24,0x40,0x20,0x00},/*"f",70*/
{0x00,0x00,0x02,0xE0,0x05,0x50,0x05,0x50,0x06,0x50,0x04,0x20},/*"g",71*/
{0x20,0x40,0x3F,0xC0,0x04,0x40,0x04,0x00,0x03,0xC0,0x00,0x40},/*"h",72*/
{0x00,0x00,0x04,0x40,0x27,0xC0,0x00,0x40,0x00,0x00,0x00,0x00},/*"i",73*/
{0x00,0x10,0x00,0x10,0x04,0x10,0x27,0xE0,0x00,0x00,0x00,0x00},/*"j",74*/
{0x20,0x40,0x3F,0xC0,0x01,0x40,0x07,0x00,0x04,0xC0,0x04,0x40},/*"k",75*/
{0x20,0x40,0x20,0x40,0x3F,0xC0,0x00,0x40,0x00,0x40,0x00,0x00},/*"l",76*/
{0x07,0xC0,0x04,0x00,0x07,0xC0,0x04,0x00,0x03,0xC0,0x00,0x00},/*"m",77*/
{0x04,0x40,0x07,0xC0,0x04,0x40,0x04,0x00,0x03,0xC0,0x00,0x40},/*"n",78*/
{0x00,0x00,0x03,0x80,0x04,0x40,0x04,0x40,0x03,0x80,0x00,0x00},/*"o",79*/
{0x04,0x10,0x07,0xF0,0x04,0x50,0x04,0x40,0x03,0x80,0x00,0x00},/*"p",80*/
{0x00,0x00,0x03,0x80,0x04,0x40,0x04,0x50,0x07,0xF0,0x00,0x10},/*"q",81*/
{0x04,0x40,0x07,0xC0,0x02,0x40,0x04,0x00,0x04,0x00,0x00,0x00},/*"r",82*/
{0x00,0x00,0x06,0x40,0x05,0x40,0x05,0x40,0x04,0xC0,0x00,0x00},/*"s",83*/
{0x00,0x00,0x04,0x00,0x1F,0x80,0x04,0x40,0x00,0x40,0x00,0x00},/*"t",84*/
{0x04,0x00,0x07,0x80,0x00,0x40,0x04,0x40,0x07,0xC0,0x00,0x40},/*"u",85*/
{0x04,0x00,0x07,0x00,0x04,0xC0,0x01,0x80,0x06,0x00,0x04,0x00},/*"v",86*/
{0x06,0x00,0x01,0xC0,0x07,0x00,0x01,0xC0,0x06,0x00,0x00,0x00},/*"w",87*/
{0x04,0x40,0x06,0xC0,0x01,0x00,0x06,0xC0,0x04,0x40,0x00,0x00},/*"x",88*/
{0x04,0x10,0x07,0x10,0x04,0xE0,0x01,0x80,0x06,0x00,0x04,0x00},/*"y",89*/
{0x00,0x00,0x04,0x40,0x05,0xC0,0x06,0x40,0x04,0x40,0x00,0x00},/*"z",90*/
{0x00,0x00,0x00,0x00,0x04,0x00,0x7B,0xE0,0x40,0x20,0x00,0x00},/*"{",91*/
{0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xF0,0x00,0x00,0x00,0x00},/*"|",92*/
{0x00,0x00,0x40,0x20,0x7B,0xE0,0x04,0x00,0x00,0x00,0x00,0x00},/*"}",93*/
{0x40,0x00,0x80,0x00,0x40,0x00,0x20,0x00,0x20,0x00,0x40,0x00},/*"~",94*/
}; 
const unsigned char oled_asc2_1608[95][16]={	  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*" ",0*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xCC,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,0x00},/*"!",1*/
{0x00,0x00,0x08,0x00,0x30,0x00,0x60,0x00,0x08,0x00,0x30,0x00,0x60,0x00,0x00,0x00},/*""",2*/
{0x02,0x20,0x03,0xFC,0x1E,0x20,0x02,0x20,0x03,0xFC,0x1E,0x20,0x02,0x20,0x00,0x00},/*"#",3*/
{0x00,0x00,0x0E,0x18,0x11,0x04,0x3F,0xFF,0x10,0x84,0x0C,0x78,0x00,0x00,0x00,0x00},/*"$",4*/
{0x0F,0x00,0x10,0x84,0x0F,0x38,0x00,0xC0,0x07,0x78,0x18,0x84,0x00,0x78,0x00,0x00},/*"%",5*/
{0x00,0x78,0x0F,0x84,0x10,0xC4,0x11,0x24,0x0E,0x98,0x00,0xE4,0x00,0x84,0x00,0x08},/*"&",6*/
{0x08,0x00,0x68,0x00,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"'",7*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xE0,0x18,0x18,0x20,0x04,0x40,0x02,0x00,0x00},/*"(",8*/
{0x00,0x00,0x40,0x02,0x20,0x04,0x18,0x18,0x07,0xE0,0x00,0x00,0x00,0x00,0x00,0x00},/*")",9*/
{0x02,0x40,0x02,0x40,0x01,0x80,0x0F,0xF0,0x01,0x80,0x02,0x40,0x02,0x40,0x00,0x00},/*"*",10*/
{0x00,0x80,0x00,0x80,0x00,0x80,0x0F,0xF8,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x00},/*"+",11*/
{0x00,0x01,0x00,0x0D,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*",",12*/
{0x00,0x00,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80},/*"-",13*/
{0x00,0x00,0x00,0x0C,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*".",14*/
{0x00,0x00,0x00,0x06,0x00,0x18,0x00,0x60,0x01,0x80,0x06,0x00,0x18,0x00,0x20,0x00},/*"/",15*/
{0x00,0x00,0x07,0xF0,0x08,0x08,0x10,0x04,0x10,0x04,0x08,0x08,0x07,0xF0,0x00,0x00},/*"0",16*/
{0x00,0x00,0x08,0x04,0x08,0x04,0x1F,0xFC,0x00,0x04,0x00,0x04,0x00,0x00,0x00,0x00},/*"1",17*/
{0x00,0x00,0x0E,0x0C,0x10,0x14,0x10,0x24,0x10,0x44,0x11,0x84,0x0E,0x0C,0x00,0x00},/*"2",18*/
{0x00,0x00,0x0C,0x18,0x10,0x04,0x11,0x04,0x11,0x04,0x12,0x88,0x0C,0x70,0x00,0x00},/*"3",19*/
{0x00,0x00,0x00,0xE0,0x03,0x20,0x04,0x24,0x08,0x24,0x1F,0xFC,0x00,0x24,0x00,0x00},/*"4",20*/
{0x00,0x00,0x1F,0x98,0x10,0x84,0x11,0x04,0x11,0x04,0x10,0x88,0x10,0x70,0x00,0x00},/*"5",21*/
{0x00,0x00,0x07,0xF0,0x08,0x88,0x11,0x04,0x11,0x04,0x18,0x88,0x00,0x70,0x00,0x00},/*"6",22*/
{0x00,0x00,0x1C,0x00,0x10,0x00,0x10,0xFC,0x13,0x00,0x1C,0x00,0x10,0x00,0x00,0x00},/*"7",23*/
{0x00,0x00,0x0E,0x38,0x11,0x44,0x10,0x84,0x10,0x84,0x11,0x44,0x0E,0x38,0x00,0x00},/*"8",24*/
{0x00,0x00,0x07,0x00,0x08,0x8C,0x10,0x44,0x10,0x44,0x08,0x88,0x07,0xF0,0x00,0x00},/*"9",25*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x0C,0x03,0x0C,0x00,0x00,0x00,0x00,0x00,0x00},/*":",26*/
{0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*";",27*/
{0x00,0x00,0x00,0x80,0x01,0x40,0x02,0x20,0x04,0x10,0x08,0x08,0x10,0x04,0x00,0x00},/*"<",28*/
{0x02,0x20,0x02,0x20,0x02,0x20,0x02,0x20,0x02,0x20,0x02,0x20,0x02,0x20,0x00,0x00},/*"=",29*/
{0x00,0x00,0x10,0x04,0x08,0x08,0x04,0x10,0x02,0x20,0x01,0x40,0x00,0x80,0x00,0x00},/*">",30*/
{0x00,0x00,0x0E,0x00,0x12,0x00,0x10,0x0C,0x10,0x6C,0x10,0x80,0x0F,0x00,0x00,0x00},/*"?",31*/
{0x03,0xE0,0x0C,0x18,0x13,0xE4,0x14,0x24,0x17,0xC4,0x08,0x28,0x07,0xD0,0x00,0x00},/*"@",32*/
{0x00,0x04,0x00,0x3C,0x03,0xC4,0x1C,0x40,0x07,0x40,0x00,0xE4,0x00,0x1C,0x00,0x04},/*"A",33*/
{0x10,0x04,0x1F,0xFC,0x11,0x04,0x11,0x04,0x11,0x04,0x0E,0x88,0x00,0x70,0x00,0x00},/*"B",34*/
{0x03,0xE0,0x0C,0x18,0x10,0x04,0x10,0x04,0x10,0x04,0x10,0x08,0x1C,0x10,0x00,0x00},/*"C",35*/
{0x10,0x04,0x1F,0xFC,0x10,0x04,0x10,0x04,0x10,0x04,0x08,0x08,0x07,0xF0,0x00,0x00},/*"D",36*/
{0x10,0x04,0x1F,0xFC,0x11,0x04,0x11,0x04,0x17,0xC4,0x10,0x04,0x08,0x18,0x00,0x00},/*"E",37*/
{0x10,0x04,0x1F,0xFC,0x11,0x04,0x11,0x00,0x17,0xC0,0x10,0x00,0x08,0x00,0x00,0x00},/*"F",38*/
{0x03,0xE0,0x0C,0x18,0x10,0x04,0x10,0x04,0x10,0x44,0x1C,0x78,0x00,0x40,0x00,0x00},/*"G",39*/
{0x10,0x04,0x1F,0xFC,0x10,0x84,0x00,0x80,0x00,0x80,0x10,0x84,0x1F,0xFC,0x10,0x04},/*"H",40*/
{0x00,0x00,0x10,0x04,0x10,0x04,0x1F,0xFC,0x10,0x04,0x10,0x04,0x00,0x00,0x00,0x00},/*"I",41*/
{0x00,0x03,0x00,0x01,0x10,0x01,0x10,0x01,0x1F,0xFE,0x10,0x00,0x10,0x00,0x00,0x00},/*"J",42*/
{0x10,0x04,0x1F,0xFC,0x11,0x04,0x03,0x80,0x14,0x64,0x18,0x1C,0x10,0x04,0x00,0x00},/*"K",43*/
{0x10,0x04,0x1F,0xFC,0x10,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x0C,0x00,0x00},/*"L",44*/
{0x10,0x04,0x1F,0xFC,0x1F,0x00,0x00,0xFC,0x1F,0x00,0x1F,0xFC,0x10,0x04,0x00,0x00},/*"M",45*/
{0x10,0x04,0x1F,0xFC,0x0C,0x04,0x03,0x00,0x00,0xE0,0x10,0x18,0x1F,0xFC,0x10,0x00},/*"N",46*/
{0x07,0xF0,0x08,0x08,0x10,0x04,0x10,0x04,0x10,0x04,0x08,0x08,0x07,0xF0,0x00,0x00},/*"O",47*/
{0x10,0x04,0x1F,0xFC,0x10,0x84,0x10,0x80,0x10,0x80,0x10,0x80,0x0F,0x00,0x00,0x00},/*"P",48*/
{0x07,0xF0,0x08,0x18,0x10,0x24,0x10,0x24,0x10,0x1C,0x08,0x0A,0x07,0xF2,0x00,0x00},/*"Q",49*/
{0x10,0x04,0x1F,0xFC,0x11,0x04,0x11,0x00,0x11,0xC0,0x11,0x30,0x0E,0x0C,0x00,0x04},/*"R",50*/
{0x00,0x00,0x0E,0x1C,0x11,0x04,0x10,0x84,0x10,0x84,0x10,0x44,0x1C,0x38,0x00,0x00},/*"S",51*/
{0x18,0x00,0x10,0x00,0x10,0x04,0x1F,0xFC,0x10,0x04,0x10,0x00,0x18,0x00,0x00,0x00},/*"T",52*/
{0x10,0x00,0x1F,0xF8,0x10,0x04,0x00,0x04,0x00,0x04,0x10,0x04,0x1F,0xF8,0x10,0x00},/*"U",53*/
{0x10,0x00,0x1E,0x00,0x11,0xE0,0x00,0x1C,0x00,0x70,0x13,0x80,0x1C,0x00,0x10,0x00},/*"V",54*/
{0x1F,0xC0,0x10,0x3C,0x00,0xE0,0x1F,0x00,0x00,0xE0,0x10,0x3C,0x1F,0xC0,0x00,0x00},/*"W",55*/
{0x10,0x04,0x18,0x0C,0x16,0x34,0x01,0xC0,0x01,0xC0,0x16,0x34,0x18,0x0C,0x10,0x04},/*"X",56*/
{0x10,0x00,0x1C,0x00,0x13,0x04,0x00,0xFC,0x13,0x04,0x1C,0x00,0x10,0x00,0x00,0x00},/*"Y",57*/
{0x08,0x04,0x10,0x1C,0x10,0x64,0x10,0x84,0x13,0x04,0x1C,0x04,0x10,0x18,0x00,0x00},/*"Z",58*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFE,0x40,0x02,0x40,0x02,0x40,0x02,0x00,0x00},/*"[",59*/
{0x00,0x00,0x30,0x00,0x0C,0x00,0x03,0x80,0x00,0x60,0x00,0x1C,0x00,0x03,0x00,0x00},/*"\",60*/
{0x00,0x00,0x40,0x02,0x40,0x02,0x40,0x02,0x7F,0xFE,0x00,0x00,0x00,0x00,0x00,0x00},/*"]",61*/
{0x00,0x00,0x00,0x00,0x20,0x00,0x40,0x00,0x40,0x00,0x40,0x00,0x20,0x00,0x00,0x00},/*"^",62*/
{0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01},/*"_",63*/
{0x00,0x00,0x40,0x00,0x40,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"`",64*/
{0x00,0x00,0x00,0x98,0x01,0x24,0x01,0x44,0x01,0x44,0x01,0x44,0x00,0xFC,0x00,0x04},/*"a",65*/
{0x10,0x00,0x1F,0xFC,0x00,0x88,0x01,0x04,0x01,0x04,0x00,0x88,0x00,0x70,0x00,0x00},/*"b",66*/
{0x00,0x00,0x00,0x70,0x00,0x88,0x01,0x04,0x01,0x04,0x01,0x04,0x00,0x88,0x00,0x00},/*"c",67*/
{0x00,0x00,0x00,0x70,0x00,0x88,0x01,0x04,0x01,0x04,0x11,0x08,0x1F,0xFC,0x00,0x04},/*"d",68*/
{0x00,0x00,0x00,0xF8,0x01,0x44,0x01,0x44,0x01,0x44,0x01,0x44,0x00,0xC8,0x00,0x00},/*"e",69*/
{0x00,0x00,0x01,0x04,0x01,0x04,0x0F,0xFC,0x11,0x04,0x11,0x04,0x11,0x00,0x18,0x00},/*"f",70*/
{0x00,0x00,0x00,0xD6,0x01,0x29,0x01,0x29,0x01,0x29,0x01,0xC9,0x01,0x06,0x00,0x00},/*"g",71*/
{0x10,0x04,0x1F,0xFC,0x00,0x84,0x01,0x00,0x01,0x00,0x01,0x04,0x00,0xFC,0x00,0x04},/*"h",72*/
{0x00,0x00,0x01,0x04,0x19,0x04,0x19,0xFC,0x00,0x04,0x00,0x04,0x00,0x00,0x00,0x00},/*"i",73*/
{0x00,0x00,0x00,0x03,0x00,0x01,0x01,0x01,0x19,0x01,0x19,0xFE,0x00,0x00,0x00,0x00},/*"j",74*/
{0x10,0x04,0x1F,0xFC,0x00,0x24,0x00,0x40,0x01,0xB4,0x01,0x0C,0x01,0x04,0x00,0x00},/*"k",75*/
{0x00,0x00,0x10,0x04,0x10,0x04,0x1F,0xFC,0x00,0x04,0x00,0x04,0x00,0x00,0x00,0x00},/*"l",76*/
{0x01,0x04,0x01,0xFC,0x01,0x04,0x01,0x00,0x01,0xFC,0x01,0x04,0x01,0x00,0x00,0xFC},/*"m",77*/
{0x01,0x04,0x01,0xFC,0x00,0x84,0x01,0x00,0x01,0x00,0x01,0x04,0x00,0xFC,0x00,0x04},/*"n",78*/
{0x00,0x00,0x00,0xF8,0x01,0x04,0x01,0x04,0x01,0x04,0x01,0x04,0x00,0xF8,0x00,0x00},/*"o",79*/
{0x01,0x01,0x01,0xFF,0x00,0x85,0x01,0x04,0x01,0x04,0x00,0x88,0x00,0x70,0x00,0x00},/*"p",80*/
{0x00,0x00,0x00,0x70,0x00,0x88,0x01,0x04,0x01,0x04,0x01,0x05,0x01,0xFF,0x00,0x01},/*"q",81*/
{0x01,0x04,0x01,0x04,0x01,0xFC,0x00,0x84,0x01,0x04,0x01,0x00,0x01,0x80,0x00,0x00},/*"r",82*/
{0x00,0x00,0x00,0xCC,0x01,0x24,0x01,0x24,0x01,0x24,0x01,0x24,0x01,0x98,0x00,0x00},/*"s",83*/
{0x00,0x00,0x01,0x00,0x01,0x00,0x07,0xF8,0x01,0x04,0x01,0x04,0x00,0x00,0x00,0x00},/*"t",84*/
{0x01,0x00,0x01,0xF8,0x00,0x04,0x00,0x04,0x00,0x04,0x01,0x08,0x01,0xFC,0x00,0x04},/*"u",85*/
{0x01,0x00,0x01,0x80,0x01,0x70,0x00,0x0C,0x00,0x10,0x01,0x60,0x01,0x80,0x01,0x00},/*"v",86*/
{0x01,0xF0,0x01,0x0C,0x00,0x30,0x01,0xC0,0x00,0x30,0x01,0x0C,0x01,0xF0,0x01,0x00},/*"w",87*/
{0x00,0x00,0x01,0x04,0x01,0x8C,0x00,0x74,0x01,0x70,0x01,0x8C,0x01,0x04,0x00,0x00},/*"x",88*/
{0x01,0x01,0x01,0x81,0x01,0x71,0x00,0x0E,0x00,0x18,0x01,0x60,0x01,0x80,0x01,0x00},/*"y",89*/
{0x00,0x00,0x01,0x84,0x01,0x0C,0x01,0x34,0x01,0x44,0x01,0x84,0x01,0x0C,0x00,0x00},/*"z",90*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x3E,0xFC,0x40,0x02,0x40,0x02},/*"{",91*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00},/*"|",92*/
{0x00,0x00,0x40,0x02,0x40,0x02,0x3E,0xFC,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"}",93*/
{0x00,0x00,0x60,0x00,0x80,0x00,0x80,0x00,0x40,0x00,0x40,0x00,0x20,0x00,0x20,0x00},/*"~",94*/
};   

const unsigned char Hzk16[164][16]=
{
	 //按下用户按键确认开始自检无操作秒后退出正在自检，秒后完成轴角速度自检完成错误代码
	
	 //16*16
	{0x40,0x42,0x81,0xFE,0x00,0x00,0x01,0x21,0xD2,0x14,0x08,0x14,0xE2,0x01,0x00,0x00},
	{0x08,0x08,0x08,0xFF,0x09,0x04,0x19,0x11,0x11,0x97,0x71,0x11,0x11,0x15,0x19,0x00},/*"按",0*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x80,0x60,0x00,0x00,0x00},
	{0x40,0x40,0x40,0x40,0x40,0x40,0x7F,0x40,0x40,0x42,0x41,0x40,0x40,0x40,0x40,0x00},/*"下",1*/
	{0x01,0x06,0xF8,0x40,0x40,0x40,0x40,0xFE,0x40,0x40,0x42,0x41,0xFE,0x00,0x00,0x00},
	{0x00,0x00,0x7F,0x44,0x44,0x44,0x44,0x7F,0x44,0x44,0x44,0x44,0x7F,0x00,0x00,0x00},/*"用",2*/
	{0x00,0x01,0x06,0xF8,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0xC0,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x1F,0x10,0x10,0x90,0x70,0x10,0x10,0x10,0x10,0x1F,0x00,0x00,0x00},/*"户",3*/
	{0x40,0x42,0x81,0xFE,0x00,0x00,0x01,0x21,0xD2,0x14,0x08,0x14,0xE2,0x01,0x00,0x00},
	{0x08,0x08,0x08,0xFF,0x09,0x04,0x19,0x11,0x11,0x97,0x71,0x11,0x11,0x15,0x19,0x00},/*"按",4*/
	{0x80,0x80,0xFE,0x84,0x8A,0x64,0x18,0xE4,0x22,0xA2,0xA2,0xFA,0xA2,0xA2,0x22,0x00},
	{0x02,0x0C,0xF7,0x24,0x24,0x01,0x27,0x39,0x08,0x2A,0x2A,0xFF,0x2A,0x3E,0x08,0x00},/*"键",5*/
	{0x40,0x80,0xFE,0x08,0x08,0xFC,0x01,0x06,0xF8,0x90,0x90,0xFC,0x92,0x91,0xFE,0x00},
	{0x20,0x21,0x27,0x3A,0x22,0x23,0x04,0x08,0x17,0xE4,0x24,0x27,0x2C,0x34,0x07,0x00},/*"确",6*/
	{0x00,0x00,0x00,0xFC,0x09,0x12,0x04,0x18,0xE0,0x00,0xE0,0x18,0x04,0x02,0x01,0x00},
	{0x02,0x02,0x42,0x33,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00},/*"认",7*/
	{0x00,0x01,0x02,0x0C,0xF0,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00},
	{0x01,0x41,0x41,0x41,0x7F,0x41,0x41,0x41,0x41,0x41,0x7F,0x41,0x41,0x41,0x01,0x00},/*"开",8*/
	{0x02,0x44,0xA8,0x10,0x68,0x84,0x00,0x00,0x7F,0x42,0x42,0x42,0x42,0x7F,0x00,0x00},
	{0x08,0x08,0x0F,0xF8,0x08,0x0F,0x00,0x02,0x07,0x1A,0xE2,0x02,0x0A,0x06,0x03,0x00},/*"始",9*/
	{0x00,0x00,0x00,0xFF,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0xFF,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x1F,0x11,0x31,0x51,0x91,0x11,0x11,0x11,0x1F,0x00,0x00,0x00,0x00},/*"自",10*/
	{0x20,0xC0,0x00,0xFF,0x00,0x82,0x22,0x1A,0x82,0x72,0x06,0x1A,0xE2,0x02,0x02,0x00},
	{0x08,0x08,0x0B,0xFF,0x09,0x0A,0x04,0x0A,0x32,0xC2,0x32,0x0A,0x04,0x02,0x02,0x00},/*"检",11*/

	{0x01,0x02,0x04,0x08,0x30,0xC0,0x00,0x00,0xFC,0x02,0x02,0x02,0x02,0x0E,0x00,0x00},
	{0x00,0x02,0x42,0x42,0x42,0x43,0x7E,0x42,0x43,0x42,0x42,0x42,0x02,0x02,0x00,0x00},/*"无",12*/
	{0x42,0x41,0xFE,0x82,0x22,0xA4,0xA8,0xB0,0xA0,0x7F,0xB0,0xA8,0xA4,0xA2,0x22,0x00},
	{0x08,0x08,0xFF,0x08,0x09,0x07,0xF4,0x94,0x97,0x90,0x97,0x94,0xF4,0x07,0x00,0x00},/*"操",13*/
	{0x80,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0xFF,0x10,0x10,0x10,0x10,0x10,0x00,0x00},
	{0x00,0x01,0x06,0x1F,0xE0,0x02,0x0C,0xF0,0x1F,0x11,0x11,0x11,0x11,0x10,0x10,0x00},/*"作",14*/
	{0x10,0x60,0x80,0xFF,0x80,0x60,0x81,0x01,0x02,0x02,0xE4,0x08,0x30,0xC0,0x00,0x00},
	{0x24,0x24,0x25,0x7F,0xC4,0x44,0x00,0x03,0x1C,0x00,0xFF,0x00,0x10,0x08,0x06,0x00},/*"秒",15*/
	{0x02,0x04,0x18,0xE0,0x00,0x7F,0x42,0x42,0x42,0x42,0x42,0x42,0x7F,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x3F,0x24,0x24,0x24,0x24,0x44,0x44,0x44,0xC4,0x44,0x04,0x04,0x00},/*"后",16*/
	{0x00,0x02,0x04,0xF8,0x04,0x02,0xFA,0x12,0x22,0x02,0x82,0x42,0xA2,0x1A,0x02,0x00},
	{0x02,0x02,0x42,0x33,0x00,0x00,0xFF,0x92,0x92,0x93,0x92,0x92,0xFE,0x01,0x00,0x00},/*"退",17*/
	{0x00,0x3E,0x02,0x02,0x02,0x02,0x02,0xFE,0x02,0x02,0x02,0x02,0x02,0x3F,0x00,0x00},
	{0x00,0x00,0x3E,0x02,0x02,0x02,0x02,0xFF,0x02,0x02,0x02,0x02,0x3F,0x00,0x00,0x00},/*"出",18*/

	{0x02,0x02,0x02,0xFE,0x02,0x02,0x02,0xFE,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x00},
	{0x00,0x40,0x40,0x43,0x40,0x40,0x40,0x7F,0x41,0x41,0x41,0x41,0x41,0x40,0x00,0x00},/*"正",19*/
	{0x40,0x80,0x00,0xFF,0x02,0x82,0x82,0x82,0x82,0xFE,0x82,0x82,0x82,0x82,0x02,0x00},
	{0x10,0x10,0x11,0x13,0x1C,0x30,0xD0,0x10,0x10,0x17,0x10,0x10,0x10,0x10,0x10,0x00},/*"在",20*/
	{0x00,0x00,0x00,0xFF,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0xFF,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x1F,0x11,0x31,0x51,0x91,0x11,0x11,0x11,0x1F,0x00,0x00,0x00,0x00},/*"自",21*/
	{0x20,0xC0,0x00,0xFF,0x00,0x82,0x22,0x1A,0x82,0x72,0x06,0x1A,0xE2,0x02,0x02,0x00},
	{0x08,0x08,0x0B,0xFF,0x09,0x0A,0x04,0x0A,0x32,0xC2,0x32,0x0A,0x04,0x02,0x02,0x00},/*"检",22*/
	{0x00,0x00,0x1A,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"，",23*/
	{0x10,0x60,0x80,0xFF,0x80,0x60,0x81,0x01,0x02,0x02,0xE4,0x08,0x30,0xC0,0x00,0x00},
	{0x24,0x24,0x25,0x7F,0xC4,0x44,0x00,0x03,0x1C,0x00,0xFF,0x00,0x10,0x08,0x06,0x00},/*"秒",24*/
	{0x02,0x04,0x18,0xE0,0x00,0x7F,0x42,0x42,0x42,0x42,0x42,0x42,0x7F,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x3F,0x24,0x24,0x24,0x24,0x44,0x44,0x44,0xC4,0x44,0x04,0x04,0x00},/*"后",25*/
	{0x00,0x81,0x81,0x82,0x8C,0xF0,0x80,0x80,0x80,0xFE,0x81,0x81,0x81,0x8F,0x00,0x00},
	{0x08,0x30,0x20,0x24,0x24,0x24,0xA4,0x64,0x24,0x24,0x24,0x24,0x20,0x28,0x30,0x00},/*"完",26*/
	{0x01,0x06,0xF8,0x00,0x08,0x04,0xF8,0x01,0x02,0x84,0x68,0x18,0x64,0x82,0x1F,0x00},
	{0x00,0x00,0x1F,0x11,0x11,0x11,0x11,0x10,0x10,0xFF,0x10,0x90,0x50,0x13,0x10,0x00},/*"成",27*/

	{0x10,0x18,0x10,0xFF,0x20,0x20,0x00,0xFF,0x42,0x42,0xFE,0x42,0x42,0xFF,0x00,0x00},
	{0x13,0x1D,0xF1,0x17,0x11,0x11,0x00,0x0F,0x08,0x08,0xFF,0x08,0x08,0x0F,0x00,0x00},/*"轴",28*/
	{0x01,0x06,0xF8,0x90,0x90,0x90,0x90,0xFE,0x90,0x90,0x92,0x91,0xFE,0x00,0x00,0x00},
	{0x04,0x08,0x17,0x24,0xE4,0x24,0x24,0x27,0x24,0x2C,0x34,0x04,0x07,0x00,0x00,0x00},/*"角",29*/
	{0x00,0x02,0x04,0xF8,0x04,0x12,0x22,0x42,0x82,0xFA,0x82,0x42,0x22,0x12,0x02,0x00},
	{0x02,0x02,0x42,0x33,0x00,0x20,0x2F,0x29,0x29,0xFF,0x29,0x29,0x2F,0x20,0x00,0x00},/*"速",30*/
	{0x02,0x0C,0xF1,0x01,0x21,0x32,0xAA,0xA4,0xA4,0xA4,0xAA,0x32,0x01,0x01,0x01,0x00},
	{0x00,0x00,0x3F,0x24,0x24,0x24,0x3F,0xA4,0x64,0x24,0x3F,0x24,0x24,0x24,0x20,0x00},/*"度",31*/

	{0x00,0x00,0x00,0xFF,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0xFF,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x1F,0x11,0x31,0x51,0x91,0x11,0x11,0x11,0x1F,0x00,0x00,0x00,0x00},/*"自",32*/
	{0x20,0xC0,0x00,0xFF,0x00,0x82,0x22,0x1A,0x82,0x72,0x06,0x1A,0xE2,0x02,0x02,0x00},
	{0x08,0x08,0x0B,0xFF,0x09,0x0A,0x04,0x0A,0x32,0xC2,0x32,0x0A,0x04,0x02,0x02,0x00},/*"检",33*/
	{0x00,0x81,0x81,0x82,0x8C,0xF0,0x80,0x80,0x80,0xFE,0x81,0x81,0x81,0x8F,0x00,0x00},
	{0x08,0x30,0x20,0x24,0x24,0x24,0xA4,0x64,0x24,0x24,0x24,0x24,0x20,0x28,0x30,0x00},/*"完",34*/
	{0x01,0x06,0xF8,0x00,0x08,0x04,0xF8,0x01,0x02,0x84,0x68,0x18,0x64,0x82,0x1F,0x00},
	{0x00,0x00,0x1F,0x11,0x11,0x11,0x11,0x10,0x10,0xFF,0x10,0x90,0x50,0x13,0x10,0x00},/*"成",35*/

	{0x80,0x80,0xFE,0x84,0x88,0x00,0xFF,0x92,0x92,0x92,0x92,0x92,0xFF,0x00,0x00,0x00},
	{0x02,0x0C,0xF7,0x24,0x26,0x12,0x12,0xFE,0x12,0x12,0x12,0xFE,0x12,0x12,0x02,0x00},/*"错",36*/
	{0x00,0x00,0xFE,0x04,0x29,0x21,0x22,0x24,0x28,0xF0,0x28,0x24,0x22,0x21,0x21,0x00},
	{0x02,0x42,0x33,0x00,0x00,0x01,0x79,0x49,0x49,0x49,0x49,0x49,0x79,0x01,0x00,0x00},/*"误",37*/
	{0x80,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xC0,0x30,0x08,0x04,0x02,0x1F,0x00},
	{0x00,0x01,0x06,0x1F,0xE0,0x04,0x04,0x04,0xFE,0x05,0x08,0x88,0x68,0x08,0x08,0x00},/*"代",38*/
	{0x40,0x80,0xFE,0x08,0x08,0xFC,0x00,0x10,0x10,0x10,0x10,0x12,0x11,0x02,0xFC,0x00},
	{0x20,0x21,0x27,0x3A,0x22,0x23,0x00,0x40,0x4F,0x41,0x41,0x41,0x7F,0x01,0x01,0x00},/*"码",39*/
	
	{0x00,0x00,0xF8,0x10,0x10,0x10,0x10,0xFE,0x11,0x11,0x11,0x11,0xF9,0x01,0x0F,0x00},
	{0x00,0x00,0x1F,0x11,0x11,0x11,0x11,0xFF,0x11,0x11,0x11,0x11,0x1F,0x00,0x00,0x00},/*"电",40*/
	{0x01,0x06,0xF8,0x02,0x02,0x02,0x02,0x02,0xFE,0x02,0x02,0x22,0x1A,0x02,0x02,0x00},
	{0x00,0x00,0x7F,0x40,0x41,0x41,0x41,0x41,0x5F,0x41,0x41,0x41,0x41,0x41,0x40,0x00},/*"压",41*/
	{0x00,0x02,0x04,0xF8,0x04,0x02,0x02,0x82,0x02,0x12,0x0A,0xF2,0x02,0x02,0x02,0x00},
	{0x02,0x02,0x42,0x33,0x00,0x10,0x12,0x11,0x10,0x10,0x10,0xFF,0x10,0x10,0x10,0x00},/*"过",42*/
	{0x80,0x00,0x00,0xFF,0x00,0x00,0xFF,0x02,0x04,0x00,0x82,0x71,0x0C,0x02,0x1F,0x00},
	{0x00,0x01,0x06,0x1F,0xE0,0x00,0x3F,0x21,0x21,0x21,0x7F,0x41,0xC1,0x41,0x01,0x00},/*"低",43*/
	
	{0x00,0x00,0xFF,0x00,0x01,0x81,0xA2,0x94,0x88,0xF4,0x82,0x82,0x81,0x81,0x01,0x00},
	{0x01,0x06,0x1F,0xE0,0x20,0x27,0x24,0x24,0x24,0xFF,0x24,0x24,0x24,0x27,0x20,0x00},/*"使",44*/
	{0x00,0xFF,0x48,0x48,0x4A,0x49,0xFE,0x00,0x00,0x7E,0x11,0x11,0x21,0x41,0x07,0x00},
	{0x10,0x33,0x52,0x92,0x12,0x52,0x33,0x18,0x00,0xFE,0x11,0x11,0x21,0x41,0x07,0x00},/*"能",45*/
	{0x00,0x01,0x02,0x0C,0xF0,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00},
	{0x01,0x41,0x41,0x41,0x7F,0x41,0x41,0x41,0x41,0x41,0x7F,0x41,0x41,0x41,0x01,0x00},/*"开",46*/
	{0x81,0x81,0x82,0x82,0x84,0x88,0xB0,0xC0,0xB0,0x88,0x84,0x82,0x82,0x81,0x81,0x00},
	{0x00,0x00,0x08,0x88,0x68,0x08,0x08,0x0F,0x08,0x08,0x28,0xC8,0x08,0x00,0x00,0x00},/*"关",47*/
	{0x81,0x81,0x82,0x82,0x84,0x88,0xB0,0xC0,0xB0,0x88,0x84,0x82,0x82,0x81,0x81,0x00},
	{0x00,0x00,0x08,0x88,0x68,0x08,0x08,0x0F,0x08,0x08,0x28,0xC8,0x08,0x00,0x00,0x00},/*"关",48*/
	{0x00,0xFF,0x00,0x10,0x20,0x40,0x88,0x04,0xF8,0x00,0x00,0x02,0x01,0xFE,0x00,0x00},
	{0x00,0x1F,0x80,0x44,0x04,0x44,0x44,0x45,0x5F,0x44,0x44,0x44,0x40,0x7F,0x00,0x00},/*"闭",49*/
	
	{0x10,0x18,0x12,0x21,0x22,0xFC,0x00,0xFE,0x0A,0x12,0x62,0x82,0x62,0x1A,0x02,0x00},
	{0x40,0x5F,0x41,0x41,0x7F,0x01,0x00,0x7F,0x40,0x48,0x46,0x41,0x46,0x58,0x40,0x00},/*"驱",49*/
	{0x08,0x3C,0xC8,0x08,0x28,0x1D,0x02,0x0C,0x70,0x80,0x02,0x01,0x02,0xFC,0x00,0x00},
	{0x02,0x22,0x23,0x22,0x22,0x22,0x02,0x08,0x08,0xFF,0x08,0x08,0x08,0x0F,0x00,0x00},/*"动",50*/
	{0x44,0xE6,0x44,0x48,0x48,0x48,0x02,0x02,0x04,0xC8,0x30,0x28,0x44,0x82,0x1F,0x00},
	{0x04,0x0C,0x35,0xC6,0x04,0x18,0x01,0x09,0x09,0xFF,0x09,0x92,0x52,0x12,0x02,0x00},/*"线",51*/
	{0x02,0x0C,0xF1,0x01,0x02,0x02,0xC4,0x28,0x10,0x28,0x44,0x82,0x02,0x01,0x01,0x00},
	{0x00,0x00,0x3F,0x24,0x24,0x27,0x24,0x24,0x44,0x44,0x44,0xC5,0x46,0x00,0x00,0x00},/*"反",52*/
	{0x20,0x22,0x41,0xFE,0x80,0x41,0x41,0x52,0x6A,0xC4,0x44,0x4A,0x72,0x41,0x40,0x00},
	{0x08,0x08,0x08,0xFF,0x08,0x0A,0x22,0x2A,0xA6,0x63,0x22,0x26,0x2A,0x22,0x02,0x00},/*"接",53*/
	
	{0x10,0x18,0x12,0x21,0x22,0xFC,0x00,0xFE,0x0A,0x12,0x62,0x82,0x62,0x1A,0x02,0x00},
	{0x40,0x5F,0x41,0x41,0x7F,0x01,0x00,0x7F,0x40,0x48,0x46,0x41,0x46,0x58,0x40,0x00},/*"驱",54*/
	{0x08,0x3C,0xC8,0x08,0x28,0x1D,0x02,0x0C,0x70,0x80,0x02,0x01,0x02,0xFC,0x00,0x00},
	{0x02,0x22,0x23,0x22,0x22,0x22,0x02,0x08,0x08,0xFF,0x08,0x08,0x08,0x0F,0x00,0x00},/*"动",55*/
	{0x20,0x22,0x41,0xFE,0x80,0x00,0x01,0xF1,0x02,0x0C,0xF0,0x08,0x04,0xF3,0x00,0x00},
	{0x08,0x08,0x08,0xFF,0x08,0x09,0x00,0x03,0x7A,0x4A,0x4A,0x4A,0x7A,0x03,0x00,0x00},/*"损",56*/
	{0x10,0x18,0x10,0xE0,0x20,0x28,0x10,0x20,0x40,0x80,0xFF,0x00,0x00,0xC0,0x30,0x00},
	{0x04,0x04,0x04,0xFF,0x04,0x04,0x20,0x20,0x20,0x21,0x27,0x38,0x21,0x20,0x20,0x00},/*"坏",57*/
	
	{0x44,0xE6,0x44,0x48,0x4A,0x1C,0xE0,0xFF,0x90,0xFE,0x90,0xFC,0x91,0xFF,0x00,0x00},
	{0x04,0x0C,0x35,0xC6,0x0C,0x00,0x3F,0x24,0xA4,0x64,0x24,0x24,0x24,0x3C,0x00,0x00},/*"编",58*/
	{0x40,0x80,0xFE,0x08,0x08,0xFC,0x00,0x10,0x10,0x10,0x10,0x12,0x11,0x02,0xFC,0x00},
	{0x20,0x21,0x27,0x3A,0x22,0x23,0x00,0x40,0x4F,0x41,0x41,0x41,0x7F,0x01,0x01,0x00},/*"码",59*/
	{0x10,0x10,0x2F,0x29,0x49,0x49,0x8F,0x00,0x80,0x4F,0x49,0x29,0x29,0x1F,0x10,0x00},
	{0x01,0x01,0x79,0x49,0x49,0x49,0x79,0x07,0x01,0x79,0x4D,0x4B,0x49,0x79,0x01,0x00},/*"器",60*/
	{0x20,0x22,0x41,0xFE,0x80,0x00,0x01,0xF1,0x02,0x0C,0xF0,0x08,0x04,0xF3,0x00,0x00},
	{0x08,0x08,0x08,0xFF,0x08,0x09,0x00,0x03,0x7A,0x4A,0x4A,0x4A,0x7A,0x03,0x00,0x00},/*"损",61*/
	{0x10,0x18,0x10,0xE0,0x20,0x28,0x10,0x20,0x40,0x80,0xFF,0x00,0x00,0xC0,0x30,0x00},
	{0x04,0x04,0x04,0xFF,0x04,0x04,0x20,0x20,0x20,0x21,0x27,0x38,0x21,0x20,0x20,0x00},/*"坏",62*/
	
	{0x00,0x00,0xF8,0x10,0x10,0x10,0x10,0xFE,0x11,0x11,0x11,0x11,0xF9,0x01,0x0F,0x00},
	{0x00,0x00,0x1F,0x11,0x11,0x11,0x11,0xFF,0x11,0x11,0x11,0x11,0x1F,0x00,0x00,0x00},/*"电",63*/
	{0x20,0x20,0x7E,0x82,0x0C,0xF0,0x04,0xC8,0x92,0x81,0xFE,0x80,0x90,0xC8,0x04,0x00},
	{0x08,0x06,0x40,0x31,0x00,0x7F,0x40,0x4F,0x4A,0x5A,0x6A,0x4A,0x4A,0x4F,0x40,0x00},/*"源",64*/
	{0x08,0x10,0x20,0x40,0x80,0x00,0x00,0xFF,0x00,0x00,0x00,0x80,0x40,0x30,0x00,0x00},
	{0x00,0x40,0x40,0x40,0x40,0x41,0x42,0x4F,0x70,0x42,0x41,0x40,0x40,0x40,0x00,0x00},/*"不",65*/
	{0x10,0x60,0x80,0xFF,0x00,0xC1,0x06,0x20,0x26,0x31,0x2D,0x21,0x23,0xE8,0x06,0x00},
	{0x24,0x24,0x25,0x7F,0xC5,0x44,0x10,0x29,0x49,0xC9,0x49,0x59,0x69,0x0F,0x00,0x00},/*"稳",66*/
	{0x01,0x02,0x04,0x78,0x04,0x02,0x02,0xFE,0x22,0x22,0x22,0x22,0x22,0x02,0x02,0x00},
	{0x08,0x30,0x22,0x22,0x22,0x22,0xA2,0x63,0x22,0x22,0x22,0x22,0x22,0x28,0x30,0x00},/*"定",67*/
	
	{0x20,0x20,0x7E,0x80,0x02,0x7E,0x42,0x42,0x7E,0x42,0x7E,0x42,0x42,0x7E,0x02,0x00},
	{0x08,0x06,0x40,0x31,0x00,0x00,0x7F,0x49,0x49,0x49,0x49,0x49,0x7F,0x00,0x00,0x00},/*"温",68*/
	{0x02,0x0C,0xF1,0x01,0x21,0x32,0xAA,0xA4,0xA4,0xA4,0xAA,0x32,0x01,0x01,0x01,0x00},
	{0x00,0x00,0x3F,0x24,0x24,0x24,0x3F,0xA4,0x64,0x24,0x3F,0x24,0x24,0x24,0x20,0x00},/*"度",69*/
	{0x00,0x02,0x04,0xF8,0x04,0x02,0x02,0x82,0x02,0x12,0x0A,0xF2,0x02,0x02,0x02,0x00},
	{0x02,0x02,0x42,0x33,0x00,0x10,0x12,0x11,0x10,0x10,0x10,0xFF,0x10,0x10,0x10,0x00},/*"过",70*/
	{0x00,0x7F,0x40,0x40,0x5E,0x52,0x52,0x52,0x52,0x52,0x5E,0x40,0x41,0x7F,0x00,0x00},
	{0x20,0x20,0x20,0x20,0x2F,0x29,0xA9,0x69,0x29,0x29,0x2F,0x20,0x20,0x20,0x20,0x00},/*"高",71*/
	
	{0x00,0x00,0xF8,0x10,0x10,0x10,0x10,0xFE,0x11,0x11,0x11,0x11,0xF9,0x01,0x0F,0x00},
	{0x00,0x00,0x1F,0x11,0x11,0x11,0x11,0xFF,0x11,0x11,0x11,0x11,0x1F,0x00,0x00,0x00},/*"电",72*/
	{0x20,0xC0,0x00,0xFF,0x00,0xC1,0x06,0xF8,0x00,0x00,0x00,0xFC,0x02,0x02,0x1E,0x00},
	{0x08,0x08,0x0B,0xFF,0x09,0x08,0x00,0x7F,0x40,0x40,0x40,0x7F,0x00,0x00,0x00,0x00},/*"机",73*/
	{0x44,0xE6,0x44,0x48,0x48,0x48,0x02,0x02,0x04,0xC8,0x30,0x28,0x44,0x82,0x1F,0x00},
	{0x04,0x0C,0x35,0xC6,0x04,0x18,0x01,0x09,0x09,0xFF,0x09,0x92,0x52,0x12,0x02,0x00},/*"线",74*/
	{0x20,0x22,0x41,0xFE,0x80,0x41,0x41,0x52,0x6A,0xC4,0x44,0x4A,0x72,0x41,0x40,0x00},
	{0x08,0x08,0x08,0xFF,0x08,0x0A,0x22,0x2A,0xA6,0x63,0x22,0x26,0x2A,0x22,0x02,0x00},/*"接",75*/
	{0x80,0x80,0xFE,0x84,0x88,0x00,0xFF,0x92,0x92,0x92,0x92,0x92,0xFF,0x00,0x00,0x00},
	{0x02,0x0C,0xF7,0x24,0x26,0x12,0x12,0xFE,0x12,0x12,0x12,0xFE,0x12,0x12,0x02,0x00},/*"错",76*/
	
	{0x10,0x20,0xC0,0x00,0x00,0x02,0x01,0xFE,0x00,0x00,0x00,0x00,0x00,0x80,0x70,0x00},
	{0x00,0x00,0x00,0x07,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x04,0x02,0x01,0x00,0x00},/*"小",77*/
	{0x10,0x10,0x90,0x90,0x90,0x90,0x90,0xFF,0x90,0x90,0x90,0x90,0x90,0x10,0x10,0x00},
	{0x00,0x10,0x11,0x12,0x14,0x18,0xF0,0x17,0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x00},/*"车",78*/
	{0x02,0x02,0x02,0xFE,0x02,0x02,0x02,0xFE,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x00},
	{0x00,0x40,0x40,0x43,0x40,0x40,0x40,0x7F,0x41,0x41,0x41,0x41,0x41,0x40,0x00,0x00},/*"正",79*/
	{0x00,0x00,0x7C,0x40,0x40,0x40,0x40,0xFF,0x40,0x40,0x48,0x44,0x78,0x00,0x00,0x00},
	{0x04,0x18,0x10,0x57,0x35,0x15,0x15,0xF5,0x15,0x15,0x35,0x57,0x10,0x14,0x18,0x00},/*"常",80*/


   //16*16
	
};

#endif
