# Write your MySQL query statement below
SELECT CLASS FROM COURSES
group by class having COUNT(CLASS)>=5;