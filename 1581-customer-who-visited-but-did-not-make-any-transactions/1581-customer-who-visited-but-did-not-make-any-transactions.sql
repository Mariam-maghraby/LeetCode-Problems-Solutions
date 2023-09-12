# Write your MySQL query statement below

SELECT customer_id, count(v.visit_id) as count_no_trans
from Visits v
where not exists (SELECT visit_id from Transactions t
where v.visit_id = t.visit_id )
GROUP BY customer_id
