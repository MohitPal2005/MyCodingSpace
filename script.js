// List of snippet files for each language
const snippetFiles = {
  cpp: [
    'Adition.cpp',
    'constructor_in_inheritance.cpp',
    'do_while.cpp',
    'Exception_handling.cpp',
    'FriendFunc.cpp',
    'Function_Template.cpp',
    'inheritance.cpp',
    'Iterators.cpp',
    'List.cpp',
    'map.cpp',
    'Memory_allocation.cpp',
    'Multiple_inheritance.cpp',
    'Overload_Extractor.cpp',
    'pattern.cpp',
    'Virtual_Base_class.cpp',
    'virtual_function.cpp',
    'vpure_virtual_function.cpp'
  ],
  py: [
    'code_language.py',
    'Game.py',
    'KBC_Game.py',
    'Library_management.py',
    'Small_Logic_codes.py'
  ],
  html: [
    'audio_video.html',
    'contact.html',
    'formatting_tags.html',
    'forms.html',
    'HTML_Table.html',
    'list.html',
    'My_first_program.html',
    'Portfolio_css.html',
    'style.css'
  ]
};

// Function to load snippets dynamically from the snippetFiles object
async function loadSnippets(language) {
  const container = document.getElementById('snippet-container');
  container.innerHTML = `<p>Loading ${language} snippets...</p>`;

  const files = snippetFiles[language];
  if (!files) {
    container.innerHTML = `<p>No snippets found for ${language}</p>`;
    return;
  }

  container.innerHTML = '';

  for (const filename of files) {
    try {
      const res = await fetch(`snippets/${language}/${filename}`);
      if (!res.ok) throw new Error(`Failed to fetch ${filename}`);
      const code = await res.text();

      const block = document.createElement('div');
      block.className = 'code-block';

      const ext = filename.split('.').pop().toLowerCase();

      let langClass = '';
      if (ext === 'cpp') langClass = 'language-cpp';
      else if (ext === 'py') langClass = 'language-python';
      else if (ext === 'html' || ext === 'css') langClass = 'language-markup';

      block.innerHTML = `
        <button class="copy-btn" onclick="copyCode(this)">Copy</button>
        <h3>${filename}</h3>
        <pre><code class="${langClass}">${escapeHtml(code)}</code></pre>
      `;

      container.appendChild(block);

      // Tell Prism to highlight the newly added code block
      Prism.highlightElement(block.querySelector('code'));

    } catch (err) {
      console.error(err);
      const errorBlock = document.createElement('div');
      errorBlock.className = 'code-block';
      errorBlock.innerHTML = `<p>Could not load snippet: ${filename}</p>`;
      container.appendChild(errorBlock);
    }
  }
}

// Utility function to escape HTML special characters
function escapeHtml(code) {
  return code
    .replace(/&/g, "&amp;")
    .replace(/</g, "&lt;")
    .replace(/>/g, "&gt;");
}

// Copy code snippet text to clipboard
function copyCode(button) {
  const code = button.nextElementSibling.nextElementSibling.innerText;
  navigator.clipboard.writeText(code).then(() => {
    button.innerText = "Copied!";
    setTimeout(() => (button.innerText = "Copy"), 1500);
  });
}
