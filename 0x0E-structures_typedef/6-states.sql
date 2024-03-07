-- creating a database htbn_0d_usa and d tables state in it
-- creating a database
CREATE DATABASE IF NOT EXISTS htbn_0d_usa;
use htbn_0d_usa;
-- creating d table
CREATES TABLE IF NOT EXISTS states (id INT UNIQUE NOT NULL AUTO_INCREMENT, name VARCHAR(256) NOT NULL, PRIMARY KEY (id));
