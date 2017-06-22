## github的使用
#### 创建一个github仓库
create a new repository  
####  添加远程仓库 
1. 我们本地已经有git仓库了, 那我们现在就直接与github仓库进行关联就可以了.  
  $ git remote add origin https://github.com/wangleihd/freeBook-H5.git  
  $ git push -u origin master    
  
2. 我们还可以用clone直接去下载这个项目, 这也是最常用下载或拉取github仓库的方法.  
  $ git clone https://github.com/wangleihd/freeBook-H5.git    
#### 同步master分支
1. $ git push origin master
#### 同步其它分支
1. $ git push origin branch-name
#### 删除远程分支
1. $ git push -u origin :branch-name
#### 服务器上的git已经更新了, 当我们需要将服务器的源码与本地源友进行同步进时, 需要使用下面的命令.
1.$ git pull origin master
## markdown的基本使用
1. 标题
### 三级标题
#### 四级标题
2. 无序列表
主要使用-和*来标记无序列表

- George Washington
- John Adams
* Thomas Jefferson
3. 有序列表

1. James Madison
2. James Monroe
3. John Quincy Adams
4. 链接
5. 表格  

标题 | 内容 | 备注
-----|------|-----
今天 | 很热 | 少穿
昨天 | 下雨 | 打伞
