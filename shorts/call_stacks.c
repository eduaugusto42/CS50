CALL STACKS

When you call a function, the system sets aside space in memory for that function to do its necessary work.
    We frequently call such chunks of memory stacks frames or function frames.

More than one functions stack frame may exist in memory at a given time. If main() calls move(), which then call direction(),
all three functions have open frames.

When a function finishes its work, its frame is popped off of the stack, and the frame immediately below it becomes the new, active,
function on the top of the stack. This function picks up immediately where it left off.

int fact(int n)
{
  if (n == 1)
  {
    return 1;
  }
  else
  {
    return n * fact(n-1);
  }
}
