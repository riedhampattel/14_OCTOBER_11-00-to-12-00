create role admin;

create user Rahul identified by 'abc@123' default role admin;

grant select on employees to Rahul;

revoke select on employees from Rahul;

grant select,delete on employees to Rahul;

revoke delete on employees from Rahul;