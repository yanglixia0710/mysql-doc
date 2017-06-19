#### 创建一个github仓库
create a new repository  
#### github仓库的使用  
1. 我们本地已经有git仓库了, 那我们现在就直接与github仓库进行关联就可以了.
  git remote add origin https://github.com/wangleihd/freeBook-H5.git  
  git push -u origin master  

2. 我们还可以用clone直接去下载这个项目, 这也是最常用下载或拉取github仓库的方法.  
  git clone https://github.com/wangleihd/freeBook-H5.git    
3. 如果我们本地没有git仓库, 可以先在本地创建一个git仓库, 并做一个提交. 然后再互github远程仓库进行关联.
 echo "# abc" >> README.md  
 git init  
 git add README.md  
 git commit -m "first commit"  
 git remote add origin https://github.com/wangleihd/freeBook-H5.git  
 git push -u origin master  
#### markdown的基本使用
1. 标题
# 一级标题
## 二级标题
### 三级标题
1. 无序列表
主要使用-和*来标记无序列表

- George Washington
- John Adams
* Thomas Jefferson
1. 有序列表

1. James Madison
2. James Monroe
3. John Quincy Adams
1. 链接

[github](http://github.com)
1. 图片

![Image of Yaktocat](图片地址)
