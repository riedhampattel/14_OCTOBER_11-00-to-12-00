create schema 15_october;

create table employees
(
employee_id int unique not null,
first_name varchar(25) not null,
last_name varchar(25) not null,
hire_date date,
salary int not null,
commission_pct float,
manager_id int,
department_id int not null
);