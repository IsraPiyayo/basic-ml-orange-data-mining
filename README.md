# AI & Machine Learning Workshop: From Raw Data to Model Insights

คลังเก็บเนื้อหา สื่อการเรียนการสอน และซอร์สโค้ดสำหรับงานเวิร์กชอปปูพื้นฐาน **Artificial Intelligence (AI) และ Machine Learning (ML)** หลักสูตรเร่งรัดระยะเวลา 2 วัน เน้นการลงมือทำจริงแบบ Hands-on เหมาะสำหรับนักศึกษา บุคคลทั่วไป หรือผู้สอนที่ต้องการนำไปปรับใช้ในการเรียนการสอนระดับมหาวิทยาลัย

---

## 📅 โครงสร้างหลักสูตร (Course Outline)

### 🧩 DAY 1: Intro to AI, ML, DL & Data Flow
เน้นความเข้าใจภาพรวม ท่อน้ำข้อมูล และการสร้างโมเดลทำนายผลลัพธ์จากข้อมูลตัวเลข/ประเภท
* **Intro to AI, ML, DL & Data Flow:** เรียนรู้ความต่างของปัญญาประดิษฐ์แต่ละระดับ และความสำคัญของ Pipeline ข้อมูล
* **Orange Data Mining:** แนะนำการใช้งานเครื่องมือ Visual Programming แบบลากวางเบื้องต้น (No-code)
* **Data Preprocessing:** การตรวจสอบ ทำความสะอาดข้อมูลดิบ และการจัดการข้อมูลแปลกปลอม (Outliers)
* **Linear Regression Model:** การสร้างแบบจำลองสมการเพื่อทำนายผลลัพธ์ที่เป็นตัวเลขต่อเนื่อง (เช่น การทำนายราคา)
* **Classification Model:** การสร้างแบบจำลองเพื่อตัดแบ่งและจำแนกกลุ่มข้อมูล (เช่น การแยกประเภท/เกรด)

### 👁️ DAY 2: Image Processing & IoT Integration
เน้นกระบวนการจัดการข้อมูลรูปภาพ คอมพิวเตอร์วิทัศน์ และการเชื่อมต่อระบบเข้ากับฮาร์ดแวร์จริง
* **Image Processing & Embedding:** กระบวนการจัดการภาพถ่าย และการเปลี่ยนภาพเป็นรหัสตัวเลขด้วย Deep Learning
* **Data Annotation Workshop:** ฝึกฝนการทำเครื่องหมายและแปะป้ายระบุตำแหน่งวัตถุบนภาพถ่าย (Labeling)
* **Image Classification:** การเทรนโมเดลจำแนกประเภทรูปภาพและสัญลักษณ์มือด้วย Orange
* **COLAB to Broker Integration:** การรันโมเดลเว็บแคมบน Google Colab และใช้ Python ส่งคำสั่งควบคุมไปยัง MQTT Broker
* **IoT Hardware Deployment (ESP32):** การเขียนโค้ดให้บอร์ด ESP32 รับค่าจาก Broker มาสั่งเปิด-ปิด อุปกรณ์ไฟฟ้าในโลกจริง

---

## 🛠️ เครื่องมือที่ใช้ในเวิร์กชอป (Prerequisites)

เพื่อให้การเรียนการสอนเป็นไปอย่างราบรื่น ผู้เข้าเรียนควรเตรียมตัวและติดตั้งเครื่องมือดังต่อไปนี้:
1. **Orange Data Mining (v3.x ขึ้นไป):** [ดาวน์โหลดที่นี่](https://orangedatamining.com/)
   * *หมายเหตุ:* ใน Day 2 จะต้องติดตั้ง Add-on เสริมชื่อ `Orange3-ImageAnalytics` ผ่านเมนู `Options > Add-ons`
2. **Google Account:** สำหรับใช้งาน Google Colab ในการเขียนและรันโค้ด Python ผ่านระบบคลาวด์
3. **MQTT Broker:** (เช่น HiveMQ หรือ Netpie) สำหรับใช้เป็นตัวกลางส่งผ่านข้อมูลระหว่างโมเดล AI และอุปกรณ์ IoT
4. **Arduino IDE / VS Code:** สำหรับผู้ที่สนใจทดสอบร่วมกับบอร์ดไมโครคอนโทรลเลอร์ ESP32

---

## 📁 โครงสร้างคลังเก็บข้อมูล (Repository Structure)

```text
├── DAY_1_Data_Foundations/
│   ├── datasets/               # ชุดข้อมูลตัวอย่าง (CSV) เช่น สำหรับทำ Linear/Classification
│   ├── orange_workflows/       # ไฟล์โปรเจกต์ .ows ของโปรแกรม Orange
│   └── README.md               # สรุปเนื้อหาและแบบฝึกหัด Day 1
├── DAY_2_Image_and_IoT/
│   ├── sample_images/          # ภาพถ่ายตัวอย่างสำหรับฝึกทำ Image Embedding
│   ├── notebooks/              # ไฟล์ Google Colab (.ipynb) สำหรับต่อสายเว็บแคม
│   ├── esp32_code/             # โค้ดภาษา C++/Python สำหรับบอร์ด ESP32
│   └── README.md               # สรุปเนื้อหาและแบบฝึกหัด Day 2
└── LICENSE                     # สัญญาอนุญาตการใช้งานเนื้อหา
