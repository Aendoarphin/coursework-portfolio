using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;
using System.Windows.Forms;

namespace Hw3FoodReceipt
{
    internal class FileOps
    {
        public string fileContents;

        public FileOps()
        {
            fileContents = "";
        }

        public void writeFile(string path, string cartContents, string subtotal, string total, string tax)
        {
            string[] contents = { cartContents, subtotal, total, tax };
            fileContents = string.Join(Environment.NewLine, contents);

            using (StreamWriter writer = new StreamWriter(path))
            {
                writer.Write(fileContents);
            }
        }
    }
}
