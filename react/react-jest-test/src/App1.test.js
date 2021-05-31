import { render, screen } from '@testing-library/react';
import App1 from './App1';

test('renders learn react link', () => {
  render(<App1 />);
  const linkElement = screen.getByText(/learn reaact/i);// / /사이에 있는 단어가 있는지 확인
  expect(linkElement).toBeInTheDocument();
});
