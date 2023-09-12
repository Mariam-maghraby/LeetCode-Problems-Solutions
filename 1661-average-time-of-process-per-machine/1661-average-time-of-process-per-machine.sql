# Write your MySQL query statement below
SELECT s.machine_id, 
(round(avg(e.timestamp - s.timestamp), 3)) as processing_time
from Activity s, Activity e
where s.process_id = e.process_id 
  and s.timestamp < e.timestamp
  and s.machine_id = e.machine_id 
GROUP BY machine_id
