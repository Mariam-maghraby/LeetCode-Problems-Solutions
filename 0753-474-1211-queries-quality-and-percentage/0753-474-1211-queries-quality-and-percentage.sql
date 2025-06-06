 SELECT 
    query_name, 
    ROUND(AVG(rating/position) , 2) as quality,
    ROUND(AVG(if(rating < 3,1,0))*100, 2) as poor_query_percentage
FROM Queries
GROUP by query_name
