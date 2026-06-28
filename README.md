# Project-Mikrocontroller-Water
Project untuk mata kuliah Sistem Mikrocontroller- Kelompok 9

# Nama Anggota:
1. Cindy Marcellina
2. Mochammad Andwi Haikal (23552011011)


# Smart Water Monitoring System

Prototype monitoring ketersediaan air  berbasis ESP32 dan sensor HC-SR04 yang dapat memantau kondisi air secara real-time menggunakan Web Dashboard, indikator LED, dan buzzer.

**ESP32 WeMos • HC-SR04 • LED • Buzzer • Web Dashboard • HTTP • FreeRTOS**

---

# 1. Gambaran Umum

Smart WaterMonitoring System merupakan sistem monitoring sederhana yang dirancang untuk mengetahui kondisi ketersediaan air  secara otomatis. Sistem menggunakan sensor ultrasonik HC-SR04 untuk mengukur jarak antara sensor dan permukaan air.

Data hasil pembacaan sensor diproses oleh ESP32 WeMos untuk menentukan status kondisi air berdasarkan jarak yang terdeteksi. Informasi tersebut kemudian ditampilkan secara real-time melalui Web Dashboard yang dapat diakses menggunakan smartphone maupun laptop yang berada dalam jaringan yang sama.

Sistem juga dilengkapi dengan LED sebagai indikator visual serta buzzer sebagai alarm otomatis ketika kondisi air dianggap kosong atau tidak terdeteksi.


---

# 2. Tujuan Proyek

- Membaca jarak permukaan air menggunakan sensor HC-SR04.
- Memantau kondisi ketersediaan air secara otomatis.
- Menampilkan data monitoring melalui Web Dashboard.
- Menampilkan indikator kondisi menggunakan LED.
- Memberikan alarm menggunakan buzzer.
- Mengimplementasikan HTTP Server pada ESP32.
- Mengimplementasikan RTOS (Real-Time Operating System).


---

# 3. Fitur

#### 1. Monitoring jarak air secara real-time

   Pengambilan data jarak air secara real-time menggunakan sensor ultrasonik untuk memastikan akurasi ketersediaan air.
#### 2. Indikator LED berdasarkan kondisi jarak

   LED memberikan feedback saat perubahan status terjadi berdasarkan jarak ketersediaan air yang telah ditentukan.
#### 3. Alarm buzzer otomatis

   Notifikasi suara otomatis sebagai peringatan dini saat ketersediaan air hampir habis.
#### 4. Web dashboard berbasis HTTP

   Menyajikan data status sistem dalam format JSON dengan antarmuka pengguna berbasis web.
#### 5. Implementasi RTOS (Real-Time Operating System)

   Mengimplementasikan RTOS (Real-Time Operating System) untuk menjalankan tugas sensor dan penanganan server secara bersamaan, sehingga sistem tetap responsif       dan stabil tanpa lag.
#### 6. Monitoring melalui smartphone dan laptop
   Monitoring status galon secara fleksibel dari berbagai perangkat seperti smartphone atau laptop selama terhubung dalam satu jaringan WiFi lokal yang sama.
