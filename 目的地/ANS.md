載下題目檔案，這是一個binary檔
基本上在打PWN題目時，透過一些輸入，讓執行程式出現漏洞，使其吐出flag。
所以目標很明確的就是要得到對方SERVER的flag

而現在執行的話就是在自己電腦上跑，所以你拿到shell的話也是自己電腦上的shell，但我們目標是拿到遠端的shell

![pwn](https://github.com/Trinity-SYT-SECURITY/PWN/raw/main/pass/execpass.png)

>通常題目都會提供nc，並附上遠端server ip & port，nc是一個指令，讓你可以遠端到對方電腦查看題目

>nc過去只能輸入東西並查看程式的輸出，如果是在自己電腦的話就可以用GDB去追或是patch之類的
總結就是遠端只是一個原始的binary，你只能對他做輸入的動作
