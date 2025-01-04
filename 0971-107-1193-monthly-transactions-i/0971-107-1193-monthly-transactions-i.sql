SELECT 
    DATE_FORMAT(trans_date, "%Y-%m") as month,
    country,
    COUNT(*) as trans_count,
    COUNT(case when state = "approved" then 1 ELSE NULL END) as approved_count,
    SUM(amount) as trans_total_amount,
    SUM(case when state = "approved" then amount ELSE 0 END) as approved_total_amount
FROM Transactions
GROUP BY country, EXTRACT(MONTH FROM trans_date), EXTRACT(YEAR FROM trans_date)
