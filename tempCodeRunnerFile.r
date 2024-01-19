# Install and load required libraries
install.packages(c("rvest", "dplyr"), lib = .libPaths()[1])




# Task 1: Get a COVID-19 pandemic Wiki page using HTTP request
url <- "https://en.wikipedia.org/wiki/COVID-19_pandemic"
wiki_page <- read_html(url)

# Task 2: Extract COVID-19 testing data table from the wiki HTML page
covid_table <- wiki_page %>%
  html_table(fill = TRUE) %>%
  .[[2]]  # Assuming the testing data table is the second table on the page

# Task 3: Pre-process and export the extracted data frame
# You may need to clean and preprocess the data, depending on its structure
# Example: removing unnecessary columns
cleaned_covid_data <- covid_table %>%
  select(-ColumnToRemove)

# Export the cleaned data to a CSV file
write.csv(cleaned_covid_data, "cleaned_covid_data.csv", row.names = FALSE)

# Task 4: Get a subset of the extracted data frame
subset_data <- cleaned_covid_data %>%
  filter(Criteria)

# Task 5: Calculate worldwide COVID testing positive ratio
positive_ratio <- sum(cleaned_covid_data$Confirmed) / sum(cleaned_covid_data$Population)

# Task 6: Get a sorted name list of countries that reported their testing data
sorted_countries <- cleaned_covid_data %>%
  arrange(Country)

# Task 7: Identify country names with a specific pattern
pattern_match_countries <- cleaned_covid_data %>%
  filter(str_detect(Country, "your_pattern"))

# Task 8: Pick two countries you are interested in and review their testing data
selected_countries <- cleaned_covid_data %>%
  filter(Country %in% c("Country1", "Country2"))

# Task 9: Compare which one of the selected countries has a larger ratio of confirmed cases to population
ratio_comparison <- selected_countries %>%
  mutate(ConfirmedToPopulationRatio = Confirmed / Population)

# Task 10: Find countries with confirmed cases to population ratio rate less than a threshold
below_threshold_countries <- cleaned_covid_data %>%
  filter(Confirmed / Population < your_threshold)

# Print or use the results as needed
