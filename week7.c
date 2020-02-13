//สรุปบรรยายสัปดาห์ที่7//
1 Pointers and addressses
 - สามารถจัดการmemโดยตรง
 - ตัวแปรเก็บค่าตำแหน่ง(ค่าที่เริ่มจาก 0)/ address on mem ที่อ้างถึง 
 ex int c;
    int *p; // ตัวแปร pอ้างอิงชี้ไปที่memที่ cถูกเก็บ
    p = &c; // &ที่ c

2 Pointer operaters
 - มีตัวดำเนินการอีก 2 ตัว คือ 1) & เรียก address operator เป็น unary operator ต้องการ 1operand ท่อยู่ในรูปตัวแปรp = &c;
   2)  *เรียก dereferencing opertor/ indirection operator เป็น unnary operator ถูกใช้ในการเข้าถึงข้อมูล

   #fn scanf(); //เป็นการแสดงผลเข้ามาในโปรแกรม ผ่านคีย์บอร์ด

3 Pointers and Arrays 
 - เก็บข้อมูล >1 จำนวน ที่เป็นประเภทเดวกัลไว้ในตัวแปร

5 การใช้ const and Pointers
 - แจ้งให้รู้ว่าค่าตัวแปรแก้มะได้ 
 !! อาจไม่เป็นตาม ANSI C กำหนด

6 Pointer อ้างไป fn
  ex; pf = &f[0];
  pf = pf+2//คือเพิ่มค่าpf เป็น 2 เท่า ของ ขนาดข้อมูล ที่pfอ้าง float มี 4 ดังนั้น; 2*4 = 8 ไบท์
  - นิพจน์ pf = pf+2 เพิ่มค่า p +ไปอีก8 หน่วย
  - -1= -4, +2 = *2

7 การใช้   Pointers อ้างไป ฟังก์ชันได้

8 การจองหน่วยความจำ Dynamic 
 -ใช้ fun malloc() and free()// จอง + คืนพื้นที่

 การใช้ malloc( ) !! >> หน่วยความจไทีี่ถูกจองจะถูกเก็บ Heap segment 
 ex;
 int *data;
 data = (int*)malloc(1000*sizeof(int));
 โดย พารามิเตอร์ ของmalloc เป็นจนใ ไบท์ ที่ใช้จอง + ส่งกลับ เป็น void* ตำแหน่งในหน่วยความจำ 
 ส่ง NULL เมื่อ หน่วยความจำไม่พอ

 การใช้  free() !! >> ตำแหน่งที่ต้องการคืน 

9 Complicated
  int *f1()// ประกาศค่าf1 ที่ส่งค่า pointer ไป int กลับ
  int (*f2)(); // ประกาศตัวแปร pointer f2 เก็บค่าตำแหน่งของ fn ที่ส่งค่าint กลับ
  int *(*f2)(); // ประกาศตัวแปรpointer f3 เก็บค่าตำแหน่ง ของ fn ที่ส่งค่าpointer ไป int กลับ
  int *daytab[13]; // ประกาศค่าตัวแปรอาเรย์ daytab(จำนวนสมาชิก 13 ตัว) ที่เก็บpointer ไป int

10 Segmentation fault >> //การที่เราพยายามหาหน่วยความจำที่ไม่ได้จอง หรือ ไม่ประกาศ ระบบจึงหยุดการทำงาน 

