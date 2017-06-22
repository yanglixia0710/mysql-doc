#### 一.创建数据库
命令： create database stu  
#### 二.显示数据库  
命令：show databases  
#### 三.删除数据库
命令： drop database <数据库名> 
#### 四.使用数据库
命令： use stu
### 五.创建表
1. 学生信息表

  字段名    | 类型     | 空直  | 默认值  |  备注         
-----------|----------|----- |---------|----------
  sno      | int(4)   | NO   | NULL    | 主键
  sname    | char(20) | NO   | NULL    |                
  sex      | char(10) | NO   | F       |                
  sage     | int(4)   | NO   | NULL    |                
  sedeptno | int(4)   | NO   | NULL    |               
  state    | char(10) | YES  |  0      | 标志               
 2. 课程信息表

 字段名   |  类型    | 空值  | Default  | 备注  
---------|----------|------|----------|---------
 cno     | int(4)   | NO   |  NULL    | 主键
 cname   | char(20) | NO   |  NULL    |        
 ccredit | int(10)  | NO   |  NULL    |             
3. 成绩信息表  

 字段名 |   类型     |  空值  |默认值  | 备注
-------|------------|-------|-------|-----------
 sno   | int(4)     | NO    | NULL  | 主键    
 cno   | int(4)     | NO    | NULL  | 主键     
 grade | smallint(6)| YES   | NULL  |      

