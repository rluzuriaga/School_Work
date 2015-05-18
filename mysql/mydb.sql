/* Make sure that the database is created first the database name is:  dunder_mifflin  */

USE dunder_mifflin;

create table customers
( userid varchar(60) not null primary key,
  passwd varchar(20) not null,
  email_address varchar(60) not null,
  name char(50) not null,
  address char(100) not null,
  city char(30) not null,
  state char(2) not null,
  tel_number char(15) not null,
  mobile_number char(15)
);

create table orders
( orderid int unsigned not null auto_increment primary key,
  userid varchar(60) not null,
  amount float(8,2) not null,
  date date not null
);

create table order_items
( item_num varchar(13) not null,
  orderid int unsigned not null,
  quantity smallint unsigned,
  primary key (orderid, item_num)
);

create table catalog
(  item_num char(13) not null primary key,
   category char(100) not null,
   description char(50) not null,
   price float(8,2) not null
);


 

