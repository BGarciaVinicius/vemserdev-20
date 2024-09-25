import { FaSearch } from "react-icons/fa";
import { Container, Content } from './styles'

export const Dashboard = () => {
    return (
        <Container>
            <Content>
                <input type="text" />

                <button>Buscar <FaSearch /></button>
            </Content>   
        </Container>
    )
}