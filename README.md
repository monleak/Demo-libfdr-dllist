# Các lệnh dllist
#### Cấu trúc Dllist
```
typedef struct dllist {
  struct dllist *flink;
  struct dllist *blink;
  Jval val;
} *Dllist;
```
#### Khởi tạo list
`Dllist list = new_dllist();`

#### Chèn vào cuối danh sách
`extern dll_append(Dllist list, Jval val);`
#### Chèn vào đầu danh sách
`extern dll_prepend(Dllist list, Jval val);`
#### 
