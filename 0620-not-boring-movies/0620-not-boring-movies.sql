# Write your MySQL query statement below
SELECT * FROM Cinema WHERE MOD(id,2)=1 AND description NOT like "boring" ORDER BY rating DESC