# 🛠️ Memory Management Demonstration

โปรเจกต์นี้แสดงการจัดการหน่วยความจำในภาษา **C** โดยแสดงการทำงานของ **stack** และ **heap memory** ผ่านการเรียกฟังก์ชันซ้อนกัน (recursive) และการจองหน่วยความจำแบบไดนามิกด้วย `malloc()` ซึ่งช่วยให้เข้าใจการเติบโตของหน่วยความจำและทิศทางที่มันขยายในระบบ

---

## 📂 ไฟล์ในโปรเจกต์

- **`mem_management.c`**: โค้ดต้นฉบับที่แสดงการเติบโตของ stack และ heap โดยสามารถเปลี่ยนแปลงจำนวนรอบในการทำงานของโค้ดได้ที่ตัวแปร var_nums ใน main( )
- **`mem_management.exe`**: ไฟล์ที่คอมไพล์สำหรับ Windows
- **`output.txt`**: ผลลัพธ์ที่ได้จากการรันโปรแกรมซึ่งแสดงที่อยู่หน่วยความจำและทิศทางของการเติบโต

---

## 🚀 วิธีการรันโค้ด

### **สำหรับ Linux/macOS:**

1. **คอมไพล์โค้ด**:
   ```bash
     gcc mem_management.c -o mem_management
   ```
2. **รันโปรแกรมและบันทึกผลลัพธ์ในไฟล์:**
   ```bash
    ./mem_management > output.txt
   ```
    ผลลัพธ์จะถูกบันทึกลงในไฟล์ output.txt

### **สำหรับ Windows:**

1. **เปิด Command Prompt และไปยังโฟลเดอร์ที่เก็บไฟล์โค้ด**

2. **คอมไพล์โค้ด (ใช้ MinGW หรือคอมไพเลอร์ C ใดๆ):**
   ```bash
     gcc mem_management.c -o mem_management
   ```
3. **รันโปรแกรมและบันทึกผลลัพธ์:**
   ```bash
    mem_management > output.txt
   ```
    ผลลัพธ์จะถูกบันทึกลงในไฟล์ output.txt

## 📝 ตัวอย่างผลลัพธ์
**นี่คือตัวอย่างของผลลัพธ์ที่บันทึกในไฟล์ output.txt:**
  ```bash
  Demonstrating stack growth:
  Stack address (layer 1): 00000041C67FF7FC
  Stack address (layer 2): 00000041C67FF7BC
  Stack is growing downward
  Stack address (layer 3): 00000041C67FF77C
  Stack is growing downward
  Stack address (layer 4): 00000041C67FF73C
  Stack is growing downward
  Stack address (layer 5): 00000041C67FF6FC
  Stack is growing downward
  
  Demonstrating heap growth:
  Heap address (layer 1): 00000239F2CEA590
  Heap address (layer 2): 00000239F2CEA5B0
  Heap is growing upward
  Heap address (layer 3): 00000239F2CEA5D0
  Heap is growing upward
  Heap address (layer 4): 00000239F2CE8050
  Heap is growing downward
  Heap address (layer 5): 00000239F2CE8070
  Heap is growing upward
   ```
---
## 📚 หมายเหตุ
**โปรเจกต์นี้เป็นส่วนหนึ่งของวิชา: 01204332 Operating Systems 2024 Kasetsart University**
