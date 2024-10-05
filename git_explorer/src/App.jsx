import {BrowserRouter} from 'react-router-dom'

import GlobalStyles from "./styles/GlobalStyles"
import {ThemeProvider} from 'styled-components'

import { AppRoutes } from './routes/AppRoutes'

import dark from './styles/themes/dark'

export function App() {
  return (
    <ThemeProvider theme={dark}>
      <GlobalStyles />
      <BrowserRouter>
        <AppRoutes />
      </BrowserRouter>
    </ThemeProvider>
  )
}
