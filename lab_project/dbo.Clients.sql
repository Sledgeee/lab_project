CREATE TABLE [dbo].[Clients] (
    [Id]         INT          NOT NULL	IDENTITY	PRIMARY KEY,
    [Email]      VARCHAR (50) NOT NULL,
    [Login]      VARCHAR (50) NOT NULL,
    [Password]   INT          NOT NULL,
    [Firstname]  VARCHAR (50) NULL,
    [Secondname] VARCHAR (50) NULL,
    [Age]        INT          NULL,
    [Sex]        VARCHAR (50) NULL,
    [Money]      FLOAT (53)   NOT NULL,
    [Country]    VARCHAR (50) NULL,
    [City]       VARCHAR (50) NULL
);

