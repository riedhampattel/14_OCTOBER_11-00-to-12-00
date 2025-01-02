select first_name,salary from employees;

select * from employees;

select * from employees where department_id=90;

select * from employees where employee_id=100;

select * from employees where first_name='Bruce';

select * from employees;

select * from employees order by first_name;

select * from employees order by salary asc;

select * from employees order by salary desc;

select * from employees order by 5;

select first_name,salary as income from employees order by income;

select first_name,last_name,hire_date as joining_date from employees;

select first_name,last_name,salary+10000 as income from employees;

select first_name,last_name,salary/30 as income from employees;

select first_name,last_name,salary*12 as income from employees;

select * from employees where salary>10000;

select * from employees where salary>10000 and salary<20000;

select * from employees where department_id=60 or department_id=50;

select * from employees where salary between 10000 and 20000;

select * from employees where commission_pct is not null;

select * from employees where commission_pct is null;

select * from employees where department_id in (90,60,50);

select * from employees where department_id not in (90,60,50);

select * from employees where (manager_id,department_id) in ((100,90),(103,60));

select * from employees where (manager_id,department_id) not in ((124,50),(103,60));