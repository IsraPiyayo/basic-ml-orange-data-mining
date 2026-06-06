# 🚀 AIoT Workshop: From Data Foundations to Hardware Deployment (2 Days)

ยินดีต้อนรับเข้าสู่คลังเนื้อหาหลักสูตรการเรียนการสอน **AIoT (Artificial Intelligence + Internet of Things)** ระยะเวลา 2 วันเต็ม ที่จะพาทุกคนไปเรียนรู้ตั้งแต่พื้นฐานข้อมูล การสร้างโมเดล Machine Learning แบบ No-code ไปจนถึงการเขียนโค้ดสั่งการฮาร์ดแวร์จริงผ่านระบบคลาวด์

---

## 📅 ตารางการเรียนรู้ (Course Syllabus)

### 🔵 DAY 1: Data Foundations & Machine Learning (No-Code)
เน้นการทำความเข้าใจข้อมูลและการสร้างโมเดลทำนายเบื้องต้นผ่านโปรแกรม **Orange Data Mining**

* **Intro to AI, ML, DL & Data Flow**: เรียนรู้ความต่างของปัญญาประดิษฐ์แต่ละระดับ และความสำคัญของท่อน้ำข้อมูล (Data Pipeline)
* **Orange Data Mining**: แนะนำและฝึกใช้งานเครื่องมือ Visual Programming แบบลากวาง
* **Data Preprocessing**: การตรวจสอบ ทำความสะอาดข้อมูลดิบ จัดการค่าว่าง และตัดข้อมูลแปลกปลอม (Outliers)
* **Linear Regression**: สร้างแบบจำลองสมการเพื่อทำนายผลลัพธ์ที่เป็นตัวเลขต่อเนื่อง (เช่น การทำนายราคา)
* **Classification Model**: การสร้างแบบจำลองเพื่อตัดแบ่งและจำแนกกลุ่มข้อมูล (เช่น การแยกประเภท/เกรด หรือความเสี่ยงโรคหัวใจ)

### 🟢 DAY 2: Image Processing & IoT Hardware Deployment
เน้นการประมวลผลภาพถ่าย การเขียนโค้ด Python บน Cloud และการควบคุมอุปกรณ์ไฟฟ้าผ่านระบบ IoT

* **Image Processing & Embedding**: กระบวนการจัดการภาพถ่าย และการใช้ Deep Learning เปลี่ยนภาพให้เป็นรหัสตัวเลขที่ AI เข้าใจ
* **Data Annotation Workshop**: ฝึกฝนการทำเครื่องหมายและแปะป้ายระบุตำแหน่งวัตถุบนภาพถ่าย (Object Detection / Labelling)
* **Image Classification**: การสร้างโมเดลจำแนกประเภทรูปภาพและสัญลักษณ์มือ
* **COLAB to Broker Integration**: การสั่งรันโมเดลเว็บแคมบน **Google Colab** และเขียนโค้ด Python เพื่อส่งคำสั่งรหัส (เช่น `1` หรือ `2`) ไปยัง **MQTT Broker**
* **IoT Hardware Deployment (ESP32)**: การเขียนโค้ดด้วย Arduino IDE ให้บอร์ด **ESP32** รับค่าจาก MQTT Broker มาควบคุมอุปกรณ์ไฟฟ้า/ไฟ LED ในโลกจริง

---

## 🛠️ การเตรียมตัวก่อนเริ่มเรียน (Prerequisites & Installation)

เพื่อให้การทำ Workshop เป็นไปอย่างราบรื่น กรุณาดาวน์โหลดและติดตั้งโปรแกรมต่อไปนี้ล่วงหน้า:

1.  **Orange Data Mining**: [ดาวน์โหลดที่นี่](https://orangedatamining.com/)
    * *หมายเหตุ:* ใน Day 2 จะมีการใช้ Add-on ชื่อ `Orange3-ImageAnalytics` ให้ทำการติดตั้งผ่านเมนู `Options > Add-ons` ในโปรแกรม
2.  **Arduino IDE**: [ดาวน์โหลดที่นี่](https://www.arduino.cc/en/software) (สำหรับเขียนโค้ดลงบอร์ด ESP32)
    * ติดตั้งบอร์ดประเภท ESP32 ใน Boards Manager
    * ติดตั้งคลังไลบรารีสำหรับการเชื่อมต่อ MQTT (เช่น `PubSubClient`)
3.  **บัญชีผู้ใช้งานสำหรับระบบคลาวด์**:
    * **Google Account** (สำหรับใช้งาน Google Colab)
    * **GitHub Account** (สำหรับดาวน์โหลดและส่งงาน)

---

## 🏗️ ภาพรวมระบบการเชื่อมต่อใน DAY 2 (System Architecture)
