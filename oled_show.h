#ifndef __OLED_SHOW_H_
#define __OLED_SHOW_H_


extern void LCD_P16x16Ch(unsigned char x, unsigned char y, unsigned char N);
/*��ӭ����*/
extern void table_show();

/*�����趨ģ��*/
extern void Str_show(); 

/*��Ӧ���ܽ���*/
extern void Func_show();

/*��Ӧ������ʾ*/
extern void sign_show( uint8 i );

/*��ʾ�հ�ҳ*/
extern void blank_show();    
extern void DHT11_show();
extern void MQ2_show();
extern void RED_show();


#endif