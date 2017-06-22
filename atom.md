### 一.Atom editor 开环境使用的插件
1. vim-mode：vim模式  
1. ex-mode：实现:w功能    
1. monokai：高亮显示  
1. emmet：写 HTML 的神器  
1. atom-ternjs：JavaScript 自动补全  
1. autoprefixer：给 CSS 添加适当的前缀  
1. color-picker：选颜色  
1. atom-beautify：美化代码，空格啊什么什么的
1. autoclose-html：HTML自动补全闭标签
1. file-icons: 增加许多图标,在侧边蓝文件名前面的icon,,很赞
1. autocomplete-modules: 自动补全插件, 有HTML, CSS, python 等

### 二.安装mysql的C语言库  
1. sudo apt-get update  
2. sudo apt-get install libmysqlclient-dev  

### 三.Makefile  
vim Makefile  
install:  
	cp *.cgi /usr/lib/cgi-bin/sx
### 四.Apache开启CGI

需要在apache中开启cgi支持.

sudo ln -s /etc/apache2/mods-available/cgi.load /etc/apache2/mods-enabled/cgi.load
需要重启 apache 服务器
service apache2 restart
需要运行的cgi文件的存放路径为:
/usr/lib/cgi-bin
改完目录的权限, 方便对目录下的文件写.
sudo mkdir /usr/lib/cgi-bin/sx
sudo chmod 777 /usr/lib/cgi-bin/sx

  


