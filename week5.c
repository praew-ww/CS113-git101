// สรุป บรรยาย week 5
1  scope Rules (ขอบเขต+ชีวิตตัวแปร)
*classes >> ผู้ใช้กำหนดให้ตัวแปร 4 ลักษณะ แบ่งเป็น 2 storagegister
2)static sto กำหนดในmem อยู่จนกว่าจะจบ พวกGlobal แต่ localก็ทำได้ มี extern, static

2 separatecompilation (การคอมไพล์แยกส่วน)

3 การใช้ make ; file จะใส่กฎต่างๆที่ใช้สร้าง ex; object/ executable การสร้างกฎ target: dependency
         --> tab --> คำสั่งที่ใช้ในการสร้าง target

4 การสร้าง static library ; gcc-c func.c
                            arrcr libfunc.a func.o

5 การสร้าง shared (Dynamic) library
  for windown ; gcc - shared -o libfunc.dll   -w1, --out- implib, libfunc.dill.axc
  mac ; gcc -shared -o libfunc.dulib*.o
  linux ; gcc -shared -olibfunc*o

  Random Num Generator 
    * rand() เป็นfunc ใน C standRD LIBRARY ใช้สร้างเลขสุ่มจนใเต็มที่อยู่ระหว่าง o, RAND_MAX //ค่าคงที่กำหนดใน<stdlib.h>
    * ปกติสุ่มชุดเดียวกัน แต่!!ถ้าเจอต่างกัน ต้องเรียก stand()หนึ่งครั้ง เพื่อกำหนดค่าseed ให้ ก่อนเรียกใช้ต่อไป!!!
