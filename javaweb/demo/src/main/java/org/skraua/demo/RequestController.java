package org.skraua.demo;

import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import jakarta.servlet.http.HttpServletRequest;

@RestController
public class RequestController {

    @RequestMapping("/request")
    public String request(HttpServletRequest request) {
        // 获取请求方式
        String method = request.getMethod();
        System.out.println(method);

        // 获取请求url
        String url = request.getRequestURL().toString();
        System.out.println(url);

        // 获取请求协议
        String protocol = request.getProtocol();
        System.out.println(protocol);

        // 获取请求参数
        // String queryString = request.getQueryString();
        // System.out.println(queryString);

        String queryString = request.getParameter("name");
        System.out.println(queryString);

        // 获取请求头
        String header = request.getHeader("User-Agent");
        String accept = request.getHeader("Accept");
        System.out.println(header);
        System.out.println(accept);
        System.out.println(accept);
        System.out.println(accept);
        System.out.println(accept);
        System.out.println();

        return "OK";
    }
}
