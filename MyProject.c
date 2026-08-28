int left2;
int right2;
int left1;
int right1;
int counter1;
int counter2;
int counter3;
unsigned char delay_counter;
bit manual_flag;
void main(){
adcon1=0x07;
trisa=0b000 ;
porta=0b000;
trisd=0b10000000;
portd=0b0001111;
trisc=0b00000000;
portc=0;
trisb =0x00;
portb=0;
trisa.B5=1;
trise.B0=1;
while(1){
manual_flag=0;
if(porte.B0 ==0){                     //Automatic_mode
for(right2=3, counter1=20 ; right2>=0 && counter1>=0;right2-- , counter1-- ){
left2=2;
right1=counter1%10;
left1=counter1/10;
portd=0b0010000;
porta=0b001;
portb = (left2 & 0x0F) | (right2 << 4);
portc = (left1 & 0x0F) | (right1 << 4);
for (delay_counter = 0; delay_counter < 100; delay_counter++) {
delay_ms(10);
if (porte.B0 == 1) {
manual_flag=1;
break;
}
}
 if (manual_flag) break;
}
if (!manual_flag) {
for(right2=9, counter1=16 ; right2>=0 && counter1>=0 ; right2-- , counter1--){
left2=1;
right1=counter1%10;
left1=counter1/10;
portd=0b0010000;
porta=0b001;
portb = (left2 & 0x0F) | (right2 << 4);
portc = (left1 & 0x0F) | (right1 << 4);
for (delay_counter = 0; delay_counter < 100; delay_counter++) {
delay_ms(10);
if (porte.B0 == 1) {
manual_flag = 1;
break;
}
}
if (manual_flag) break;
}
}
if (!manual_flag) {
for(right2=9, counter1=6 ; right2>=3 && counter1>=0 ; right2-- , counter1--){
left2=0;
right1=counter1%10;
left1=counter1/10;
portd=0b0010000;
porta=0b001;
portb = (left2 & 0x0F) | (right2 << 4);
portc = (left1 & 0x0F) | (right1 << 4);
for (delay_counter = 0; delay_counter < 100; delay_counter++) {
delay_ms(10);
if (porte.B0 == 1) {
manual_flag = 1;
break;
}
}
if (manual_flag) break;
}
}
if (!manual_flag) {
for (right2=2 , counter2=3 ; right2>=0 && counter2>=0 ; right2-- , counter2-- ){
left2=0;
right1=counter2%10;
left1=counter2/10;
porta=0b010;
portd=0b0010000;
portb = (left2 & 0x0F) | (right2 << 4);
portc = (left1 & 0x0F) | (right1 << 4);
for (delay_counter = 0; delay_counter < 100; delay_counter++) {
delay_ms(10);
if (porte.B0 == 1) {
manual_flag = 1;
break;
}
}
if (manual_flag) break;
}
}
if (!manual_flag){
for (right2=3 , counter2=0 ; right2>=0 && counter2>=0  ; right2-- , counter2-- ){
left2=0;
right1=counter2%10;
left1=counter2/10;
porta=0b010;
portd=0b0100000;
portb = (left2 & 0x0F) | (right2 << 4);
portc = (left1 & 0x0F) | (right1 << 4);
for (delay_counter = 0; delay_counter < 100; delay_counter++) {
delay_ms(10);
if (porte.B0 == 1) {
manual_flag = 1;
break;
}
}
if (manual_flag) break;
}
}
if (!manual_flag) {
for (right2=2 , counter3=15 ; right2>=0 && counter3>=0  ; right2-- , counter3--){
left2=0;
right1=counter3%10;
left1=counter3/10;
porta=0b100;
portd=0b0100000;
portb = (left2 & 0x0F) | (right2 << 4);
portc = (left1 & 0x0F) | (right1 << 4);
for (delay_counter = 0; delay_counter < 100; delay_counter++) {
delay_ms(10);
if (porte.B0 == 1) {
manual_flag = 1;
break;
}
}
if (manual_flag) break;
}
}
if (!manual_flag) {
for (right2=2 , counter3=12 ; right2>=0 && counter3>=0 ;right2-- , counter3--){
left2=1;
right1=counter3%10;
left1=counter3/10;
porta=0b100;
portd=0b1000000;
portb = (left2 & 0x0F) | (right2 << 4);
portc = (left1 & 0x0F) | (right1 << 4);
for (delay_counter = 0; delay_counter < 100; delay_counter++) {
delay_ms(10);
if (porte.B0 == 1) {
manual_flag = 1;
break;
}
}
if (manual_flag) break;
}
}
if (!manual_flag) {
for (right2=9 , counter3=9 ; right2>=0 && counter3>=0 ; right2-- , counter3--){
left2=0;
right1=counter3%10;
left1=counter3/10;
porta=0b100;
portd=0b1000000;
portb = (left2 & 0x0F) | (right2 << 4);
portc = (left1 & 0x0F) | (right1 << 4);
for (delay_counter = 0; delay_counter < 100; delay_counter++) {
delay_ms(10);
if (porte.B0 == 1) {
manual_flag = 1;
break;
}
}
if (manual_flag) break;
}
}
}
if(porte.B0 == 1){                      //Manual_mode
for(right2=3 , right1=3 ; right2>=0 && right1>=0 ; right1-- ,right2--){
left2=0;
left1=0;
porta=0b010;
portd=0b0100000;
portb = (left2 & 0x0F) | (right2 << 4);
portc = (left1 & 0x0F) | (right1 << 4);
delay_ms(1000);
}
if(porta.B5==1){            //South_Street
left2=0;
right2=0;
left1=0;
right1=0;
portb = (left2 & 0x0F) | (right2 << 4);
portc = (left1 & 0x0F) | (right1 << 4);
porta=0b100;
portd=0b1000000;
}
else{                       //West_Street
left2=0;
right2=0;
left1=0;
right1=0;
portb = (left2 & 0x0F) | (right2 << 4);
portc = (left1 & 0x0F) | (right1 << 4);
porta=0b001;
portd=0b0010000;
}
while (porte.B0 == 1) {
//waiting for the other condition
}
}
}
}