# Write your MySQL query statement below

SELECT nxt.id 
from Weather prev, weather nxt 
where DATEDIFF(prev.recordDate, nxt.recordDate) = -1 
and prev.temperature < nxt.temperature;