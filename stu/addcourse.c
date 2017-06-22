#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <mysql/mysql.h>
#include "cgic.h"

int cgiMain()
{

	fprintf(cgiOut, "Content-type:text/html;charset=utf-8\n\n");

	char cname[32] = "\0";
	char cno[32] = "\0";
  char ccredit[32] = "\0";
	int status = 0;

	status = cgiFormString("cname",  cname, 32);
	if (status != cgiFormSuccess)
	{
		fprintf(cgiOut, "get cname error!\n");
		return 1;
	}

  status = cgiFormString("cno", cno, 32);
  if (status != cgiFormSuccess)
  {
    fprintf(cgiOut, "get cno error!\n");
    return 1;
  }
	status = cgiFormString("ccredit", ccredit, 32);
	if (status != cgiFormSuccess)
	{
		fprintf(cgiOut, "get ccredit error!\n");
		return 1;
	}

  int ret;
	char sql[128] = "\0";
	MYSQL *db;

	//初始化
	db = mysql_init(NULL);
	if (db == NULL)
	{
		fprintf(cgiOut,"mysql_init fail:%s\n", mysql_error(db));
		return -1;
	}

	//连接数据库
	db = mysql_real_connect(db, "127.0.0.1", "root", "123456", "stu",  3306, NULL, 0);
	if (db == NULL)
	{
		fprintf(cgiOut,"mysql_real_connect fail:%s\n", mysql_error(db));
		mysql_close(db);
		return -1;
	}

	strcpy(sql, "create table course(cno int not null primary key, cname char(20) not null, ccredit int not null");
  if ((ret = mysql_real_query(db, sql, strlen(sql) + 1)) != 0)
  {
    if (ret != 1)
    {
      fprintf(cgiOut,"mysql_real_query fail:%s\n", mysql_error(db));
      mysql_close(db);
      return -1;
    }
  }

  sprintf(sql, "insert into course values(%d, '%s', %d)", atoi(cno), cname, atoi(ccredit));
  if (mysql_real_query(db, sql, strlen(sql) + 1) != 0)
  {
    fprintf(cgiOut, "%s\n", mysql_error(db));
    mysql_close(db);
    return -1;
  }

  fprintf(cgiOut, "add course ok!\n");
  mysql_close(db);
  return 0;
}
