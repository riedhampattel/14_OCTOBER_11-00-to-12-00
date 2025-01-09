insert into employees values (100,'Steven','King','2024-12-25',24000,null,null,90);

select employee_id,first_name from employees;

select first_name,employee_id from employees;

select * from employees;

insert into employees values (103,'Steven','King','2024-12-25',24000,null,null,90);

update employees set department_id = 100;

update employees set department_id = 90 where employee_id = 100;
update employees set department_id = 90 where employee_id = 101;

update employees set salary = salary+10000 where department_id = 90;
select * from employees;

delete from employees where employee_id = 100;
select * from employees;

delete from employees where last_name = 'King';
select * from employees;

alter table employees modify hire_date varchar(25) not null;

select * from employees;

update employees set hire_date = date_format(hire_date,'%d-%b-%y');