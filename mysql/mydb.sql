create database dunder_mifflin;

use dunder_mifflin;

create table customers
( customerid varchar(60) not null primary key,
  passwd varchar(20) not null,
  email_address varchar(60) not null,
  name char(50) not null,
  address char(100) not null,
  city char(30) not null,
  state char(2) not null,
  tel_number char(15) not null,
);

create table orders
( orderid int unsigned not null auto_increment primary key,
  customerid int unsigned not null,
  amount float(6,2),
  date date not null,
  order_status char(10),
  ship_name char(60) not null,
  ship_address char(80) not null,
  ship_city char(30) not null,
  ship_state char(20),
  ship_zip char(10),
  ship_country char(20) not null
);

create table categories
(
  catid int unsigned not null auto_increment primary key,
  catname char(60) not null
);

create table order_items
( item_num varchar(13) not null,
  orderid int unsigned not null,
  catid int unsigned,
  quantity smallint unsigned,
  primary key (orderid, item_num)
);

create table items
(  item_num unsigned not null auto_increment primary key,
   description char(50) not null,
   category char(100) not null,
   price float(8,2) not null
);

create table admin
(
  username char(16) not null primary key,
  password char(40) not null
);

grant select, insert, update, delete
on dunder_mifflin.*
to dunder_mifflin@localhost identified by 'password';


