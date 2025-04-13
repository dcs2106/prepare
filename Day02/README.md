# Day 02

# Day 02 - Bit Manipulation & Struct Practice

## 📅 日期
2025/04/14

---

## ✅ LeetCode 題目

### 1. [Find the Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number/) (Medium)
- 題型：Array, Bit Manipulation, Cycle Detection
- 解法：使用 Floyd's Tortoise and Hare Cycle Detection (O(n) 時間, O(1) 空間)

### 2. [Counting Bits](https://leetcode.com/problems/counting-bits/) (Medium)
- 題型：Bit Manipulation, Dynamic Programming
- 解法：使用 `dp[i] = dp[i >> 1] + (i & 1)` 的遞推式計算每個數字的 bit count

---

## ✅ C 實作練習：bitfield_struct.c

### 功能
- 定義結構 `SensorStatus`，包含以下位元欄位：
  - power_on (1 bit)
  - error (1 bit)
  - busy (1 bit)
  - mode (2 bits)
  - reserved (3 bits)
- 撰寫 `print_sensor_status()` 顯示各旗標狀態

### 重點學習
- C 語言 bitfield 用法與限制
- struct 的記憶體配置與對齊（padding）

---

## 🧠 面試思考與筆記

### Q：bitfield 有什麼風險？
A：bitfield 的對齊方式與大小端、編譯器相關，**不建議直接用於硬體 register 對應**，可用於內部邏輯表示旗標。

---

## 📂 檔案結構建議

```
Day02/
├── README.md
├── src/
   ├── bitfield_struct.c
   ├── bitfield_struct.h
   └── test_bitfield_struct.c

