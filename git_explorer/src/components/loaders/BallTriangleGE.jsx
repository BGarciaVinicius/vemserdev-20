import { BallTriangle } from 'react-loader-spinner'

import { useTheme } from 'styled-components'

export const BallTriangleGE = () => {
  const theme = useTheme()

  return (
    <BallTriangle
      height={100}
      width={100}
      radius={5}
      color={theme.primary}
      ariaLabel="ball-triangle-loading"
      wrapperStyle={{}}
      wrapperClass=""
      visible={true}
    />
  )
}