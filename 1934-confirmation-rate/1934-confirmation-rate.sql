# Write your MySQL query statement below
SELECT s.user_id , ROUND(avg(IF(c.action ='confirmed',1,0)), 2) as confirmation_rate
from Confirmations as c right join Signups as s
on c.user_id = s.user_id
GROUP BY s.user_id
