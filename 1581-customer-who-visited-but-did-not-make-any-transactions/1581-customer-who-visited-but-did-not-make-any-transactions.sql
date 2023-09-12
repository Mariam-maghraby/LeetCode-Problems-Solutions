# Write your MySQL query statement below

SELECT customer_id, count(v.visit_id) as count_no_trans
from Visits v left join  Transactions t
on v.visit_id = t.visit_id where transaction_id is null
GROUP BY v.customer_id; ;
