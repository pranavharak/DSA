import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;

public class HelloWorldServlet extends HttpServlet {

    public void doGet(HttpServletRequest request, HttpServletResponse response) 
            throws ServletException, IOException {
        
        // Set the content type for browser
        response.setContentType("text/html");

        // Get the output writer
        PrintWriter out = response.getWriter();

        // Display message
        out.println("<h1>Hello World</h1>");
    }
}
