
#เกริ่นนำ sturcture 
 - การกำหนดรูปแบบ + โครงสร้างหลายเรื่องที่สัมพันธ์กัน
 ex; struct student{//การหกำหนด sturct + ตั้งชื่อ
        char id[12];//ถ้าเป็นคาแรคเตอร์ต้องใส่เลขจอง
        char name [40];
        int age;// ไม่ต้องจอง
 }; // ข้างในเป็นการประกาศตัวแปรที่จะใช้

 - การประกาศ + กำหนดค่าเริ่มต้น
   ex; struct student andher_std = { "6210406645"}

 - pointer 
  ex ; "*p_std;"
     p_std = &std;
     printf("%s/n ",(*p_std). name);// " . " ก็เป็นการชี้ไปเหมือนกัน
     (*p_std ).age = 21; 
     stcpy(p_std-> id = "6210406654" );//stcpy เป็นการก็อปปี้ สตริง

 - การใช้ typedef ; กำหนด ประเภทข้อมูล
 ex ; typedef unsigned long int ;
 --> กรณี sturct 
    ex; typedef sturct student{
        char id [12];
        char name [40];
        int age ;
        
    }student

 - self - Referential structures //มาเพื่อ จัดการ linked list สร้างโดยใช้ struct ในtruct มี...ที่เป็นpointer เพื่อใช้อ้างกลับไปยังstruct ได้
   ex ; struct node{
       int data;
       struct node*next;
   };
   //มักใช้node ในการอ้างถึงข้อมูล 1 หน่วย


   strcmp //เอาคาแรคเตอร์ 2 ตัว มา - กัน จนกว่าจะ NULL

 - incomplete Declarations
  //การหาแบบเวลาที่  a ใช้ b , bใช้a ต้องประกาศ struct b ไว้บนสุดก่อน
 
 - initializing structures
  //การเข้าถึง โดยใช้ . 

# Arrays of Structures 
ex ; struct entry {
       char frame [10];
       char lname [12];
       char phone [8];

 };//การเขียน struct 
 struct entry list [1000];

# Pointer to structures
ex ; struct part{
    float price;
    char name [10];
};
struct part*p, thing ;
p = &thing ;
thing.pirce = 50;
(*p). price = 50; 

# ถ้า ไม่มี struct สร้างจากอากาศ ใช้ malloc 
 struct part *p, *q; // ประกาศ pointer
  p = (struct part*) malloc (sizeof(struct part));
  q = (struct part*) malloc (sizeof(struct part));
  p -> price = 19999;//การให้มันชี้ไป


  free(p); //ทำให้ ก้อนข้อมูลหายไป

  malloc (10*sizeof (struct part)); // การคูณเข้าไปให้ช่องเพิ่ม 10 ช่อง 
{//การเข้าถึงแบบบวก p เข้าไป 
    struct part *ptr, *p;
    ptr = (struct part*) malloc (10*sizeof(struct part));
     for ( i=0, p = ptr; i<10;i++, p++)
    {
        p-> price  = 10.0*i;
        printf(p -> name,"part%d", i);
    }
    free (ptr);
}

 การใส่ คาแรคเตอร์ ทำได้ 2 แบบ คือ
 1) char name[50]; //เปฌนarray ระบุ byte ที่เก็บ
 2) char *name ; //เป็น pointer ไม่ระบุค่าที่จะเคลื่อนได้ 



