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

describe employees;

-- modify column
alter table employees modify hire_date date not null;
describe employees;
alter table employees modify department_id int;
describe employees;

-- rename table
alter table employees rename to emp_data;
describe employees;
describe emp_data;
alter table emp_data rename to employees;

-- rename column
alter table employees rename column salary to income;
describe employees;

-- add column to the end
alter table employees add column job_id int not null;
describe employees;

-- add column at specific position
alter table employees add column job_time time not null after hire_date;
describe employees;

-- delete column
alter table employees drop column job_id;
alter table employees drop column job_time;
describe employees;

drop table employees;

drop schema 15_october;
describe employees;