create table students
(
id int not null unique,
name varchar(25) not null,
english int default 0,
maths int default 0
);

truncate table students;

insert into students(id,name) values(101,'Rahul');
insert into students(id,name,english,maths) values(102,'Rohan',45,78);
insert into students(id,name,english,maths) values(103,'Prem',78,89);
insert into students(id,name,english,maths) values(104,'Shubham',45,78);
insert into students(id,name,maths) values(105,'Megh',85);

select * from students;

alter table students add column total int;

create trigger add_data
before insert on 15_october.students
for each row
set new.total = new.english + new.maths;

select * from students;

create table demo
(id int not null unique,
name varchar(25) not null
);

insert into demo values (101,'Rohan');
insert into demo values (102,'Rahul');
insert into demo values (103,'Mehul');
insert into demo values (104,'Janak');
insert into demo values (105,'Satish');

create table copied
(
id int,
name varchar(25),
copy_time time
);

create trigger copy_data
after insert on 15_october.demo
for each row
insert into copied values(new.id,new.name,curtime());

select * from demo;
	
select * from copied;