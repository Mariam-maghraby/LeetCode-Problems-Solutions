# Write your MySQL query statement below
SELECT unique_id, name
from EmployeeUNI eu right outer join Employees e
on eu.id = e.id;
