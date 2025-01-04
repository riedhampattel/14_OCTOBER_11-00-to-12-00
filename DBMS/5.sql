select * from employees;

delete from employees where employee_id = 100;
delete from employees where employee_id = 101;
delete from employees where employee_id = 102;

select * from employees;

rollback;

select * from employees;

delete from employees where employee_id = 100;
delete from employees where employee_id = 101;
delete from employees where employee_id = 102;

select * from employees;

commit;

rollback;

select * from employees;

savepoint d1;
delete from employees where employee_id = 103;
savepoint d2;
delete from employees where employee_id = 104;
savepoint d3;
delete from employees where employee_id = 107;

select * from employees;

rollback to d3;

select * from employees;