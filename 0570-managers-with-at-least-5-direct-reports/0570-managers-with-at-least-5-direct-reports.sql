# Write your MySQL query statement below
SELECT m.name
from Employee as m, Employee as e
WHERE m.id = e.managerId
GROUP BY e.managerId
HAVING COUNT(e.managerId) >= 5;