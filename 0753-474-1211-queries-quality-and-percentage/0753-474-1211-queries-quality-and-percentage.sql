SELECT 
    query_name, 
    ROUND(AVG(rating/position) , 2) as quality,
    ROUND(COUNT(case when rating < 3 then 1 else null end)*100 /COUNT(*), 2) as poor_query_percentage
FROM Queries
GROUP by query_name
