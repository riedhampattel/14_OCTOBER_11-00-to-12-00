delimiter &&
create procedure display_info()
select first_name,last_name from employees;
end &&

call display_info();

delimiter &&
create procedure info(IN id int)
begin
select * from employees where department_id = id;
end &&

call info(60);

call info(50);

drop procedure info;

delimiter &&
create procedure update_data(in sal int,in id int)
begin
update employees set salary = sal where employee_id = id;
end &&

select * from employees;

call update_data(20000,103);

select * from employees;

create view emp_data as select employee_id,first_name,last_name from employees;

select * from emp_data;

drop view emp_data;