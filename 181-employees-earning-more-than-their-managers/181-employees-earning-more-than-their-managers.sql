# Write your MySQL query statement below
select name as Employee from Employee e
left join (select distinct id, salary as maSalary from Employee) m
On e.managerId = m.id
where salary> maSalary