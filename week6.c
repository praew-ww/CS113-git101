// //สรุป สัปดาห์ที่6 [บรรยาย array]
// array คือ ตัวแปรประเภทเดียวกันที่อยู่เป็นกลุ่มจัดการร่วมกัน
  
//   การ ประกาศ array ;
//    ex; int B[15]// B คือ ชื่อของarray ในเครื่องหมาย [size] ของอาเรย์
  
//   การเรียกใช้ตัวแปรในอาเรย์;
//     ตัวแปรต่างๆจะมีindexอยู่ 
//     ex; int B[15]; B[2]= 5;
//     เอามาใช้ได้เหมือน int ปกติ
//     ++ โดยเลขindex เริ่มจาก 0  คือ int B[15] เริ่มอจาก B[0] ถึง B[14]
 
//   การตั้งค่าเริ่มต้น 
//     ex; int B[10] = {0, 1, 2, 3}; //ตัวที่เหลือจะเป็น 0 



//       //การใช้ loop ใน array//

//       for (i = 0; i < 10; i++)  หรือ for (i = 0 ; i<= 10-1;i++)//เหมือนกัน 

//       ex; 
//       int main(){
//           int A[10] = {0, 1, 2, 3,....,9};
//           int i;
//           for (i = 0; i<=10-1; i++)
//           printf("%d =  %d\n", i, A[i] ); --> 0 1 2 3,...,9 

//       }

//     กำหนดขนาดตามค่าตั้งต้น 
//     int B[] = {0, 1, 2, 3}; // สร้างอาเรย์  4ตัวแปร ขนาดตอนประกาศควรเป็นค่าคงที่ที่ไม่เปลี่ยนแปลงตลอดการทำงาน



//             // define//

//         ทำให้ compiler เปลี่ยนอักษรทั้งหมดก่อนคอมไพล์
//         ex;
//             #define arraySize 5 
//             int main(){
//                 int B[arraySize] = {0, 1, 2, 3, 4};
//                 int i;
//                 for (i = 0; i < arraySize; i++)
//                 printf("%d", A[i]); ---> 0 1 2 3 4
//             }


//             // const//

//     - ทำให้รู้ว่าตัวแปรนี้จะไม่มีการเปลี่ยนแปลงค่า
//     - เริ่มใช้ตั้งแต่ตอนประกาศ -> const int arraySize = 5;

// การส่งค่าจาก array ไป fn;
// -เป็นการส่งแบบpass by value 
// ex; 
// #include<stdio.h>
// int addOne(int x);
// int main(){
//     int a[10] = {0};
//     printf("%d", A[2]); --> 0 
// }
// int addOne(int x){
//     x=x+1;
// }

// //ความแตกต่างของ pass by value กับ pass by reference;
// coppy ค่า ตัวแปรให้fn       | ส่ง ตำแหน่ง ตัวแปร ให้fn 
// สร้างตัวแปรใหม่ในf n        | ใช้ตัวแปรเดียวกันหมด
// การเปลี่ยนค่าfnไม่ส่งผลต้นแบบ | เปลี่ยนต้นแบบด้วย


// //array 2 มิติ 
// เป็นตาราง ประกาศ2 ชั้น ex; int A[2][3];
// |__|__|__|
// |__|__|__|

// การตั้งค่าเริ่มต้นของอาเรย์ 2 มิติ
// ex; int A[2][3] = {{1, 2, 3}, {4, 5, 6}}
// |_1|_2|_3|
// |_4|_5|_6|
// int A[2][3] = {{1,2} , {3}}
// |_1|_2|_0|
// |_3|_0|_0| //ตัวไม่มีก็เติม 0 ให้ครบ



 






     
