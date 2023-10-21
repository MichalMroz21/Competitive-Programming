CREATE PROCEDURE getUserIDs(startDate DATE, endDate DATE, minAmount INT)
BEGIN
	SELECT user_id
    FROM Purchases
    GROUP BY user_id
	HAVING SUM(IF(amount >= minAmount AND time_stamp > startDate AND time_stamp < endDate, 1, 0)) >= 1
    ORDER BY user_id;
END