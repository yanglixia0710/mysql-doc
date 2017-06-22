#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <mysql/mysql.h>
#include "cgic.h"

int cgiMain()
{

	fprintf(cgiOut, "Content-type:text/html;charset=utf-8\n\n");

	char sno[32] = "\0";
	char sname[32] = "\0";
	char sage[16] = "\0";
	char sex[10]="\0";
	char sedeptno[16]="\0";
	char state[16]="\0";
	int status = 0;

	status = cgiFormString("sname",  sname, 32);
	if (status != cgiFormSuccess)
	{
		fprintf(cgiOut, "get name error!\n");
		return 1;
	}

	status = cgiFormString("sage",  sage, 16);
	if (status != cgiFormSuccess)
	{
		fprintf(cgiOut, "get age error!\n");
		return 1;
	}

	status = cgiFormString("sno", sno, 32);
	if (status != cgiFormSuccess)
	{
		fprintf(cgiOut, "get sno error!\n");
		return 1;
	}
	status = cgiFormString("sex",sex, 10);
	if (status != cgiFormSuccess)
	{
		fprintf(cgiOut, "get sex error!\n");
		return 1;
	}
	status = cgiFormString("sedeptno", sedeptno, 16);
	if (status != cgiFormSuccess)
	{
		fprintf(cgiOut, "get sedeptno error!\n");
		return 1;
	}
	/*status = cgiFormString("state", state,16);
	if (status != cgiFormSuccess)
	{
		fprintf(cgiOut, "get state error!\n");
		return 1;
	}
*/
	//fprintf(cgiOut, "name = %s, age = %s, stuId = %s\n", name, age, stuId);

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

	strcpy(sql, "create table information(sno int not null primary key, sname char(20) not null, sage int not null,sex char(10) not null default 'F',sedeptno int not null,state char(10)");
	if ((ret = mysql_real_query(db, sql, strlen(sql) + 1)) != 0)
	{
		if (ret != 1)
		{
			fprintf(cgiOut,"mysql_real_query fail:%s\n", mysql_error(db));
			mysql_close(db);
			return -1;
		}
	}

	sprintf(sql, "insert into information values(%d, '%s' ,'%s',%d,%d,%d)", atoi(sno), sname,sex, atoi(sage),atoi(sedeptno),atoi(state));
	if (mysql_real_query(db, sql, strlen(sql) + 1) != 0)
	{
		fprintf(cgiOut, "%s\n", mysql_error(db));
		mysql_close(db);
		return -1;
	}

	fprintf(cgiOut, "add student ok!\n");
	mysql_close(db);
	return 0;
}
