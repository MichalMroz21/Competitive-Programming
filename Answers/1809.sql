# Write your MySQL query statement below
SELECT P.session_id AS session_id
FROM Playback AS P
LEFT JOIN Ads AS A ON (P.customer_id = A.customer_id AND A.timestamp BETWEEN P.start_time AND P.end_time)
WHERE A.ad_id IS NULL
ORDER BY session_id