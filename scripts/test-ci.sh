output=$(make test)

# Check if any tests failed
if echo "$output" | grep -q 'FAILED'; then
  echo "$output"
  exit 1
else
  echo "All tests passed."
  exit 0
fi