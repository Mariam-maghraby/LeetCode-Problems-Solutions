# Write your MySQL query statement below
SELECT * FROM Cinema WHERE NOT id%2=0 AND Not description like "boring" ORDER BY rating DESC