# Write your MySQL query statement below
SELECT id as id,

SUM(CASE When month='Jan' Then revenue Else null End) as Jan_Revenue,
SUM(CASE When month='Feb' Then revenue Else null End) as Feb_Revenue,
SUM(CASE When month='Mar' Then revenue Else null End) as Mar_Revenue,
SUM(CASE When month='Apr' Then revenue Else null End) as Apr_Revenue,
SUM(CASE When month='May' Then revenue Else null End) as May_Revenue,
SUM(CASE When month='Jun' Then revenue Else null End) as Jun_Revenue,
SUM(CASE When month='Jul' Then revenue Else null End) as Jul_Revenue,
SUM(CASE When month='Aug' Then revenue Else null End) as Aug_Revenue,
SUM(CASE When month='Sep' Then revenue Else null End) as Sep_Revenue,
SUM(CASE When month='Oct' Then revenue Else null End) as Oct_Revenue,
SUM(CASE When month='Nov' Then revenue Else null End) as Nov_Revenue,
SUM(CASE When month='Dec' Then revenue Else null End) as Dec_Revenue

FROM Department
GROUP BY id