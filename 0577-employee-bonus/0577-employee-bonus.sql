# Write your MySQL query statement below

SELECT name, bonus
from Employee e left join Bonus b
on e.empId = b.empId
where bonus < 1000 or bonus is null
