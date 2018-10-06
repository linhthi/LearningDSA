# CHƯƠNG 2: sẮP XẾP - CÁC GIẢI THUẬT CƠ SỞ
## 1.  Các định nghĩa
### 1.1 Bài toán sắp xếp
  Sắp xếp là một bài toán cơ sở trong xử lí thông tin. Trước hết nó phục vụ cho việc tìm kiếm dữ liệu. Thời gian thực hiện nhiều thuật giải sẽ được cải thiện đáng kể nếu dữ liệu đầu vào đã được sắp thứ tự.
  
  Mô hình toán học của bài toán sắp xếp là: có dãy các phần tử thuộc kiểu có thứ tự nào đó. Đổi chỗ cấc phần tử trong dãy sao cho dãy mới nhận được có thứ tư(tăng hoặc giảm dần).
  
  Bài toán sắp xếp được chia thành hai loại.
  
  1- Sắp xếp trong: toàn bộ dãy cần sắp xếp nằm trong bộ nhớ, có thể truy cập trực tiếp tới một phần tử bất kì.
  
  2- Sắp xếp ngoài: lượng dữ liệu cần sắp xếp nằm trong các tập tin trên bộ nhớ ngoài, chỉ có thể truy cập tuần tự, đọc từng phần vào bộ nhớ trong.
  
  Vì thời gian truy cập đĩa hay băng từ lâu hơn gấp nhiều lần so với truy cập bộ nhớ trong nên sắp xếp ngoài đòi hỏi xem xét dưới góc độ khác.
  
  Ở đây ta chỉ xét sắp xếp trong.
  
  Sắp xêp strong cũng được gọi là sắp xếp mảng.
  
  - Đầu vào: (mảng) dãy nguồn;    a1,a2,...,an
  - Đầu ra : (mảng) dãy đích đã được sắp xếp: ak1, ak2,..,akn
  
  Một cách tổng quát, mỗi phần tử mảng ai là một mẫu tin ( bản ghi) ta gọi chung là một item, có thể gồm nhiều trường, nhưng phải có một trường được chọn làm khóa sắp xếp - key.Trường khóa phải là kiểu dữ liệu có thứ tự nào đó. Ví dự, số nguyên, số thực, xâu kí tự,...
  ```sh
  Type item = record
       key: <kiểu có thứ tự>;
       filed_1: <kiểu dữ liệu>;
       .....
       field_n: <kiểu dữ liệu>;
       end;
  ```
  Dãy đích thỏa mãn
  ```sh
  ak1.key <= ak2.key <= ... <= akn.key
  ```
  Để đơn giản cho việc trình bày, từ nay khi nói về bài toán sắp xếp ta chỉ quan tâm đến trường khóa. Nghĩa là ta đồng nhất mãu tin với trường khóa của nó, coi ai chính là các khóa để sắp xếp.
  
  Các giá trị khóa có thể trùng nhau.
  
  ### 1.2 Thuật giải sắp xếp
    Định nghĩa 1: Thuật toán sắp xếp gọi là ổn định (stable) nếu nó không đảo lộn trật tự ban đầu của các khóa cùng giá rị: nếu ai = aj, i<j và thuật giải sắp xếp đổi chỗ ai đến vị trí i', đổi chỗ aj đến vị trí mới j' thì vẫn có i'<j'
    
    Định nghĩa 2: Thuật giải sắp xếp gọi là tại chỗ( in situ ) nếu chỉ sử dụng thêm một lượng O(1) không gian nhớ ngoài dãy ban đầu.
    
    Các thuật giải cần bảo đảm :
    - Chỉ sử dụng bộ nhớ trong;
    - Có hiệu quả, tiết kiệm bộ nhớ và thời gian.
    
    Hai phép toand cơ sở khi thực hiên sắp xếp là so sánh và đổi chỗ.
    
    Thời gian thực hiện giải thuật sẽ đo bằng tổng số lần thực hiện phép so sánh C(n) cộng với số lần thực hiện phép hoán đổi vị trí M(n).
    
    Dưới đây ta sẽ trình bày một số thuật giải sắp xếp cơ sở, đong thời phân tích đánh giá thời gian thực hiện của các thuật giải này.
  ## 2 Phương pháp đổi chỗ trực tiếp (Bubble sort)
  ### 2.1 Mô tả
  ####    Ý tưởng của phương pháp
      Đúng như tên gọi của nó, ý tưởng chính của phương pháp sắp xếp này là thực hiên duyệt từng cặp phần tử của mảng, nếu cặp nào chưa đuungs thứ tự cần có thì đổi chỗ hai phần tử cho nhau. Lặp lại việ này cho đến khi mảng được sắp xếp đúng thứ tự.
 ####     Chi tiết các bước
    Bước 1: Bắt đầu từ mút phải a[nư, xét cặp phần tử cạnh nhau a[n], a[n-1]. Đổi chỗ chúng cho nhau nếu sai thứ tự. Nếu đúng thứ tự thì thôi. sau đó tiến thêm về trái một vị trí, nghĩa là xét các cặp a[n-1], a[n-2]/ lặp lại phép kiểm tra và đổi chỗ trên cho đến khi tới mút trái.
    
    Sau bước này số nhỏ nhất sẽ ở vị trí thứ 1.
    
    Bướ i: Bắt đầu từ đầu mút phải a[n], xét cặp phần tử cạnh nhau, đổi chỗ chúng cho nhau nếu sai vị trí. Sau đó tiến thêm về trái một vị trí, lặp lại phép kiểm tra và đổi chỗ trên cho đến khi tới vị trí i.
