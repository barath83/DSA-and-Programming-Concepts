--https://www.hackerrank.com/challenges/weather-observation-station-6/problem

-- ^ indicates match in beginning of string followed by vowels in []


SELECT DISTINCT CITY 
FROM STATION
WHERE CITY REGEXP '^[aeiouAEIOU]';
