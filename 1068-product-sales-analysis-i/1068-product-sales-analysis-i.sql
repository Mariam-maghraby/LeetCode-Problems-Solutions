# Write your MySQL query statement below

SELECT product_name, year, price 
from Product as p, Sales as s
where p.product_id = s.product_id