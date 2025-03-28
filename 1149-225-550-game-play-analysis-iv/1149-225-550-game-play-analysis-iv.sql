
SELECT ROUND(COUNT(player_id) / (SELECT COUNT(DISTINCT player_id) FROM Activity),2) AS fraction 
FROM Activity a
WHERE a.event_date = DATE_ADD((SELECT MIN(event_date) FROM Activity WHERE player_id = a.player_id), INTERVAL 1 DAY)

