create table customers
(
cu_id int primary key,
cu_name varchar(25) not null,
cu_age int not null
);

insert into customers values(101,'Rahul',20);
insert into customers values(102,'Rohan',30);
insert into customers values(103,'Rakesh',45);
insert into customers values(104,'Mahesh',26);
insert into customers values(105,'Keval',21);

create table orders
(
cu_id int,
order_id int not null,
order_price int not null,
foreign key (cu_id) references customers(cu_id)
);

insert into orders values (101,123456,1);
insert into orders values (101,123455,2);
insert into orders values (103,123457,3);
insert into orders values (104,123451,4);
insert into orders values (104,123452,5);

select * from customers;

select * from orders;

select * from customers
natural join
orders;

select customers.cu_id,customers.cu_name,orders.order_id from customers
left join orders
on customers.cu_id = orders.cu_id;

select customers.cu_id,customers.cu_name,orders.order_id from customers
right join orders
on customers.cu_id = orders.cu_id;

select customers.cu_id,customers.cu_name,orders.order_id from customers
inner join orders
on customers.cu_id = orders.cu_id;

select * from customers
cross join
orders;

select * from customers
union
select * from orders;

select * from customers
union all
select * from orders;