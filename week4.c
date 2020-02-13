// //สรุป บรรยาย week4
// 1 การนิยาม ฟังก์ชัน
// return - value - type function- name (parameter-list)
// {
//     declarations
//     statement
// }

//     ex;
//     int isEven(int value)
//     {
//         if (value % 2==0){
//             return1;
//         }
//         else{
//             return 0;
//         }
//     }

// 2 รูปแบบฟังก์ชัน Prototype
// - ลักษณะเหมือน functiion headerของfuntion definition
// -Parameter - list ละชื่อตัวแปรได้
// ขหากไม่อยากระบุ Parameter ให้ใส่ void แทน
// ex ; int; is(ven(int);

// 3 dการเรียกใช้ ฟังก์ชัน
// -ส่งผ่านไปได้
// -การส่งผ่านค่าข้อมูลเรียก " Pass by value" โดย fn ที่ถูกเรียกใช้ จะ เก็บค
// ่าข้อมูลที่ถูกส่งผ่านมาในตัวแปรชั่วคราว

// 4 standard Libary Functions and Math Libary
// -พวก printf, scanf, getchar คือ ex ของ fnใน st Libary-
// -พวก sqrt, exp, log เป็น ex ของ Math
// -ตอนเรียกใช้ math ต้องระบุ -lm ตอนใช้ gcc

// 5 REturn values
// - fn จะส่งค่ากลับ หรือไม่ก็มี return type ที่มี void
// - ใช้ void เพื่อบอกว่าไม่ต้องส่งค่ากลับ
// - ถ้าจะส่งกลับให้return

// ex; 
// int is Even (int val)
// {
//     if (val%2 == 0){
//         return 1;
//     }
//     else{
//         return 0;
//     }

//     int main()
//     {
//         int value;
//         scanf("%d",&value);
//         if (is_even(value)==1){
//             pritnf("is an even");
//         }
//     }

// }

// 6 recursion (การเรียกซำ้)
// - fn เรียกใช้ตัวเองได้
// - อยู่รุป ไดเรค อินไดเรค
// - เม่อเรียกตัวเอง ตัวแปร จะเปงอีกชุด
// ex;
// long fac(long n )
// {
//     if (n == 0){
//         return 1;
//     }
//     else {
//         return n*fac(n-1);
//     }
// }
// int main(){
//     long n;
//     n=6;
//     printf(" ";n , factorial(n));
// }

// //A Local variables ตัวแปรที่ถูกประกาศใน blockใน ฟังก์ชันใช้งนแค่ใน
// //B Global Variables ตัวแปรที่ถูกประกาศนอกfn

// 8 Functions call + stack frams
// - ใช้เก็บตัวแปรจำนวนมาก ขณะprogramทำงาน
// -เมื่อ fnถูกเรียกใช้ stack frames จะถูกสร้าง
// -return address เป็น ตนใคำสั่งที่ถูกทำงานหลัง fn ทำงานเสมอ
// ข-เมื่อ จบ(return) stack frame จะถูกทำลาย



