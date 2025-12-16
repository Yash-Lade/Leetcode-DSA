# Write your MySQL query statement below
select e1.name as Employee
from Employee e1
left join Employee e2
on e1.managerId = e2.id
where e1.salary > e2.salary #here-e1.salary is base table or employee salary and e2 is manager salary
