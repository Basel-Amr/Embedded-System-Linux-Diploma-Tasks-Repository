"""
Task-13 : 
@author : Basel Amr
"""
import pyautogui
import time

def open_email(email_subject):
  # Find the email with the specified subject
  email_subject_area = pyautogui.locateOnScreen(email_subject, confidence=0.8)

  # Click on the email subject area
  pyautogui.click(email_subject_area)

  # Wait for the email to load
  time.sleep(2)

  # Click on the "Mark as read" button
  pyautogui.click(x=500, y=500)


# Get the unread emails
unread_emails = pyautogui.locateAllOnScreen("Unread", confidence=0.8)

# For each unread email, open it and mark it as read
for unread_email in unread_emails:
    open_email(unread_email)