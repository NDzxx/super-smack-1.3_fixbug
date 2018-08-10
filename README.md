1.编译
```

LIBZ_LIB="-lm"
./configure --prefix=/usr/local/super-smack --with-mysql --with-mysql-lib=/usr/local/mysql/lib/mysql/ --with-mysql-include=/usr
make && make install

```

2.使用
```
生成数据库文件
/usr/local/super-smack/bin/gen-data -n 90000 -f %12-12s%n,%25-25s,%n,%d>  ../smack-data/http_auth.dat
或者使用smack-script
导入数据库文件
/www/server/mysql/bin/mysqlimport -L -uroot -proot -h192.168.181.233  test ../smack-data/http_auth.dat 
或者导入使用test.sql
/usr/local/super-smack/bin/super-smack -d mysql select-key.smack 10 1000
/usr/local/super-smack/bin/super-smack -d mysql select-key.smack 1 20000
```
