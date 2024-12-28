SELECT 
    contest_id, 
    ROUND(COUNT(DISTINCT r.user_id)*100/ (select count(*) from Users), 2)as percentage 
from Register as r
JOIN Users as u
    ON u.user_id = r.user_id
GROUP BY r.contest_id
ORDER BY percentage DESC, r.contest_id 