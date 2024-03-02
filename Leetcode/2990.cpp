# Write your MySQL query statement below
SELECT DISTINCT(user_id) FROM Loans
GROUP BY user_id
HAVING COUNT(CASE WHEN loan_type = "Mortgage" THEN loan_type END) >= 1 AND
 COUNT(CASE WHEN loan_type = "Refinance" THEN loan_type END)
 ORDER BY user_id