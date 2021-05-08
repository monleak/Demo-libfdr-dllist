# Các lệnh dllist (Danh sách liên kết đôi)
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
`dll_append(list, (Jval){.i = 1});`
#### Chèn vào đầu danh sách
`extern dll_prepend(Dllist list, Jval val);`
#### Xóa 1 node
`dll_delete_node(Dllist node)`
#### Kiểm tra 1 list có đang trống hay không
`dll_empty(Dllist l)`
#### Giải phóng 1 danh sách
`free_dllist(Dllist l)`
#### Node đầu/cuối
```
dll_first(list);
dll_last(list);
```
