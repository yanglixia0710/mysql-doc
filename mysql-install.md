# mysql的安装
### 用vim打开源文件列表
1. sudo vim /etc/apt/sources.list
1. vim .vimrc(配置vim文件)
1. sudo apt-get update 更新源
### Apache安装
1. sudo apt-get update
1. sudo apt-get install tasksel
1. sudo tasksel
### MySQL 命令行操作
1. 连接Mysql 格式： mysql -h 主机地址 -u用户名 －p用户密码

**注：键入命令mysql -u root -p，回车后提示你输密码.注意用户名前可以有空格也可以没有空格，
但是密码前必须没有空格，否则让你重新输入密码。如果刚安装好MYSQL，超级用户root是没有密码的，
故直接回车即可进入到MYSQL中了，MYSQL的提示符是： mysql>**
